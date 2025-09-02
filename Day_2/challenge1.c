#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
	int arrSize,i;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("[");
	for(i=0;i<arrSize;i++){
		printf("%d",arr[i]);
		if(i<arrSize-1){
			printf(", ");
		}
	}
	printf("]");
	
	
	
	return 0;
}
