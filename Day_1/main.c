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

void challenge2(){
	//Factorielle d'un Nombre
	int n,i,f=1;
	printf("Entrer un entier\n");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		f = f*i;
	}
	printf("%d!=%d",n,f);
}

void challenge3(){
	//Somme des N Nombres
	int n,i,s=0;
	printf("Entrer un entier\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		s = s+i;
		if(i>1){
			printf("+");
		}
		printf(" %d ",i);
	}
	printf("= %d",s);
}

int main(int argc, char *argv[]) {
	challenge2();
	
	
	
	return 0;
}