#include "combinaison.h"
#include <stdio.h>

Combinaison creerCombinaison(){
    Combinaison c;
    printf("Saisissez l'id de la combinaiseon :");
    scanf("%d",&c.id);
    //heeelp maarafsth el couleurs
    // /sehla yeser inti hachtek lena bch taaml combinaison yaani fonction bch trajaa struct de type combinaison juste aabi id w score mteeha  w baad
    for (int i=0;i<3;i++) { // taabi tableau c.couleurs ili fih deja 3 cases bch thot fihom ism l couleur ili hachtek bih wl match bin tableau
                            //hetha w ili bch yhabtou distributeur ysir mbaad fl jeu.c
        printf("Couleur %d: ", i + 1);
        scanf("%s", c.couleurs[i]);
    }
    printf("Points: ");
    scanf("%d", &c.points);
    (*nb)++;
    printf("Combinaison creee avec succes!\n");
    return c;
}














void afficherCombinaison(Combinaison c){
    //heeeelp (juste affichina ili aana khw)
        printf("Combinaison %d: %s - %s - %s \nPoints: %d\n",
           c.id, c.couleurs[0], c.couleurs[1], c.couleurs[2], c.points);

}






//khedmt mariem yaatyha saha
/*
Combinaison creerCombinaison(){
    Combinaison c;
    int framboise = 0;
    int bombe = 0, mauve = 0;
    int score=1;
    for( int i=0,i<3, i++){
        if (strcmp(c.couleurs[i],"framboise")==0){
            framboise=1;
        }
        if (strcmp(c.couleurs[i],"mauve")==0){
            mauve=1;
        }
        if (strcmp(c.couleurs[i],"bombe")==0){
            bombe=1;
        }

    }
    if ( strcmp(c.couleurs[1],c.couleurs[2])==0 && strcmp(c.couleurs[2],c.couleurs[3])==0){
        score*=5;
    }
    if (framboise=1){
        score*=2;
    }
    if (bombe&&mauve){
        score-=15;
    }
    c.points=score;
    return c;
}
*/






// fasakhna combinaison ml tableau mtaa cobinaison ili mawjoud fl jeu
void supprimerCombinaison(Combinaison tab[],int *nb,int id) {
    int found=0;
    for (int i=0;i<*nb;i++) {
        if (tab[i].id==id) {
            // Remplacer par le dernier élément
            tab[i]=tab[*nb-1];
            (*nb)--;
            found=1;
            printf("Combinaison supprimee!\n");
            break;
        }
    }

    if (!found) {
        printf("Combinaison non trouvee!\n");
    }
}


// modification aadia hethi juste badalna l couleur ili hachtna bch nbadlouh wl pts zeda
void modifierCombinaison(Combinaison *c) {
    printf("Modification de la combinaison %d\n", c->id);
    for (int i=0;i<3;i++) {
        printf("Nouvelle couleur %d: ", i + 1);
        scanf("%s", c->couleurs[i]);
    }
    printf("Nouveaux points: ");
    scanf("%d", &c->points);
}
