#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char livresTitres[10][10], livresAuteurs[10][10], titre[10];
float livresPrix[10], livresQuantite[10];
int stock=0,i,j, sizeTitreMax = 2, sizeAuteurMax = 6, livreId, attribu, choix;



int main() {

    system("cls");
	Les_choix:
		// Affichage de choix
		printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;7;49m1: Ajouter un livre\x1b[0m                               \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	2: Afficher Tous les Livres Disponibles           \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	3: Mettre a Jour la Quantite d'un Livre           \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	4: Rechercher un Livre                            \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;31;7;49m5: Supprimer un Livre du Stock\x1b[0m                    \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[0m6: Nombre Total de Livres en Stock                \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[45m \x1b[0m	0: Sortir                                         \x1b[45m \x1b[0m\n");
		printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");

		printf("\x1b[5;32;7;49m->\x1b[0m:");
		scanf("%d",&choix);
		if(choix==1){
			system("cls");
			goto Ajouter;
		} else if(choix==2){
			system("cls");
			goto Afficher;
		} else if(choix==3){
			system("cls");
			goto Mettre_a_jour;
		} else if(choix==4){
			system("cls");
			goto Rechercher;
		} else if(choix==5){
			system("cls");
			goto Suprimer;
		} else if(choix==6){
			system("cls");
			goto Nombrestock;
		} else {
			printf("\t\t\t\t	\x1b[5;31;3;49m Erreur, Vous avez abuse le systeme\x1b[0m                    \n");
			exit(1);
		}

	Ajouter:
			system("cls");
			printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
			printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;5;49m           Ajouter un livre                       \x1b[45m \x1b[0m\n");
			printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");

			printf("\n\n");
			printf("\x1b[42m    \x1b[0mEntrer le titre de livre\x1b[42m    \x1b[0m\n");
			scanf(" %[^\n]",&livresTitres[stock]);
			printf("\x1b[42m    \x1b[0mEntrer l\'auteur de livre\x1b[42m    \x1b[0m\n");
			scanf(" %[^\n]",&livresAuteurs[stock]);
			float prix;
			printf("\x1b[42m    \x1b[0mEntrer le prix de livre\x1b[42m    \x1b[0m\n");
			scanf("%f",&prix);
			while(prix>100){
				printf("\x1b[5;31;3;49mLivre trop cher\x1b[0m\n");
				printf("\x1b[42m    \x1b[0mEntrer le prix de livre\x1b[42m    \x1b[0m\n");
				scanf("%f",&prix);
			}

			livresPrix[i] = prix;




			printf("\x1b[42m    \x1b[0mEntrer la quantite\x1b[42m    \x1b[0m\n");
			scanf("%f",&livresQuantite[stock]);
			stock++;

			printf("\x1b[32mLivre Ajoute avec succes entrer 1 pour revenir\x1b[0m\n");

			if(scanf("%d",&attribu)==1){
				system("cls");
				goto Les_choix;
			}




	Afficher:
			//Titres de collones
			printf("Les livres disponibles sont\n");
			//ID
			printf("\t\t\t\t\x1b[104m ");
			for(j=0;j<2+4;j++){
				printf(" ");
			}
			//Titre
			printf(" ");
			for(j=0;j<5+4;j++){
				printf(" ");
			}
			//Auteur
			printf(" ");
			for(j=0;j<6+4;j++){
				printf(" ");
			}

			//Prix
			printf(" ");
			for(j=0;j<4+4;j++){
				printf(" ");
			}
			//Quantite
			printf(" ");
			for(j=0;j<8+4;j++){
				printf(" ");
			}
			printf(" \x1b[0m\n");


			printf("\t\t\t\t|  ID  |  Titre  |  Auteur  |  Prix  |  Quantite  |\n");


			//ID
			printf("\t\t\t\t\x1b[104m ");
			for(j=0;j<2+4;j++){
				printf(" ");
			}
			//Titre
			printf(" ");
			for(j=0;j<5+4;j++){
				printf(" ");
			}
			//Auteur
			printf(" ");
			for(j=0;j<6+4;j++){
				printf(" ");
			}

			//Prix
			printf(" ");
			for(j=0;j<4+4;j++){
				printf(" ");
			}
			//Quantite
			printf(" ");
			for(j=0;j<8+4;j++){
				printf(" ");
			}
			printf(" \x1b[0m");


			for(i=0;i<stock;i++){
				printf("\n");
				printf("\t\t\t\t|  %.2d  |", i+1, livresTitres[i],livresAuteurs[i]);
				printf("  %.5s  |", livresTitres[i]);

				printf("  %.6s  ", livresAuteurs[i]);

				printf("|  %.2f ", livresPrix[i]);
				if(livresPrix[i]<10){
					printf(" ");
				}
				printf("|  %.2f     ", livresQuantite[i]);
				if(livresQuantite[i]<10){
					printf(" ");
				}
				printf("|\n");

				//ID
				printf("\t\t\t\t\x1b[104m ");
				for(j=0;j<2+4;j++){
					printf(" ");
				}
				//Titre
				printf(" ");
				for(j=0;j<5+4;j++){
					printf(" ");
				}
				//Auteur
				printf(" ");
				for(j=0;j<6+4;j++){
					printf(" ");
				}

				//Prix
				printf(" ");
				for(j=0;j<4+4;j++){
					printf(" ");
				}
				//Quantite
				printf(" ");
				for(j=0;j<8+4;j++){
					printf(" ");
				}
				printf(" \x1b[0m");
			}

			printf("\x1b[0m\n");


	        printf("Entrer 1 pour revenir au menu principal\n");
	        if(scanf("%d",&attribu)==1){
	        	system("cls");
	            goto Les_choix;
	        }


        Mettre_a_jour:

        	printf("\n\n");

        	if(stock>0){
        		system("cls");
				printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
				printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;49m           Livres disponibles                     \x1b[45m \x1b[0m\n");
				printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
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
						printf("L'ancien titre: %s", livresTitres[livreId-1]);
						scanf(" %[^\n]",&livresTitres[livreId-1]);
					case 2:
						printf("Entrer l\'auteur de livre\n");
						scanf(" %[^\n]",&livresAuteurs[livreId]);
					case 3:
						printf("Entrer le prix de livre\n");
						scanf("%f",&livresPrix[livreId]);
					case 4:
						printf("Entrer la quantite de livre\n");
						scanf("%f",&livresPrix[livreId]);
				}
			} else {
				system("cls");
				printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");
				printf("\t\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;49m           Pas de Livres disponibles              \x1b[45m \x1b[0m\n");
				printf("\t\t\t\t\x1b[104m                                                           \x1b[0m\n");

				printf("Clicker Entrer pour revenir au menu principal\n");
				getchar();
				getchar();
			}
			system("cls");
			goto Les_choix;



		Rechercher:

			system("cls");
			printf("\t\t\t\x1b[104m                                                           \x1b[0m\n");
			printf("\t\t\t\x1b[45m \x1b[0m	\x1b[5;32;5;49m           Rechercher un livre                    \x1b[45m \x1b[0m\n");
			printf("\t\t\t\x1b[104m                                                           \x1b[0m\n");


			printf("\n\n");
			printf("\x1b[42m    \x1b[0mChercher un livre par\x1b[42m    \x1b[0m\n");
			printf("\n\n");
            printf("1: Titre\n");
            printf("2: Auteur\n");

            scanf("%d",&choix);
            if(choix==1){
                printf("Le titre a chercher: ");
                scanf(" %[^\n]",&titre);
                for(i=0;i<stock;i++){

                    if(strcmp(livresTitres[i],titre)==0){
                    	printf("Le livre que vous cherchez\n");
                      	printf("Titre: %s\n",livresTitres[i]);
                      	printf("Auteur: %s\n",livresAuteurs[i]);
                      	printf("Prix: %.2f\n",livresPrix[i]);
                      	printf("Quantite: %.2f\n",livresQuantite[i]);
                    } else {
                        printf("Le livre que vous cherchez n'existe pas\n");
                    }
                }
            }
            printf("Entrer 0 pour revenir au menu principal\n");

	        scanf("%d",&attribu);
	        if(attribu==0){
	            goto Les_choix;
	        }


        Suprimer:
        	goto Afficher;

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
			} else {
				printf("Choix incorrect\n");
			}
		    goto Les_choix;


        Nombrestock:
        	printf("Le nombre total de stock est: %d",stock);
		    goto Les_choix;

	return 0;

}
