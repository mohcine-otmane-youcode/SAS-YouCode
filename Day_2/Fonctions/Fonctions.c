#include <stdio.h>
#include <stdlib.h>



void somme(int a,int b){
	//Fonction de Somme
	printf("%d + %d = %d\n",a,b,a+b);
}

void multip(int a,int b){
	//Fonction de Multiplication
	printf("%d * %d = %d\n",a,b,a*b);
}


void max(int a,int b){
	//Fonction de Max
	if(a>b){
		printf("%d est le maximum (parmi %d et %d)\n",a,a,b);
	} else {
		printf("%d est le maximum (parmi %d et %d)\n",b,a,b);
	}
}


int main(int argc, char *argv[]) {
	somme(8,5);
	multip(8,5);
	max(9,7);
	return 0;
}
