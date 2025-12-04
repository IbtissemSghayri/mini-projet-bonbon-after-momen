#include <stdio.h>
#include "utils.h"
#include "jeu.h"

int main() {
    Jeu jeu;
    intarface();
    init_jeu_auto(&jeu);
    menu_principal(&jeu);
    free_jeu(&jeu);
    return 0;
}

