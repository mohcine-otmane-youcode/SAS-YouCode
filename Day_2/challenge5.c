#include <stdio.h>
#include <stdlib.h>



//Trouver le Minimum
int main(int argc, char *argv[]) {
	
	int arrSize,i,j, somme=0,min;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	
	for(i=0;i<arrSize;i++){
		min = arr[i];
		for(j=0;j<arrSize;j++){
			if(min>arr[j]){
				min=arr[j];
			}
		}
	}
	
	printf("Min = %d",min);
	
	return 0;
}
