#include <stdio.h>
#include <stdlib.h>



//Trouver le Maximum
int main(int argc, char *argv[]) {
	
	int arrSize,i,j, somme=0,max;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	
	for(i=0;i<arrSize;i++){
		max = arr[i];
		for(j=0;j<arrSize;j++){
			if(max<arr[j]){
				max=arr[j];
			}
		}
	}
	
	printf("Max = %d",max);
	
	return 0;
}
