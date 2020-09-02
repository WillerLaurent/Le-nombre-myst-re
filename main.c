#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("===LE GRAND JEU DU NOMBRE MYSTERE !!!===\n\n");

    const int MIN = 1;
    int max = 100;
    srand(time(NULL));
    int niveau = 1;
    int rejouer = 1;
    int nbJoueur = 0;

    while(rejouer==1)
    {

       /* do
        {
            printf("Choisis le nombre de joueurs\n");


        }
        while(nbJoueur!=1 && niveau!=2);*/



        printf("Trouve le nombre mystere.\n\n");
        do
        {
            printf("Choisis ton niveau de difficulte :\n");
            printf("1 = entre 1 et 100\n");
            printf("2 = entre 1 et 1000\n");
            printf("3 = entre 1 et 10000\n");
            scanf("%d", &niveau);
            switch(niveau)
            {
            case 1:
                max=100;
                break;
            case 2:
                max=1000;
                break;
            case 3:
                max=10000;
                break;
            default:
                printf("Mauvais choix, veuillez recommencer !!\n\n");
            }
        }
        while(niveau!=1 && niveau!=2 && niveau!=3);

        int compteur = 0;
        int nombreMystere = (rand()% (max-MIN+1))+MIN;
        int nombreChoisi = 0;

        printf("Le nombre mystere est compris entre %d et %d\n\n", MIN, max);

        do
        {
            printf("Quel est le nombre mystere ?");
            scanf("%d",&nombreChoisi);
            compteur++;
            if(nombreChoisi<nombreMystere)
            {
                printf("Le nombre mystere est plus grand !!\n\n");
            }
            else if(nombreChoisi>nombreMystere)
            {
                printf("Le nombre mystere est plus petit !!\n\n");
            }
        }
        while(nombreChoisi!=nombreMystere);

        printf("Bravo!!! Vous avez trouve le nombre mystere en %d coups !!!\n",compteur);
        printf("Le nombre mystere etait %d\n\n",nombreMystere);

        do
        {
            printf("Voulez-vous rejouer ?\n");
            printf("OUI : tapez 1, NON : tapez 2\n");
            scanf("%d", &rejouer);
            if(rejouer!=1 && rejouer!=2)
            {
                printf("choix incorrect!!!");
            }
            printf("\n\n");
        }
        while(rejouer!=1 && rejouer!=2);

    }
    printf("AU REVOIR!!\n\n");
    return 0;
}
