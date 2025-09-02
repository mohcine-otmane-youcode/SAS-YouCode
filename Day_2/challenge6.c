#include <stdio.h>
#include <stdlib.h>



//Multiplication des Éléments
int main(int argc, char *argv[]) {
	
	int arrSize,i,j, somme=0,min;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	int facteurs[arrSize];
	
	printf("---Elements De Tableau---\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("---Facteurs De Tableau---\n");
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&facteurs[i]);
		printf("\n");
	}
	
	for(i=0;i<arrSize;i++){
		arr[i] = facteurs[i]*arr[i];
	}
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arr[i]);
	}
	
	
	return 0;
}
