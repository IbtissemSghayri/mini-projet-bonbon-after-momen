#ifndef DISTRIBUTEUR_H_INCLUDED
#define DISTRIBUTEUR_H_INCLUDED
#include "Bonbon.h"
#define MAX_BONBONS 50

typedef struct {
    int id;
    Bonbon reserve[MAX_BONBONS];
    int nb_bonbons_actuel;
}Distributeur;

void creerDistributeur(Distributeur tab_dis[],int* nb_dis);
void ajouterBonbon(Distributeur *d);
void retirerBonbon(Distributeur *d);
void afficherDistributeur(Distributeur d);




#endif // DISTRIBUTEUR_H_INCLUDED


