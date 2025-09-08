#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void challenge1(){
    //Définition et Utilisation de Structure
    struct personne{
        char nom[10];
        char prenom[10];
        int age;
    };
    struct personne pers;

    strcpy(pers.nom,"Newton");
    strcpy(pers.prenom,"Isaac");
    pers.age = 382;

    printf("Nom: %s\n",pers.nom);
    printf("Prenom: %s\n",pers.prenom);
    printf("Nom: %d\n",pers.age);

}

int main(){

    challenge1();


    
}