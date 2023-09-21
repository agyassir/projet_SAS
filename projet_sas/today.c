#include <stdio.h>
typedef struct collaboratoir{
    char nom[50];
    char prenom[50];
    char email[70];
}colla;
colla co[3];
n=0;
int main(){
    printf("entrer le titre de votre coe\n");
    scanf("%s", co[n].nom);
    printf("entrer la description de votre coe\n");
    scanf("%s", co[n].prenom);
    printf("entrer l'email sil vous plait\n");
    scanf("%s", co[n].email);
}
