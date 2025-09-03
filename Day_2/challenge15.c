#include <stdio.h>
#include <stdlib.h>



// Calculer la Moyenne
int main(int argc, char *argv[]) {
	
	int arrSize, arrSize1,i;
	float S=0;
	
	printf("Entrer la taille de premier Tableau\n");
	scanf("%d",&arrSize);
	printf("Entrer la taille de dexieme Tableau\n");
	scanf("%d",&arrSize1);
	
	int arr[arrSize];
	int arr1[arrSize1];
	int arrfus[arrSize + arrSize1];
	
	
	printf("Elements de premier Tableau\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("Elements de deuxieme Tableau\n");
	
	for(i=0;i<arrSize1;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr1[i]);
		printf("\n");
	}
	
	
	for(i=0;i<arrSize;i++){
		arrfus[i] = arr[i];
	}
	
	for(i=arrSize;i<arrSize+arrSize1;i++){
		arrfus[i] = arr1[i-arrSize];
	}
	
	
	for(i=0;i<arrSize+arrSize1;i++){
		printf("%d\t", arrfus[i]);
	}           
	
	 
	return 0;
}
