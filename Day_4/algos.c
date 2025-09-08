#include <stdio.h>


int tab[10];

void entrerTab(){
    for(int i=0;i<10;i++){
        printf("[%d] = ", i);
        scanf("%d", &tab[i]);
    }
}

void afficherTab(){
    for(int i=0;i<10;i++){
    	printf("%d ", tab[i]);
    }
}

void challenge1(){
    //Tri à Bulles
    printf("Tri a Bulles\n");
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(tab[i]<tab[j]){
                tab[i] = tab[i] + tab[j];
                tab[j] = tab[i] - tab[j];
                tab[i] = tab[i] - tab[j];
            }
        }
    }
}

void challenge2(){
    //Tri par Insertion
    printf("Tri par Insertion\n");
    int j,x;
    for(int i=1; i<10;i++){
        x = tab[i];
        j = i;
        while(j>0 && tab[j-1]>x){
            tab[j] = tab[j-1];
            j = j-1;
        }
        tab[j] = x;
    }
}

void challenge3(){
	//Tri par Sélection
	int min;
	printf("Tri par Selection\n");
    for(int i=0;i<10;i++){
        min = i;
        for(int j=i+1;j<10;j++){
            if(tab[j]<tab[min]){
                min = j;
            }
        }
        if(min!=i){
            tab[i] = tab[i] + tab[min];
            tab[min] = tab[i] - tab[min];
            tab[i] = tab[i] - tab[min];
        }
    }
}


//challenge4
//Tri Rapide
void fusion(int tab[], int debut, int milieu, int fin){
    int n1 = milieu - debut + 1;
    int n2 = fin - milieu;

    int tabG[n1], tabD[n2];

    for(int i=0;i<n1;i++){
        tabG[i] = tab[debut+i];
    }
    for(int j = 0;j<n2;j++){
        tabD[j] = tab[milieu + 1 + j];
    }

    int i=0, j=0, k=debut;

    while(i<n1 && j<n2){
        if(tabG[i]<=tabD[j]){
            tab[k] = tabG[i];
            i++;
        } else {
            tab[k] = tabD[j];
            j++;
        }
        k++;
    }

}


int main() {
    entrerTab();
    challenge3();
    afficherTab();


    return 0;
}