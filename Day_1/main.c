#include <stdio.h>
#include <stdlib.h>



void challenge1(){
	//Table de Multiplication
	int n,i;
	printf("Entrer un entier\n");
	scanf("%d",&n);
	for(i=1;i<11;i++){
		printf("%d * %d = %d\t",n,i,n*i);
	}
}



int main(int argc, char *argv[]) {
	challenge1();
	
	
	
	return 0;
}