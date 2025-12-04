#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bonbon.h"
#include <stdio.h>

void creeBonbon(Bonbon tab_bon[],int* taille_tab_bon) { // nbadloha void bch nestaamloha ashel haka
    Bonbon b;
    printf("Donner la COULEUR du bonbon: ");
    scanf("%s",b.couleur);
    printf("Donner la VALEUR du bonbon: ");
    scanf("%d",&b.valeur);
    tab_bon[*taille_tab_bon]=b;
    (*taille_tab_bon)++;
    printf("Bonbon ajoute avec succes!\n");
}

void afficheBonbon(Bonbon b) {
    printf("Couleur: %s, Valeur: %d\n", b.couleur, b.valeur);
}
void modifierBonbon(Bonbon *b) {
    printf("Nouvelle couleur: ");
    scanf("%s",b->couleur);      // kif naamel b->couleur bch taatini l adresse mtaa couleur ml bonbon b equivalente ll (*b).couleur
    printf("Nouvelle valeur: ");
    scanf("%d",&b->valeur); // kif kif lena equivalente ll &(*b.valeur)
    printf("Bonbon modifie avec succes!\n");
}

//andi moshkla fi hkeyt taille taa tableau kifeh bsh nbadalha
//Lmochkla t7alet
void supprimerBonbon(Bonbon tab_bonbon[],int *taille_tab_bon,char couleur[]) {
    int index=-1;
    for (int i=0;i<*taille_tab_bon;i++) {
        if (strcmp(tab_bonbon[i].couleur,couleur)==0) { // lawajna aal index mmtaa bonbon fi wost tableau b ismha
            index=i;
            break;
        }
    }

    if (index==-1) {
        printf("Bonbon non trouve!\n");
        return;        // return; hia instruction tkharjek ml fonction kemla staamlnha lena bch nokhrejou ken nal9awhech
    }

    tab_bonbon[index]=tab_bonbon[*taille_tab_bon - 1]; // fasakhna l bonbon
    (*taille_tab_bon)--;
    printf("Bonbon supprime avec succes!\n");
}















