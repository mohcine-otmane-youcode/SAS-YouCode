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

int main(int argc, char *argv[]) {
	somme(8,5);
	multip(8,5);
	return 0;
}
