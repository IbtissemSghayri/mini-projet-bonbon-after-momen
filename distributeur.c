#include "distributeur.h"
#include "bonbon.h"
#include <stdio.h>
#include <string.h>
//fonction creerDistributeur
/*Distributeur creerDistributeur(int id,Bonbon reserve[],int nb_bonbons_actuel){
    Distributeur dis;
    printf("saisissez l'id du distributeur:");
    scanf("%d",dis.id);
    /* SEND HELP
    printf("saisissez le nbre du distributeur:");
    scanf("%d",dis.id);
}*/

//Lena ma aamlna chay juste snaana struct de type distributeur w hatineh fl tableau mtaa distributeur ili mawjoud fl jeu
// fl jeu aana 3 distributeurs juste tefhemha akther mbaad fl jeu
void creerDistributeur(Distributeur tab_dis[],int* nb_dis) {
    Distributeur d;
    printf("Saisir l'identifiant du distributeur :");
    scanf("%d", &d.id);
    d.nb_bonbons_actuel=0;
    tab_dis[*nb_dis]=d;
    (*nb_dis)++;
    printf("Distributeur créé avec succès!\n");
}


void ajouterBonbon(Distributeur *d) {
    if(d->nb_bonbons_actuel>=100) {
        printf("Reserve pleine!\n"); // test si l distributeur m3ebi wla lee (100 hia maximum ili yhezou distributeur)

        return;        // return; hia instruction tkharjek ml fonction kemla staamlnha lena bch nokhrejou ML FONCTION ken nal9awhech
    }
    // kenou fih blasa nzidou bonbon
    Bonbon b;
    printf("Couleur du bonbon: ");
    scanf("%s",b.couleur);
    printf("Valeur du bonbon: ");
    scanf("%d",&b.valeur);

    d->reserve[d->nb_bonbons_actuel]=b;
    d->nb_bonbons_actuel++;
    printf("Bonbon ajoute au distributeur!\n");
}

void retirerBonbon(Distributeur *d) {
    if(d->nb_bonbons_actuel==0) {  // test ken dis feragh wla lee
        printf("Distributeur vide!\n");
        return;
    }

    char couleur[30];
    printf("Couleur du bonbon a retirer: "); // nes2lou aala loun l bonbon ili nhebou nfaskhoha
    scanf("%s",couleur);

    int index=-1;
    for (int i=0;i<d->nb_bonbons_actuel;i++) { // nfarksou aal indice mteeha hasb ismha
        if (strcmp(d->reserve[i].couleur, couleur)==0) {
            index=i;
            break;
        }
    }

    if (index==-1) { // test kenha mawjouda wla lee
        printf("Bonbon non trouve!\n");
        return;
    }

    for (int i=index;i<d->nb_bonbons_actuel-1;i++) { // ken mawjouda nfaskhoha
        d->reserve[i]=d->reserve[i+1];
    }
    d->nb_bonbons_actuel--;
    printf("Bonbon retire!\n");
}

void afficherDistributeur(Distributeur d) {
    printf("\n--- Distributeur %d ---\n",d.id);
    printf("Bonbons actuels: %d\n",d.nb_bonbons_actuel);
    if(d.nb_bonbons_actuel>0) {
        printf("Contenu:\n");
        for(int i=0;i<d.nb_bonbons_actuel;i++) {
            printf("  ");
            afficheBonbon(d.reserve[i]);
        }
    }
}






/*

void ajouterbonbon(bonbon){
    len=sizeof(distributeur.reserve)/sizeof(distributeur.reserve[0]);
    if (len<50){
        distributeur.reserve[len]=bonbon ;
    }
    else{
        printf("le distributeur est complet !!");
    }
}
void retirer bonbon(B){
    L=sizeof(distributeur.reserve)/sizeof(distributeur.reserve[0]);
    int pos;
    for(int i=0;i<len;i++){
            if (distributeur.reserve[i]==B){
                pos=i;
                break;
            }
    }
    if(pos==-1){
        printf("bonbon n'existe pas ");
    }
    else {
        for(int i=pos;i<len;i++){
            distributeur.reserve[i]=distributeur.reserve[i+1];
        }
    }

Distributeur ajouerBonbon(Distributeur d, Bonbon b){
    if (d.nb_bonbons_actuel <MAX_BONBONS){
        d.reserve[d.nb_bonbons_actuel]=b;
        d.nb_bonbons_actuel++;

    }else{
        printf("la reserve du distributeur %d est pleine!",d.id);
    }
    return d;
}

Distributeur retirerBonbon(Distributeur d){
    if (d.nb_bonbons_actuel>0){
        d.nb_bonbons_actuel--;
    }else{
        printf(" Distributeur %d est vide",d.id);
    }
    return d;
}

void afficherDistributeur(Distributeur d){
    printf("==== DISTRIBUTEUR %d====\n",d.id);
    printf("bonbons : %d\n",d.nb_bonbons_actuel);

    for ( int i=0; i<d.nb_bonbons_actuel; i++){
        print("%d - %s(%d pts)\n",
              i+1,
              d.reserve[i].couleur,
              d.reserve[i].valeur);
    }
    printf("=====\n");

}
*/

