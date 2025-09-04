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
		printf("\x1b[104m                                                           \x1b[0m\n");
//		for(i=0;i<5;i++){
//			printf("\x1b[%dm",i);
//		}
		
		printf("\x1b[45m \x1b[0m	\x1b[5;32;5;49m1: Ajouter un livre                               \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	2: Afficher Tous les Livres Disponibles           \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	3: Mettre a Jour la Quantite d'un Livre           \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	4: Rechercher un Livre                            \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	\x1b[5;31;5;49m5: Supprimer un Livre du Stock                    \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	\x1b[0m6: Nombre Total de Livres en Stock                \x1b[45m \x1b[0m\n");
		printf("\x1b[45m \x1b[0m	0: Sortir                                         \x1b[45m \x1b[0m\n");
		printf("\x1b[104m                                                           \x1b[0m\n");
		scanf("%d",&choix);
		switch(choix){
			case 1:
				goto Ajouter;
			case 2:
				goto Afficher;
			case 3:
				goto Mettre_a_jour;
			case 4:
				goto Rechercher;
			case 5:
				goto Suprimer;
			case 6:
				goto nombrestock;
			case 0:
				goto Les_choix;
		}
		system("cls");
	
	Ajouter:
			printf("Entrer le titre de livre\n");
			scanf(" %[^\n]",&livresTitres[stock]);
			printf("Entrer l\'auteur de livre\n");
			scanf(" %[^\n]",&livresAuteurs[stock]);
			printf("Entrer le prix de livre\n");
			scanf("%f",&livresPrix[stock]);
			printf("Entrer la quantite\n");
			scanf("%f",&livresQuantite[stock]);
			stock++;
			
//			if(sizeTitreMax<strlen(livresTitres[stock])){
//				sizeTitreMax<strlen(livresTitres[stock];
//			}
//			if()
			
			
			system("cls");
			printf("\x1b[32mLivre Ajoute avec succes\n");
			sleep(2);
		    goto Les_choix;
		    
	
	Afficher:
			printf("Les livres disponibles sont\n");

			//Titres de collones

			for(i=0;i<stock;i++){
				int sizeTitre = 0,sizeAuteur=0,sizePrix=0;

				sizeTitre = strlen(livresTitres[i]);
                sizeAuteur = strlen(livresAuteurs[i]);

                if(sizeTitreMax<sizeTitre){
                    sizeTitreMax = sizeTitre;
                }
                if(sizeAuteurMax<sizeAuteur){
                    sizeAuteurMax = sizeAuteur;
                }

				printf("+");
				for(j=0;j<sizeTitreMax+4;j++){
					printf("-");
				}
				printf("+");
				for(j=0;j<sizeAuteurMax+4;j++){
					printf("-");
				}
				printf("+");

				printf("\n");

				printf("|  %s  ",livresTitres[i]);
				printf("|  %s  ",livresAuteurs[i]);
				for(j=0;j<sizeAuteurMax-sizeAuteur;j++){
					printf(" ");
				}
				printf("|");
				printf("  %.2f  |",livresPrix[i]);

				printf("\n");
			}
        printf("Entrer 0 pour revenir au menu principal\n");

        scanf("%d",&attribu);
        if(attribu==0){
            goto Les_choix;
        }
        
        
        Mettre_a_jour:
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
	
		
		
		Rechercher:
			printf("Chercher un livre par\n");
            printf("1: Titre\n");
            printf("2: Auteur\n");

            scanf("%d",&choix);
            if(choix==1){
                printf("Le titre a chercher: ");
                scanf(" %[^\n]",&titre);
                for(i=0;i<stock;i++){
                	                    
//					system("c                	                    
//                	sl               	                    
//                 printf("|")
//                	system("cls"
//                	sleep(0.1);   
//                	printf("/")					                	
//                	system("cls"
//                	printf("-");                	
//                	sleep(0.1); 
//                	system("cls                	
//                	printf("\");                	
//                	sleep(0.1); 
                    if(strcmp(livresTitres[i],titre)){									                	                    
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
            
        
        nombrestock:
        	printf("Le nombre total de stock est: %d",stock);
		    goto Les_choix;
		    
	return 0;

}