#include <stdio.h>
#include <stdlib.h>
// structure de deadline
typedef struct deadline
{
    int d;
    int m;
    int h;
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
void ordre_deadline()
{
    tache x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n + 1; i++)
        {
            if (tach[i].time.d > tach[j].time.d)
            {
                x = tach[i];
                tach[i] = tach[j];
                tach[j] = x;
            }
            else if (tach[i].time.d == tach[j].time.d)
            {
                if (tach[i].time.h > tach[j].time.h)
                {
                    x = tach[i];
                    tach[i] = tach[j];
                    tach[j] = x;
                }
                else if (tach[i].time.h == tach[j].time.h)
                {
                    if (tach[i].time.m > tach[j].time.d)
                    {
                        x = tach[i];
                        tach[i] = tach[j];
                        tach[j] = x;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("l'id de cette tache est : %d\n", tach[i].id);
        printf("le nom de cette tache est : %s\n", tach[i].name);
        printf("la description de cette tache est : %s\n", tach[i].description);
        switch (tach[i].status)
        {
        case 1:
            printf("status :to do\n");
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        case 3:
            printf("status :done\n");
            break;
        case 2:
            printf("status :doing\n");
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        default:
            printf("status :supprimer\n");
            break;
        }
        printf("---------------------------------------------\n");
    }
}

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
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        case 3:
            printf("status :done\n");

            break;
        case 2:
            printf("status :doing\n");
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        default:
            printf("status :supprimer\n");
            break;
        }
    }
    printf("---------------------------------------------------\n");
    printf("1.affichage dans l'ordre alphabetic du titre:\n");
    printf("2.affichage d'apres les deadline\n");
    printf("3.affichage par le plus urgent\n");
    printf("\n entrer le nombre corespandent o votre choix: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        // ordre_alpha();
        break;
    case 2:
        ordre_deadline();
        break;
    case 3:
        // ordre_urgent();
        break;
    default:

        break;
    }
    printf("%d", n);
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
    if (tach[i].status == 1 || tach[i].status == 2)
    {
        printf("entrer le deadline en format jour/hours/minutes \n");
        scanf("%d/%d/%d", &tach[i].time.d, &tach[i].time.h, &tach[i].time.m);
    }

    tach[n].id = n + 1;
    n++;
}
void ordre_alpha()
{
    tache x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {

            if (tach[i].name[1] >= 65 && tach[i].name[1] <= 90)
            {
                tach[i].name[1] = tach[i].name[1] + 32;
            }
            else if (tach[j].name[1] >= 65 && tach[j].name[1] <= 90)
            {
                tach[i].name[1] = tach[i].name[1] + 32;
            }
            if (tach[i].name[1] > tach[j].name[1])
            {

                x = tach[i];
                tach[i] = tach[j];
                tach[j] = x;
            }
            else if (tach[i].name[1] == tach[j].name[1])
            {
                if (tach[i].name[2] >= 65 && tach[i].name[2] <= 90)
                {
                    tach[i].name[1] = tach[i].name[1] + 32;
                }
                else if (tach[j].name[2] >= 65 && tach[j].name[2] <= 90)
                {
                    tach[i].name[2] = tach[i].name[2] + 32;
                }
                if (tach[i].name[2] > tach[j].name[2])
                {
                    x = tach[i];
                    tach[i] = tach[j];
                    tach[j] = x;
                }
                else if (tach[i].name[2] == tach[j].name[2])
                {
                    if (tach[i].name[3] >= 65 && tach[i].name[3] <= 90)
                    {
                        tach[i].name[3] = tach[i].name[3] + 32;
                    }
                    else if (tach[j].name[2] >= 65 && tach[j].name[3] <= 90)
                    {
                        tach[i].name[1] = tach[i].name[1] + 32;
                    }
                    if (tach[i].name[3] > tach[j].name[3])
                    {
                        x = tach[i];
                        tach[i] = tach[j];
                        tach[j] = x;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("l'id de cette tache est : %d\n", tach[i].id);
        printf("le nom de cette tache est : %s\n", tach[i].name);
        printf("la description de cette tache est : %s\n", tach[i].description);
        switch (tach[i].status)
        {
        case 1:
            printf("status :to do\n");
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        case 3:
            printf("status :done\n");
            break;
        case 2:
            printf("status :doing\n");
            printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        default:
            printf("status :supprimer\n");
            break;
        }
        printf("---------------------------------------------\n");
    }
}
// fin de fonction menu d'affichage

int main()
{
    for (int i = 0; i < n; i++)
    {
        ajouter(i);
    }

    menu_affichage();
}