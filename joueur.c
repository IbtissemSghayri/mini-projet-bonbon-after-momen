#include "joueur.h"
#include <stdio.h>
#include <string.h>

//focntion creerJoueur
void creerJoueur(Joueur joueurs[],int *nb){
    Joueur j;
    //saisie des donnees du joueurs
    printf("saisir le pseudo:");
    scanf("%s",j.pseudo);
    //ajout du joueur dans le tableau joueurs[]
    j.scoreTotal=0;
    joueurs[*nb]=j;
    (*nb)++; //changement de la taille du tableau
    printf("Joueur creé !");
}

//focntion afficherJoueur
void afficherJoueur(Joueur joueur){
    printf("Ton pseudo est : %s\n son score total est : %d", joueur.pseudo ,joueur.scoreTotal);
}

//focntion modifierJoueur
void modifierJoueur(Joueur *joueur){
    printf("saisir le nouveau pseudo: ");
    scanf("%c",joueur->pseudo);
    printf("saisir le nouveau score totale: ");
    scanf("%d",&joueur-->scoreTotal);
}

//structure supprimerjoueur qui fait la supprission d'un joueur
void supprimerJoueur(Joueur joueur,Joueur joueurs[], int *nb){
    for (int i=0;i<*nb;i++){
        if (strcmp(joueurs[i].pseudo,joueur.pseudo)==0){
            joueurs[i]=joueurs[*nb-1]; //remplacement dans la case contenat le joueur a supprimer par le dernier
            (*nb)--;
        }
    }
}

