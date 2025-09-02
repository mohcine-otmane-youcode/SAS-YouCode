#include <stdio.h>
#include <stdlib.h>



//Tableau en Ordre Croissant
int main(int argc, char *argv[]) {
	
	int arrSize,i,j,a;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	
	for(i=0;i<arrSize;i++){
		for(j=0;j<arrSize;j++){
			if(arr[i]<arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arr[i]);
	}
	
	
	return 0;
}
