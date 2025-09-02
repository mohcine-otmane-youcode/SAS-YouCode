#include <stdio.h>
#include <stdlib.h>



// Remplacer un Élément
int main(int argc, char *argv[]) {
	
	int arrSize,i,r,n;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("Entrer le nombre a remplacer\n");
	scanf("%d",&r);
	printf("Entrer le nombre la nouvelle valeur\n");
	scanf("%d",&n);
	
	printf("---Tableau Original---\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arr[i]);
	}
	
	for(i=0;i<arrSize;i++){
		if(arr[i]==r){
			arr[i] = n;
		}
	}
	
	
	printf("\n");
	printf("---Tableau Modifie---\n");
	for(i=0;i<arrSize;i++){
		printf("[%d] = %d\t",i,arr[i]);
	}
	
	
	return 0;
}
