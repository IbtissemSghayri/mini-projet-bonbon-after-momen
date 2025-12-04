#ifndef BONBON_H_INCLUDED
#define BONBON_H_INCLUDED

#define MAX_COULEUR 20
typedef struct {
    char couleur[MAX_COULEUR] ;
    int valeur;
}Bonbon;

void creeBonbon(Bonbon tab_bon[],int* taille_tab_bon) void afficherBonbon(Bonbon b);
void afficheBonbon(Bonbon b);
void modifierBonbon(Bonbon *b);
void supprimerBonbon(Bonbon tab_bonbon[],int *taille_tab_bon,char couleur[]);






#endif // BONBON_H_INCLUDED



