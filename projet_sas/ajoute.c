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
void cic()
{
    for (int i = 0; i < n + 1; i++)
    {
        if (tach[i].status == 1 && tach[i].status == 2)
        {
            printf("========================incomplete========================\n");
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
                printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);

                break;
            case 2:
                printf("status :doing\n");
                printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
                break;
            default:
                break;
            }
        }
        else if (tach[i].status == 3)
            printf("========================complete========================\n");
        printf("l'id de cette tache est : %d\n", tach[i].id);
        printf("le nom de cette tache est : %s\n", tach[i].name);
        printf("la description de cette tache est : %s\n", tach[i].description);
        printf("status :done\n");
        printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
    }
}
void delai()
{
    for (int i = 0; i < n + 1; i++)
    {

        printf("========================delai========================\n");
        printf("l'id de cette tache est : %d\n", tach[i].id);
        printf("le nom de cette tache est : %s\n", tach[i].name);
        printf("la description de cette tache est : %s\n", tach[i].description);
        switch (tach[i].status)
        {
        case 1:
            printf("status :to do\n");
            printf("le delai de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        case 3:
            printf("status :done\n");
            printf("le delai de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);

            break;
        case 2:
            printf("status :doing\n");
            printf("le delai de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
            break;
        default:
            break;
        }
    }
}
    void menu_stats()
    {
        int a;
        printf("====================statistique====================\n\n");
        printf("le nombre totale des taches est :%d\n", n);
        printf("1.les taches compelte et les taches incomplet\n");
        printf("2.le delai de chaque taches\n");
        printf("3.quitter\n");
        printf("\n entrer le nombre corespandent o votre choix:\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            cic();
            break;
        case 2:
            delai();
            break;
        case 3:;
            break;
        }
    }
    void NS()
    {
        char a[50];
        printf("entrer le titre de tache que vous voulais modifier:\n");
        scanf("%s", &a[50]);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].name == a)
            {
                if (tach[i].status < 4 && tach[i].status > 0)
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
                        printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);

                        break;
                    case 2:
                        printf("status :doing\n");
                        printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
                        break;
                    default:
                        break;
                    }
                }
                else if (tach[i].status < 4)
                {
                    printf("ce titre a etait supprimer");
                }
            }
        }
    }
    void IDS()
    {
        int a;
        printf("entrer l'id de tache que vous voulais modifier:\n");
        scanf("%d", &a);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].id == a)
            {
                if (tach[i].status < 4 && tach[i].status > 0)
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
                        printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);

                        break;
                    case 2:
                        printf("status :doing\n");
                        printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
                        break;
                    default:
                        break;
                    }
                }
                else if (tach[i].status < 4)
                {
                    printf("se id a etait supprimer");
                }
            }
        }
    }
    void menu_recherche()
    {
        int a;
        printf("====================rechercher====================\n\n");
        printf("1.recherche par ID:\n");
        printf("2.recheche par titre");
        printf("3.quitter");
        printf("\n entrer le nombre corespandent o votre choix:\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            IDS();
            break;
        case 2:
            NS();
            break;
        case 3:;
            break;
        }
    }
    void mod_desc()
    {
        int a;
        char tamp[100];
        printf("entrer l'id de tache que vous voulais modifier:\n");
        scanf("%d", &a);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].id == a)
            {
                printf("la description dont tu veut modifier:");
                scanf("%s", tach[i].description);
            }
        }
    }
    void mod_stt()
    {
        int a;
        char tamp[100];
        printf("entrer l'id de tache que vous voulais modifier:\n");
        scanf("%d", &a);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].id == a)
            {
                printf("1.toDo\n2.doing\n3,done\n");
                scanf("%d", tach[i].status);
            }
        }
    }
    void mod_deadline()
    {
        int a;
        printf("entrer l'id de tache que vous voulais modifier:\n");
        scanf("%d", &a);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].id == a)
            {
                if (tach[i].status < 4 && tach[i].status > 0)
                {
                    printf("1.toDo\n2.doing\n3.done\n");
                    scanf("%d", tach[i].status);
                    if (tach[i].status < 3)
                    {
                        printf("la deadline dont tu veut modifier:");
                        scanf("%d/%d/%d", &tach[n].time.d, &tach[n].time.h, &tach[n].time.m);
                    }
                }
                else if (tach[i].status == 4)
                {
                    printf("ce tache etais supprimais");
                }
                {
                }
            }
        }
    }
    void modification()
    {
        int a;
        printf("====================Modification====================\n\n");
        printf("1.modifier les description d'une tache:\n");
        printf("2.modifier le statut d'une tache\n");
        printf("3.modifier le deadline d'une tache\n");
        printf("4.quitter la modification\n");
        printf("\n entrer le nombre corespandent o votre choix:\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            mod_desc();
            break;
        case 2:
            mod_stt();
            break;
        case 3:
            mod_deadline();
            break;
        default:
            break;
        }
    }
    void supprimer()
    {
        int a;
        char tamp[100];
        printf("entrer l'id de tache que vous voulais supprimer:\n");
        scanf("%d", &a);
        for (int i = 0; i < n + 1; i++)
        {
            if (tach[i].id == a)
            {
                tach[i].status = 4;
            }
        }
    }
    void ordre_deadline()
    {
        tache x;
        for (int i = 0; i < n; i++)
        {
            if (tach[i].status < 4 && tach[i].status > 0)
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
    void ordre_urgent()
    {

        tache x;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            if (tach[i].status < 4 && tach[i].status > 0)
            {
                for (int j = i + 1; i < n + 1; i++)
                {
                    if (tach[i].time.d < 3 && tach[j].time.d < 3)
                    {
                        a++;
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
            }
        }
        for (int i = 0; i < a; i++)
        {
            printf("---------------------------------------------\n");
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
            if (tach[i].status < 4 && tach[i].status > 0)
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
                    printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);

                    break;
                case 2:
                    printf("status :doing\n");
                    printf("le deadline de cette tache est : %djours, %d hours and %d minutes \n", tach[i].time.d, tach[i].time.h, tach[i].time.m);
                    break;
                default:
                    break;
                }
            }
            printf("---------------------------------------------------\n");
            printf("1.affichage dans l'ordre alphabetic du titre:\n");
            printf("2.affichage d'apres les deadline\n");
            printf("3.affichage par le plus urgent\n");
            printf("\n entrer le nombre corespandent o votre choix: \n");
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
            printf("%d", n);
        }
    }

    void ajouter()
    {
        int status;
        printf("entrer le titre de votre tache\n");
        scanf("%s", tach[n].name);
        printf("entrer la description de votre tache\n");
        scanf("%s", tach[n].description);

        printf("entrer status de votre tache\n 1.est-ce à realiser\n2.en realisation\n3.realiser\n");
        scanf("%d", &tach[n].status);
        if (tach[n].status == 1 || tach[n].status == 2)
        {
            printf("entrer le deadline en format jour/hours/minutes \n");
            scanf("%d/%d/%d", &tach[n].time.d, &tach[n].time.h, &tach[n].time.m);
        }

        tach[n].id = n;
    }

    void menu_ajouter()
    {
        int a;
        printf("====================Ajouter====================\n\n");
        printf("1.pour ajouter une taches que vous voulais faire:\n");
        printf("2.pour stopper l'insertion");
        printf("\n entrer le nombre corespandent o votre choix:\n");
        scanf("%d", &a);
        while (a == 1)
        {
            ajouter();
            n++;
            printf("\n pour quitter inserer 2 et pour ajouter une autre appuiyer sur 1\n");
            scanf("%d", &a);
        };
    }

    void menu()
    {
        int a;
        printf("===================toDo list===================\n\n1-ajouter une ou plusieur taches:\n2-affichage:\n3-modification:\n4-supprimer:\n5-quitter\n entrer le numero correspendant a votre choix: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            menu_ajouter();
            menu();
            break;
        case 2:
            menu_affichage();
            menu();
            break;
        case 3:
            modification();
            menu();
            break;
        case 4:
            supprimer();
            menu();
            break;
        case 5:
            menu_recherche();
            menu();
            break;
        case 6:
            menu_stats();
            menu();
            break;
        default:
            break;
        };
    }
    // fin de fonction menu d'affichage

    int main()
    {
        menu();
    }