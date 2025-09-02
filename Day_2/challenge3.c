#include <stdio.h>
#include <stdlib.h>



//Somme des Éléments
int main(int argc, char *argv[]) {
	
	int arrSize,i, somme=0;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	
	for(i=0;i<arrSize;i++){
		somme = somme + arr[i];
	}
	
	printf("Somme = %d",somme);
	
	
	return 0;
}
