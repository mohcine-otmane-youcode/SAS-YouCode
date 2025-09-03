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


int main(int argc, char *argv[]) {
	challenge1();
	

	return 0;
}
