#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char livresTitres[10][10], livresAuteurs[10][10], titresCollones[4][8] = {"ID", "Auteur", "Prix", "Quantite"}, titre[10];
float livresPrix[10];
int livresQuantite[10],stock=0,i,j, sizeTitreMax = 0, sizeAuteurMax = 0, livreId, attribu, choix;



int main(int argc, char *argv[]) {


	Les_choix:
	system("cls");
	// Affichage de chois
	printf("=======================================\n");
	printf("\x1b[32m1: Ajouter un Livre au Stock\n");
	printf("\x1b[0m2: Afficher Tous les Livres Disponibles\n");
	printf("3: Mettre a Jour la Quantite d'un Livre\n");
	printf("4: Rechercher un Livre\n");
	printf("\x1b[31m5: Supprimer un Livre du Stock\n");
	printf("\x1b[0m6: Afficher le Nombre Total de Livres en Stock\n");
	printf("0: Sortir\n");
	printf("=======================================\n");
	printf("Votre choix: \n");
	scanf("%d",&choix);
	system("cls");
	


	switch(choix){

		case 1: //Ajouter
			printf("Entrer le titre de livre\n");
			scanf(" %[^\n]",&livresTitres[stock]);
			printf("Entrer l\'auteur de livre\n");
			scanf(" %[^\n]",&livresAuteurs[stock]);
			printf("Entrer le prix de livre\n");
			scanf("%f",&livresPrix[stock]);
			printf("Entrer la quantite\n");
			scanf("%f",&livresQuantite[stock]);
			stock++;
		    goto Les_choix;

		case 2: //Afficher
		    afficher:
			printf("Les livres disponibles sont\n");

			//Titres de collones

			for(i=0;i<stock;i++){
				int sizeTitre = 0,sizeAuteur=0,sizePrix=0;

				sizeTitre = strlen(livresTitres[i]);
                sizeAuteur = strlen(livresAuteurs[i]);

                if(sizeTitreMax<sizeTitre){
                    sizeTitreMax = sizeTitre;
                }
                if(sizeTitreMax<sizeTitre){
                    sizeAuteurMax = sizeAuteur;
                }

				printf("+");
				for(j=0;j<sizeTitreMax+4;j++){
					printf("-");
				}
				printf("+");
				for(j=0;j<sizeAuteurMax+8;j++){
					printf("-");
				}
				printf("+");

				printf("\n");

				printf("|  %s  ",livresTitres[i]);
				printf("|   %s  |",livresAuteurs[i]);
				printf("  %.2f  |",livresPrix[i]);

				printf("\n");
/*
				printf("+");
				for(j=0;j<sizeTitreMax+4;j++){
					printf("-");
				}
				printf("+");

				for(j=0;j<sizeAuteurMax+8;j++){
					printf("-");
				}
				printf("+");
				*/
			}
        printf("Entrer 0 pour revenir au menu principal\n");

        scanf("%d",&attribu);
        if(attribu==0){
            goto Les_choix;
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
		    goto Les_choix;


        case 4: //Rechercher
            printf("Chercher un livre par\n");
            printf("1: Titre\n");
            printf("2: Auteur\n");

            scanf("%d",&choix);
            if(choix==1){
                printf("Le titre a chercher: ");
                scanf(" %[^\n]",&titre);
                for(i=0;i<stock;i++){
                    if(strcmp(livresTitres[i],titre)){
                      printf("Titre: %s\n",livresTitres[i]);
                      printf("Auteur: %s\n",livresAuteurs[i]);
                      printf("Prix: %f\n",livresPrix[i]);
                    } else {
                        printf("Le livre que vous cherchez n'existe pas\n");
                    }
                }
            goto Les_choix;

        case 5:

			//Afficher
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
				goto Les_choix;
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
			}
		    goto Les_choix;
		case 6:
			printf("Le nombre total de stock est: %d",stock);
		    goto Les_choix;
		case 7:
		    break;
	}
	}
	return 0;
	}
