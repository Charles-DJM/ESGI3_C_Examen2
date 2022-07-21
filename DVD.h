//
// Created by Charles on 21/07/2022.
//

#ifndef ESGI3_C_EXAMEN2_DVD_H
#define ESGI3_C_EXAMEN2_DVD_H

enum Theme {HORREUR, SUSPENCE, MANGA, AUTRE};

typedef struct {
    char a_titre[256];
    float a_prix;
    enum Theme a_theme;
}DVD;

int main_DVD();
DVD* creer_DVD();
void afficher_DVD(const DVD*);
void modifier_DVD(DVD*);
void liberer_DVD();
#endif //ESGI3_C_EXAMEN2_DVD_H
