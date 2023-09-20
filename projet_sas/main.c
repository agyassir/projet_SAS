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

void ajouter(tache tach[500], int n)
{
  int status;
    printf("entrer le titre de votre tache\n");
    scanf("%s \n", tach[n].name);
    printf("entrer la description de votre tache\n");
    scanf("%s \n", tach[n].description);
    printf("entrer status de votre tache\n 1.est-ce à realiser\n2.en realisation\n3.realiser\n");
    scanf(" %d \n", &tach[n].status);
    printf("entrer le deadline en format jj/mm/aaaa\n");
    scanf("%d/%d/%d", tach[n].time.d, tach[n].time.m, tach[n].time.y);
    tach[n].id=n;
}

// fonction menu ajouter
int menu_ajouter(tache y[500],int n)
{
    int a;
    printf("====================Ajouter====================\n\n");
    printf("1.pour ajouter une taches que vous voulais faire:\n");
    printf("2.pour stopper l'insertion");
    printf("\n entrer le nombre corespandent o votre choix:\n");
    scanf("%d", &a);
    while (a = !2)
    {
        ajouter(&y[500], n);
        n++;
        printf ("\n pour quitter inserer 2 ."); 
    };
    return n;
}
// fin de fonction menu ajouter
// fonction menu d'affichage
void menu_affichage(tache tach[500],int n)
{
    int a, n;
    printf("====================Afficher la list====================\n\n");
    printf("1.affichage dans l'ordre alphabetic du tache titre:\n",);
    printf("2.affichage d'apres les deadline");
    printf("3.affichage par le plus urgent");
    printf("\n entrer le nombre corespandent o votre choix:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        ordre_alpha(&tach[500],n);
        break;
    case 2:
        ordre_deadline(&tach[500],n);
        break;
    case 3:
        ordre_urgent(&tach[500],n);
        break;
    default:

        break;
    }
}
// fin de fonction menu d'affichage
void ordre_alpha(tache tach[500],int n){
for (int i = 0; i < n; i++)
{
    /* code */
};}
//first menu function
void menu(tache tach[500]){
     int a,n=0;
    printf("===================toDo list===================\n\n1-ajouter une ou plusieur taches:\n2-affichage:\n3-recherche:\n4-statistiques:\n5-quitter\n entrer le numero correspendant a votre choix: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
       return(menu_ajouter(&tach[500],n));
        menu(&tach[500]);
        break;
    case 2:
        return(menu_affichage(&tach[500],n));
        break;
    /*case 3:
        recherche();
        break;
    case 4:
        stats();
        break;
    case 5:
        break;*/
    default:
        break;
    };
}
//my main programme
int main()
{
    tache tach[500];
   menu(&tach[500]);
    return 0;
}
