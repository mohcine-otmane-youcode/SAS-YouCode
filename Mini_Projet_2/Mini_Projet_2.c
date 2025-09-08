#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100

struct Contact {
    char Nom[10];
    char Numero[10];
    char Email[10];
};

struct Contact contacts[MAX_CONTACTS];
int num_contact = 0;

int verifier_numero(const char *num) {
    int len = strlen(num);
    if(len != 10) return 0;
    if(num[0] != '0') return 0;
    if(num[1] != '6' && num[1] != '7') return 0;
    for(int i=0;i<10;i++) {
        if(!isdigit(num[i])) return 0;
    }
    return 1;
}

int verifier_email(const char *email) {
    return (strchr(email,'@') && strchr(email,'.'));
}

void Ajouter_Contact() {
    if(num_contact >= MAX_CONTACTS) {
        printf("\t\t\t\t\x1b[101m           Carnet plein !           \x1b[0m\n");
        return;
    }

    struct Contact c;
    printf("Nom : ");
    scanf("%s", c.Nom);

    do {
        printf("Numero: ");
        scanf("%s", c.Numero);
    } while(!verifier_numero(c.Numero));

    do {
        printf("Email: ");
        scanf("%s", c.Email);
    } while(!verifier_email(c.Email));

    contacts[num_contact++] = c;

    printf("\t\t\t\t\x1b[42m           Contact ajoute           \x1b[0m\n");
}

void Afficher_Contacts() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m           Contact non disponible             \x1b[0m\n");
        return;
    }

    int nomMax = 3, telMax = 9, emailMax = 5;
    for (int i = 0; i < num_contact; i++) {
        int nomLen = strlen(contacts[i].Nom);
        int numlen = strlen(contacts[i].Numero);
        int emailLen = strlen(contacts[i].Email);
        if (nomLen > nomMax) nomMax = nomLen;
        if (numlen > telMax) telMax = numlen;
        if (emailLen > emailMax) emailMax = emailLen;
    }

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");

    printf("\t\t\t\t\x1b[45m \x1b[0m  \x1b[1;37;44m%-3s %-*s %-*s %-*s\x1b[0m  \x1b[45m \x1b[0m\n",
           "ID", nomMax, "Nom", telMax, "Numero", emailMax, "Email");

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");

    for(int i=0;i<num_contact;i++){
        printf("\t\t\t\t\x1b[45m \x1b[0m  %-3d %-*s %-*s %-*s  \x1b[45m \x1b[0m\n",
               i+1,
               nomMax, contacts[i].Nom,
               telMax, contacts[i].Numero,
               emailMax, contacts[i].Email);
    }

    printf("\t\t\t\t\x1b[104m");
    for(int k=0;k<nomMax+telMax+emailMax+20;k++) printf(" ");
    printf("\x1b[0m\n");
}

void Rechercher_Contact() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m Pas de contact \x1b[0m\n");
        return;
    }

    char nom[50];
    printf("Nom: ");
    scanf("%s", nom);

    for(int i=0;i<num_contact;i++) {
        if(strcasecmp(contacts[i].Nom, nom)==0) {
            printf("\t\t\t\t\x1b[42m Contact trouve: \x1b[0m\n");
            printf("Nom: %s | Numero: %s | Email: %s\n", contacts[i].Nom, contacts[i].Numero, contacts[i].Email);
            return;
        }
    }
    printf("\t\t\t\t\x1b[101m Pas de contact \x1b[0m\n");
}

void Modifier_Contact() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m Pas de contact a modifier ! \x1b[0m\n");
        return;
    }

    char nom[50];
    printf("Nom : ");
    scanf("%s", nom);

    for(int i=0;i<num_contact;i++) {
        if(strcasecmp(contacts[i].Nom, nom)==0) {
            printf("Nouveau nom : ");
            scanf("%s", contacts[i].Nom);

            do {
                printf("Nouveau numero: ");
                scanf("%s", contacts[i].Numero);
            } while(!verifier_numero(contacts[i].Numero));

            do {
                printf("Nouvel email: ");
                scanf("%s", contacts[i].Email);
            } while(!verifier_email(contacts[i].Email));

            printf("\t\t\t\t\x1b[42m Contact modifie \x1b[0m\n");
            return;
        }
    }
    printf("\t\t\t\t\x1b[101m Contact non disponible \x1b[0m\n");
}

void Supprimer_Contact() {
    if(num_contact == 0){
        printf("\t\t\t\t\x1b[101m Pas de contact \x1b[0m\n");
        return;
    }

    char nom[50];
    printf("Nom : ");
    scanf("%s", nom);

    for(int i=0;i<num_contact;i++) {
        if(strcasecmp(contacts[i].Nom, nom)==0) {
            for(int j=i;j<num_contact-1;j++) {
                contacts[j] = contacts[j+1];
            }
            num_contact--;
            printf("\t\t\t\t\x1b[41m Contact supprime ! \x1b[0m\n");
            return;
        }
    }
    printf("\t\t\t\t\x1b[101m Pas de contact  \x1b[0m\n");
}

int main() {
    int choix;
    do {
        printf("\n\t\t\t\t\x1b[46m              Contacts               \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [1] \x1b[0m Ajouter un contact\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [2] \x1b[0m Afficher les contacts\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [3] \x1b[0m Rechercher un contact\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [4] \x1b[0m Modifier un contact\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [5] \x1b[0m Supprimer un contact\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[45m [6] \x1b[0m Quitter\x1b[46m \x1b[0m\n");
        printf("\t\t\t\t\x1b[46m                                    \x1b[0m\x1b[46m \x1b[0m\n");
        printf("\t\t\t\tVotre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: Ajouter_Contact(); break;
            case 2: Afficher_Contacts(); break;
            case 3: Rechercher_Contact(); break;
            case 4: Modifier_Contact(); break;
            case 5: Supprimer_Contact(); break;
            case 6: printf("\t\t\t\t\x1b[41m      Fin du programme      \x1b[0m\n"); break;
            default: printf("\t\t\t\t\x1b[101m Choix non valide \x1b[0m\n");
        }
    } while(choix != 6);

    return 0;
}
