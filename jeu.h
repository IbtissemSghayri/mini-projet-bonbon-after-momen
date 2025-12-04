#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#define MAX_JOUEURS 10
#define MAX_COMBINAISONS 25
#define MAX_DISTRIBUTEURS 3
#define MAX_SCORES 50

typedef struct {
    int nbTours;
    int toursEffectues;
    int mode;
    Joueur joueurs[MAX_JOUEURS];
    int nbJoueurs;
    Distributeur distributeurs[MAX_DISTRIBUTEURS];
    Combinaison combinaisons[MAX_COMBINAISONS];
    int nbCombinaisons;
    Score scores[MAX_SCORES];
    int nbScores;
}Jeu;
void initialiserJeu();
void lancerPartie();
int calculerScore();
void afficherResultats();
void sauvegarderScores();
void changerScores();


#endif // JEU_H_INCLUDED

