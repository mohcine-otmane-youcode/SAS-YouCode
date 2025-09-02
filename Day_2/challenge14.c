#include <stdio.h>
#include <stdlib.h>



// Calculer la Moyenne
int main(int argc, char *argv[]) {
	
	int arrSize,i;
	float S=0;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	for(i=0;i<arrSize;i++){
		S = S + arr[i];	
	}
	
	printf("Moyenne = %f",S/arrSize);

	
	
	
	return 0;
}
