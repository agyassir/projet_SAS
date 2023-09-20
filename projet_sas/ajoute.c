#include <stdio.h>
#include <stdlib.h>
// structure de deadline
typedef struct deadline
{
    int d;
    int m;
    int y;
} deadline;
// structure de tache
typedef struct tache
{
    int id;
    char name[50];
    char description[100];
    int status;
    deadline time;
} tache;
tache tach[50];
int n = 0;
void menu_affichage()
{
    int a;
    printf("====================Afficher la list====================\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("l'id de cette tache est : %d\n", tach[i].id);
        printf("le nom de cette tache est : %s\n", tach[i].name);
        printf("la description de cette tache est : %s\n", tach[i].description);
        switch (tach[i].status)
        {
        case 1:
            printf("status :to do\n");
            break;
        case 3:
            printf("status :done\n");
            break;
        case 2:
            printf("status :doing\n");
            break;
        default:
            printf("status :supprimer\n");
            break;
        }
        printf("le deadline de cette tache est : %d/%d/%d \n", tach[i].time.d, tach[i].time.m, tach[i].time.y);
    }

    printf("1.affichage dans l'ordre alphabetic du titre:\n");
    printf("2.affichage d'apres les deadline\n");
    printf("3.affichage par le plus urgent\n");
    printf("\n entrer le nombre corespandent o votre choix: ");
    scanf("%d", &a);
    switch (a)
{
case 1:
    ordre_alpha();
    break;
case 2:
    ordre_deadline();
    break;
case 3:
    ordre_urgent();
    break;
default:

    break;
}
printf("%d",n);
}
void ajouter(int i)
{
    int status;
    printf("entrer le titre de votre tache\n");
    scanf("%s", tach[i].name);
    printf("entrer la description de votre tache\n");
    scanf("%s", tach[i].description);
    
    printf("entrer status de votre tache\n 1.est-ce à realiser\n2.en realisation\n3.realiser\n");
    scanf("%d", &tach[i].status);
    printf("entrer le deadline en format jj/mm/aaaa\n");
    scanf("%d/%d/%d", &tach[i].time.d, &tach[i].time.m, &tach[i].time.y);
    tach[n].id = n + 1;
    n++;
}

// fin de fonction menu d'affichage
//ordre alphabetic
void ordre_alpha(){
for (int i = 0; i < n; i++)
{
     
};}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        ajouter(i);
    }

    menu_affichage();}