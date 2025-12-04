#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

//definition de la structure score
typedef struct{
    char pseudo[30];
    int valeur;
    char date[20];
}Score;

//les fonctions/procedures propres a la structure score
void ajouterScore(Score scores[],int *nb);
void afficherScores(Score scores[],int nb);
void trierScores(Score tabscore[], int taille_tab_score);
void supprimerScore(Score scores[],int *nb,Score s);

#endif // SCORE_H_INCLUDED

