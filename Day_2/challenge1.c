#include <stdio.h>
#include <stdlib.h>



//Initialisation et Affichage
int main(int argc, char *argv[]) {
	
	int arr[] = {1, 2, 3, 4, 5};
	int i;
	
	for(i=0;i<5;i++){
		printf("[%d] = %d\n",i,arr[i]);
	}

	return 0;
}
