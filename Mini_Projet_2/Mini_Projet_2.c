#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num_contact = 0,i,j;

struct Contact{
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

void Afficher_Un_Contact(int contactId){
	int nomMax = 3, telMax = 9, emailMax = 5;
    for (int i = 0; i < num_contact; i++) {
        int nomLen = strlen(contacts[i].Nom);
        int numlen = strlen(contacts[i].Numero);
        int emailLen = strlen(contacts[i].Email);
        if (nomLen > nomMax){
			nomMax = nomLen;
		}
        if (numlen > telMax){
			telMax = numlen;
		}
        if (emailLen > emailMax){ 
			emailMax = emailLen;
		}
    }
	printf("| %-2d | %-*s | %-*s | %-*s |\n",contactId + 1, nomMax, contacts[contactId].Nom,telMax, contacts[contactId].Numero,emailMax, contacts[contactId].Email);
}

void Afficher_Contacts(){
	for (i = 0; i < num_contact; i++) {
		Afficher_Un_Contact(i);
	}
}


void Rechercher_un_Contact(){
	char Nom[10];
	system("cls");
	printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
	printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;5;49m               Recherche                          \x1b[45m \x1b[0m\n");
	printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
	printf("\n\n");
	printf("\x1b[42m    \x1b[0mEntrer le nom de contact\x1b[42m    \x1b[0m\n");
	scanf(" %[^\n]",&Nom);

	Afficher_Contacts();
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