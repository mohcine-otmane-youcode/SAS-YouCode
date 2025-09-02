#include <stdio.h>
#include <stdlib.h>



// Rechercher un Élément
int main(int argc, char *argv[]) {
	
	int arrSize,i,r,t=0;
	
	printf("Entrer la taille de Tableau\n");
	scanf("%d",&arrSize);
	
	int arr[arrSize];
	
	for(i=0;i<arrSize;i++){
		printf("[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("Entrer le nombre a rechercher\n");
	scanf("%d",&r);
	
	for(i=0;i<arrSize;i++){
		if(arr[i]==r){
			t = 1;
			break;
		}
	}
	
	if(t==1){
		printf("Le nombre existe dans le tableau dans la position %d\n",i);
	} else {
		printf("Le nombre nexiste pas dans le tableau\n");
	}
	
	
	return 0;
}
