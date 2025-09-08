#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100

struct Contact {
    char Nom[10];
    char Numero[10];
    char Email[10];
};

struct Contact contacts[100];

void  Ajouter_un_Contact(){
	if(num_contact<100){
		struct Contact contact;
		printf("Ajouter un contact\n");
		printf("Nom de contact: ");
		scanf("%s",&contact.Nom);
		printf("\n");
		printf("Numero de telephone: ");
		scanf("%s",&contact.Numero);
		printf("\n");
		printf("Email: ");
		scanf("%s",&contact.Email);
		printf("\n");
		contacts[num_contact] = contact;
		num_contact++;
	} else {
		printf("Le livre de contacts est plain\n");
	}
}

void Afficher_Contacts() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m           Contact non disponible             \x1b[0m\n");
        return;
    }

    int nomMax = 3, telMax = 9, emailMax = 5;
    for (int i = 0; i < num_contact; i++) {
        int nomLen = strlen(contacts[i].Nom);
        int numlen = strlen(contacts[i].Numero);
        int emailLen = strlen(contacts[i].Email);
        if (nomLen > nomMax) nomMax = nomLen;
        if (numlen > telMax) telMax = numlen;
        if (emailLen > emailMax) emailMax = emailLen;
    }

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");

    printf("\t\t\t\t\x1b[45m \x1b[0m  \x1b[1;37;44m%-3s %-*s %-*s %-*s\x1b[0m  \x1b[45m \x1b[0m\n",
           "ID", nomMax, "Nom", telMax, "Numero", emailMax, "Email");

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");

    for(int i=0;i<num_contact;i++){
        printf("\t\t\t\t\x1b[45m \x1b[0m  %-3d %-*s %-*s %-*s  \x1b[45m \x1b[0m\n",
               i+1,
               nomMax, contacts[i].Nom,
               telMax, contacts[i].Numero,
               emailMax, contacts[i].Email);
    }

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");
}

void Rechercher_Contact() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m Pas de contact \x1b[0m\n");
        return;
    }

    char nom[50];
    printf("Nom: ");
    scanf("%s", nom);

    for(int i=0;i<num_contact;i++) {
        if(strcasecmp(contacts[i].Nom, nom)==0) {
            printf("\t\t\t\t\x1b[42m Contact trouve: \x1b[0m\n");
            printf("Nom: %s | Numero: %s | Email: %s\n", contacts[i].Nom, contacts[i].Numero, contacts[i].Email);
            return;
        }
    }
    printf("\t\t\t\t\x1b[101m Pas de contact \x1b[0m\n");
}

void Modifier_Contact() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m Pas de contact a modifier ! \x1b[0m\n");
        return;
    }

    char nom[50];
    printf("Nom : ");
    scanf("%s", nom);

    for(int i=0;i<num_contact;i++) {
        if(strcasecmp(contacts[i].Nom, nom)==0) {
            printf("Nouveau nom : ");
            scanf("%s", contacts[i].Nom);

            do {
                printf("Nouveau numero: ");
                scanf("%s", contacts[i].Numero);
            } while(!verifier_numero(contacts[i].Numero));

            do {
                printf("Nouvel email: ");
                scanf("%s", contacts[i].Email);
            } while(!verifier_email(contacts[i].Email));

            printf("\t\t\t\t\x1b[42m Contact modifie \x1b[0m\n");
            return;
        }
    }
    printf("\t\t\t\t\x1b[101m Contact non disponible \x1b[0m\n");
}

void Supprimer_un_Contact(){
	
}



void Afficher_Choix(){
	// Affichage de choix
	// system("cls");
	printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[6;32;7;49m1: Ajouter un Contact\x1b[0m                             \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	2: Afficher Tous les Contacts Disponibles         \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	3: Mettre un contact                              \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	4: Rechercher un Livre                            \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;31;7;49m5: Supprimer un contact\x1b[0m                           \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	0: Sortir                                         \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
}

int main(){
	int choix, estInt;;

	Afficher_Choix();
	while(1==1){
		Afficher_Choix();
		do{
			estInt = scanf("%d", &choix);
			if(estInt!=1){
				printf("Vous n'avez pas entree un entier\n");
				while(getchar()!='\n');
			}

		}while(estInt!=1);

		if(choix==1){
			system("cls");
			Ajouter_un_Contact();
		}
		system("cls");
		Afficher_Choix();
		if(choix==2){
			system("cls");
			Afficher_Contacts();
		} 
		
	}

    return 0;
}
