#ifndef COMBINAISON_H_INCLUDED
#define COMBINAISON_H_INCLUDED
#include "bonbon.h"

typedef struct {
    int id ;
    char couleurs[3][MAX_COULEUR];
    int points;
}Combinaison;

Combinaison creerCombinaison();
void afficherCombinaison(Combinaison c);
void modifierCombinaison(Combinaison *c);
void supprimerCombinaison(Combinaison tab[],int *nb,int id);



#endif // COMBINAISON_H_INCLUDED


