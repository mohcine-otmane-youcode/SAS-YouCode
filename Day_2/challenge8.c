#include <stdio.h>
#include <stdlib.h>



//Tableau en Ordre Croissant
int main(int argc, char *argv[]) {
	
	int arrSize,i,j,a;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	int arrcopy[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	for(i=0;i<arrSize;i++){
		arrcopy[i] = arr[i];
	}
	
	printf("---Tableau Original---\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arr[i]);
	}
	printf("\n");
	printf("---Tableau Copie---\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arrcopy[i]);
	}
	
	
	return 0;
}
