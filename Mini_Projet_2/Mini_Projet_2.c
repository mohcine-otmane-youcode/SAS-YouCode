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
	for (int i = 0; i < num_contact; i++) {
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

	for(i=0;i<num_contact;i++){
		if(strcmp(Nom,contacts[i].Nom)==0){
			// Afficher_Un_Contact(i);
		}
	}


}

void Supprimer_un_Contact(){
	
}



int Afficher_Choix(){
	// Affichage de choix
		int choix;
		printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[6;32;7;49m1: Ajouter un Contact\x1b[0m                             \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	2: Afficher Tous les Contacts Disponibles         \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	3: Mettre un contact                              \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	4: Rechercher un Livre                            \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;31;7;49m5: Supprimer un contact\x1b[0m                           \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	0: Sortir                                         \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
		return choix;
}

int main(){
	int choix;
	// while(1==1){
	// 	choix = Afficher_Choix();
	// 	Ajouter_un_Contact();
	// 	Afficher_Tous_les_Contacts();
		
	// }

	Ajouter_un_Contact();
	Ajouter_un_Contact();
	Afficher_Contacts();
	// Rechercher_un_Contact();
	
	
	
	
	return 0;
}