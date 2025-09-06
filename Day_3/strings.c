#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void challenge1(){
    //Affichage d'une Chaîne
    char text[10];
    printf("Entrer le text\n");
    scanf("%[^\n]",&text);
    printf("Le text que vous avez entree est: %s\n",text);
}

void challenge2(){
    //Longueur de la Chaîne
    char text[10];
    int longeurText = 0;
    printf("Entrer le text\n");
    scanf("%[^\n]",&text);

    while(text[longeurText]!='\0'){
        longeurText++;
    }
    printf("La langeur de text est: %d\n", longeurText);
}


void challenge3(){
    //Concaténation de Chaînes
    char text1[10], text2[10];
    int longeurText1 = 0, longeurText2 = 0, longeurText3 = 0, i;
    printf("Entrer le text1\n");
    scanf("%[^\n]",&text1);
    getchar();
    printf("Entrer le text2\n");
    scanf("%[^\n]",&text2);
    while(text1[longeurText1]!='\0'){
        longeurText1++;
    }
    while(text2[longeurText2]!='\0'){
        longeurText2++;
    }
    char text3[longeurText1 + longeurText2];
    for(i=0;i<longeurText1;i++){
        text3[i] = text1[i];
    }
    for(i=0;i<longeurText2;i++){
        text3[longeurText1+i] = text2[i];
    }
    printf("tex1: %s\ntext2: %s\ntext1 + text2 = %s\n", text1, text2,text3);
}

void challenge4(){
    //Comparaison de Chaînes
    char text1[10], text2[10];
    int longeurText1 = 0, longeurText2 = 0, longeurText3 = 0, i, egal=1;
    printf("Entrer le text1\n");
    scanf("%[^\n]",&text1);
    getchar();
    printf("Entrer le text2\n");
    scanf("%[^\n]",&text2);
    while(text1[longeurText1]!='\0'){
        longeurText1++;
    }
    while(text2[longeurText2]!='\0'){
        longeurText2++;
    }
    
    for(i=0;i<longeurText1;i++){
            if(strcmp(text1,text2)!=0){
                egal=0;
                break;
            }
    }
    if(egal==1){
        printf("Ces deux textes sont egales\n");
    } else {
        printf("Ces deux textes sont diffirents\n");
    }
}

void challenge5(){
    //Inversion de Chaîne
    char text[10], textInverse[10];
    int longeurText = 0, i;
    printf("Entrer le text\n");
    scanf("%[^\n]",&text);
    getchar();
    while(text[longeurText]!='\0'){
        longeurText++;
    }
    for(i=0;i<longeurText;i++){
        textInverse[i] = text[longeurText-i-1];
    } 
    printf("Text: %s\n", text);
    printf("Text inverse: %s\n", textInverse);
}

void challenge6(){
    //Compte des Occurrences d'un Caractère
    char text[10];
    char car;
    int longeurText = 0, i, recc = 0;
    printf("Entrer le text: ");
    scanf("%[^\n]",&text);
    printf("\nEntrer un caractere: ");
    scanf(" %c",&car);
    getchar();
    while(text[longeurText]!='\0'){
        longeurText++;
    }
    for(i=0;i<longeurText;i++){
        if(text[i]==car){
            recc++;
        }
    }
    printf("\n");
    printf("%c est repetee %d fois dans %s\n",car, recc, text);
}


void challenge7(){
    //Conversion en Majuscules
    char text[100];
    int i = 0;
    printf("Entrer le text: ");
    scanf(" %[^\n]",&text);
    printf("\ntext: %s", text);
    while(text[i]!='\0'){
        if(text[i]>='a' && text[i]<='z'){
            text[i] = text[i] - 32;
        }
        i++;
    }
    printf("\nTEXT: %s", text);
}

void challenge8(){
    //Conversion en Miniscule
    char text[100];
    int i = 0;
    printf("Entrer le text: ");
    scanf(" %[^\n]",&text);
    printf("\ntext: %s", text);
    while(text[i]!='\0'){
        if(text[i]>='A' && text[i]<='Z'){
            text[i] = text[i] + 32;
        }
        i++;
    }
    printf("\nTEXT: %s", text);
}

void challenge9(){
    //Suppression des Espaces
    char text[100];
    int i = 0;
    printf("Entrer le text: ");
    scanf(" %[^\n]",&text);
    printf("\ntext: %s", text);
    while(text[i]!='\0'){
        if(text[i]==' '){
            text[i] = text[i+1];
        }
        i++;
    }
    printf("\nTEXT: %s", text);
}


int main(){
    challenge9();

    return 0;
}
