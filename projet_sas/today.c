#include <stdio.h>
#include <time.h>
typedef struct deadline
{
    int d;
    int m;
    int h;
} deadline;
typedef struct collaboratoir
{
    char nom[50];
    char prenom[50];
    char email[70];
} colla;
typedef struct date
{
    int d;
    int m;
    int a;
    int h;
    int mm;
} date;
// structure de tache
typedef struct tache
{
    int id;
    char name[50];
    char description[100];
    int status;
    deadline time;
    date today;
    colla user;
} tache;

tache tach[50];
int n = 0;
void delai()
{
    time_t timestamp = time(NULL);
    struct tm *timeInfos = localtime(&timestamp);
    int h, mm, d;
    d = timeInfos->tm_mday;
    h = timeInfos->tm_hour;
    mm = timeInfos->tm_min;
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
        d = (tach[i].today.d + tach[i].time.d) - d;
        if (d > 0)
        {
            h = (tach[i].time.h + tach[i].today.h) - h;
            if (h > 0)
            {
                mm = (tach[i].today.m + tach[i].time.m) - mm;
                if (mm > 0)
                {
                    printf("dealaid :  %d jour %d heure %d minutes", d, h, mm);
                }
                else if (mm == 0)
                {
                    printf("dealaid : %d jour %d heure 0 minute", d, h);
                }
                else if (mm < 0)
                {
                    h = (mm / 60) - tach[i].time.h - h;
                    if (h > 0)
                    {
                        printf("dealaid : %d jour %d heure 0 minute", d, h);
                    }
                    else if (h == 0)
                    {
                        printf("dealaid : %d jour 0 heure 0 minute", d, h);
                    }
                    else if (h < 0)
                    {
                        d = ((h / 24) - tach[i].time.d) - d;
                        if (d > 0)
                        {
                            printf("dealaid : %d jour 0 heure 0 minute", d);
                        }
                        else if (d < 0 || d == 0)
                        {
                            printf("dealaid : out of time /done");
                        }
                    }
                }
            }
        }
    }
}