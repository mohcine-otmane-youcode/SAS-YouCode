#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char livresTitres[10][10];
char livresAuteurs[10][10];
float livresPrix[10];
int stock=0,i,j;
int livreId, attribu;
char titresCollones[4][8] = {"ID", "Auteur", "Prix", "Quantite"};


int main(int argc, char *argv[]) {
	int chois;


	Les_chois:
	system("cls");
	// Affichage de chois
	printf("=======================================\n");
	printf("\x1b[32m1: Ajouter un Livre au Stock\n");
	printf("\x1b[0m2: Afficher Tous les Livres Disponibles\n");
	printf("3: Mettre a Jour la Quantite d'un Livre\n");
	printf("\x1b[31m4: Supprimer un Livre du Stock\n");
	printf("\x1b[0m5: Afficher le Nombre Total de Livres en Stock\n");
	printf("0: Sortir\n");
	printf("=======================================\n");
	printf("Votre chois: \n");
	scanf("%d",&chois);
	system("cls");


	switch(chois){

		case 1: //Ajouter
			printf("Entrer le titre de livre\n");
			scanf(" %[^\n]",&livresTitres[stock]);
			printf("Entrer l\'auteur de livre\n");
			scanf(" %[^\n]",&livresAuteurs[stock]);
			printf("Entrer le prix de livre\n");
			scanf("%f",&livresPrix[stock]);
			stock++;
		    goto Les_chois;

		case 2: //Afficher
			printf("Les livres disponibles sont\n");

			//Titres de collones




			for(i=0;i<stock;i++){
//				printf("---<== Livre: %d ==>---\n",i+1);
//				printf("Titre: %s\n",livresTitres[i]);
//				printf("Auteur: %s\n",livresAuteurs[i]);
//				printf("Prix: %f\n",livresPrix[i]);

				int sizeTitre = 0,sizeAuteur=0,sizePrix=0;

				sizeTitre = strlen(livresTitres[i]);
                sizeAuteur = strlen(livresAuteurs[i]);


				printf("+");
				for(j=0;j<sizeTitre+4;j++){
					printf("-");
				}
				printf("+");
				for(j=0;j<sizeAuteur+4;j++){
					printf("-");
				}
				printf("+");

				printf("\n");
				printf("|  %s  ",livresTitres[i]);
				printf("|  %s  |",livresAuteurs[i]);
				printf("   %.2f  |",livresPrix[i]);

				printf("\n");

				printf("+");
				for(j=0;j<sizeTitre+4;j++){
					printf("-");
				}
				printf("+");

				for(j=0;j<sizeAuteur+4;j++){
					printf("-");
				}
				printf("+");


				printf("\n");



			}
			printf("\n");
			printf("1: Menu principale\n");
			printf("0: sortir\n");
			scanf("%d",&chois);
			if(chois==0){
				break;
			} else {
				goto Les_chois;
			}



		case 3: //Mettre a jour
			printf("Les livres disponibles sont\n");
			for(i=0;i<stock;i++){
				printf("---<== Livre: %d ==>---\n",i+1);
				printf("Titre: %s\n",livresTitres[i]);
				printf("Auteur: %s\n",livresAuteurs[i]);
				printf("Prix: %f\n",livresPrix[i]);
			}

			printf("Choisir le livre a mettre a jour\n");
			scanf("%d",&livreId);
			printf("Choisir l\'atribu a mettre a jours\n");
			printf("1: Titre\n");
			printf("2: Auteur\n");
			printf("3: Prix\n");
			scanf("%d",&attribu);
			switch(attribu){
				case 1:
					printf("Entrer le titre de livre\n");
					scanf(" %[^\n]",&livresTitres[livreId]);
				case 2:
					printf("Entrer l\'auteur de livre\n");
					scanf(" %[^\n]",&livresAuteurs[livreId]);
				case 3:
					printf("Entrer le prix de livre\n");
					scanf("%f",&livresPrix[livreId]);
			}
		    goto Les_chois;
		case 4:
//			supprimer_un_livre();

			system("cls");

			//Afficher

			afficher:

			printf("Les livres disponibles sont\n");
			for(i=0;i<stock;i++){
				printf("---<== Livre: %d ==>---\n",i+1);
				printf("Titre: %s\n",livresTitres[i]);
				printf("Auteur: %s\n",livresAuteurs[i]);
				printf("Prix: %f\n",livresPrix[i]);
			}
			printf("\n");

			//Suprimer
			printf("Choisir le livre a suprimer ou enter -1 pour annuler\n");
			scanf("%d",&livreId);
			system("cls");
			if(livreId==-1){
				goto Les_chois;
			}
			if(livreId>-1 && livreId<stock){
				for(i=livreId;i<stock-1;i++){
					for(j=0;j<10;j++){
						livresTitres[i][j] = livresTitres[i+1][j];
						livresAuteurs[i][j] = livresAuteurs[i+1][j];
						livresPrix[i] = livresPrix[i+1];
					}
				}
				stock--;
				goto afficher;
			}


			goto afficher;

//			livresTitres[livreId] = "";
//			livresAuteurs[livreId] = "";

		    goto Les_chois;
		case 5:
//			afficher_le_nombre_total();
			printf("Le nombre total de stock est: %d",stock);
		    goto Les_chois;
		case 6:
		    break;
	}



	return 0;
}
