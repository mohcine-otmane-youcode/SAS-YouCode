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

void min(int a,int b){
	//Fonction de Min
	if(a<b){
		printf("%d est le minimum (parmi %d et %d)\n",a,a,b);
	} else {
		printf("%d est le minimum (parmi %d et %d)\n",b,a,b);
	}
}

int fact(int n){
	return n*fact(n-1);
}


int main(int argc, char *argv[]) {
	printf("Choisir l'opiration\n");
	printf("1: Somme\n");
	printf("2: Multiplication\n");
	printf("3: Maximum\n");
	printf("4: Minimum\n");
	printf("5: Factorielle\n");
	int n;
	somme(8,5);
	multip(8,5);
	max(9,7);
	min(9,7);
	
	printf("%d! = %d",n,fact(n));
	return 0;
}
