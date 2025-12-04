#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    //l'affichage de l'interface graphique
    printf("==== MACHINE A BONBON ===== \n");
    printf("1. Jouer une parie \n");
    printf("2. Parametrer le jeu \n");
    printf("3. Voir les scores \n");
    printf("4. Quitter \n");
    printf("=========================== \n");
    //selon le choix de c de l'utilisateur le jeux va se lancer
    do {
        printf("Votre choix : ");
        scanf("%d", &c);

        if (c < 1 || c > 4) {
            printf("Choix invalide ! Entrez entre 1 et 4.\n");
            continue;
        }

        switch(c) {
            case 1:
                // Jouer une partie
                printf("Vous avez choisi: Jouer une partie.\n");
                break;

            case 2:
                // Parametrer le jeu
                printf("Vous avez choisi: Parametrer le jeu.\n");
                break;

            case 3:
                // Afficher les scores
                printf("Vous avez choisi: Voir les scores.\n");
                break;

            case 4:
                //Le programme s’arrête
                printf("Au revoir !\n");
                break;
        }

    } while (c != 4);

    return 0;
}




