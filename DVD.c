//
// Created by Charles on 21/07/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "util.h"
#include "DVD.h"

int main_DVD() {
    DVD* dvd = creer_DVD();
    afficher_DVD(dvd);
    modifier_DVD(dvd);
    afficher_DVD(dvd);
    liberer_DVD(&dvd);
    afficher_DVD(dvd);
    return 0;
}
DVD* creer_DVD() {
    DVD* dvd = (DVD*) malloc(sizeof(DVD));
    if(dvd == 0) {
        fprintf(stderr,"Erreur %s : le dvd est null\n",__FILE__);
        exit(1);
    }
    scanf_secure_string("Entrez le nom du DVD\n>", dvd->a_titre);
    scanf_secure_float("Entrez le prix\n>", &dvd->a_prix);
    scanf_secure_int("Entrez le thème(0: Horreur, 1: Suspence, 2: Manga, 3: Autre)\n>", (int *)&dvd->a_theme);
    return dvd;
}
const char* ThemeToString(enum Theme theme){
    switch(theme) {
        case HORREUR:
            return "Horreur";
        case SUSPENCE:
            return "SUSPENCE";
        case MANGA:
            return "Manga";
        case AUTRE:
            return "Autre";
        default:
            return "";
    }
}
void afficher_DVD(const DVD* dvd) {
    if(dvd == NULL) {
        printf("Ce DVD n'existe pas");
        return;
    }
    printf("------------\n");
    printf("Titre: %s\n", dvd->a_titre);
    printf("Prix: %f\n", dvd->a_prix);
    printf("Theme: %s\n", ThemeToString( dvd->a_theme));
    printf("------------\n");
}
void modifier_DVD(DVD* dvd) {
    if(dvd == NULL) {
        fprintf(stderr,"Erreur %s : le dvd est null\n",__FILE__);
        exit(1);
    }
    printf("Modification du DVD\n");
    scanf_secure_string("Entrez le nom du DVD\n>", dvd->a_titre);
    scanf_secure_float("Entrez le prix\n>", &dvd->a_prix);
    scanf_secure_int("Entrez le thème(0: Horreur, 1: Suspence, 2: Manga, 3: Autre)\n>", (int *)&dvd->a_theme);
}
void liberer_DVD(DVD** dvd) {
    if(dvd == NULL) {
        fprintf(stderr,"Erreur %s : le dvd est null\n",__FILE__);
        exit(1);
    }
    free(*dvd);
    *dvd = NULL;
}

