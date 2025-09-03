#include <stdio.h>
#include <stdlib.h>


void challenge1(){
	//Table de Multiplication Inversée
	int n,i;
	printf("Entrer n: ");
	scanf("%d",&n);
	for(i=10;i>0;i--){
		printf("%d * %d = %d\t",i,n,i*n);
	}
}


void challenge2(){
	//pyramide d'étoile
	int n,i,j;
	printf("Entrer n: ");
	scanf("%d",&n);
		printf("\t");
		for(j=0;j<i;j++){
		  printf("*");
		}
		printf("\n");
		        
	}
}


int main(int argc, char *argv[]) {
	challenge2();
	

	return 0;
}
