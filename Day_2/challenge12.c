#include <stdio.h>
#include <stdlib.h>



// Afficher les Éléments Paire
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
	
	printf("Les elements pairs\n");
	for(i=0;i<arrSize;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}	
	}
	printf("\n");
	printf("Les elements impairs\n");
	for(i=0;i<arrSize;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}	
	}
	
	
	
	return 0;
}
