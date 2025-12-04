#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

//definition de la structure joueur
typedef struct {
    char pseudo[30];
    int scoreTotal ;
}Joueur;

//les fonctions/procedures propres a la structure joueur
Joueur creerJoueur(Joueur joueurs[],int *nb);
void afficherJoueur(Joueur joueur);
void modifierJoueur(Joueur *joueur);
void supprimerJoueur(Joueur joueur,Joueur joueurs[], int *nb);


#endif // JOUEUR_H_INCLUDED





