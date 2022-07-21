//
// Created by Charles on 21/07/2022.
//
#include "stdio.h"
#include "Exercices.h"
#include "util.h"
void Exercice1() {
    char password[21];
    int error = 0;
    do {
        error = scanf_secure_string("Entrez un mot de passe qui fait entre 10 et 20 caratères de longueur\n>", password);
        printf("password: %s\n", password);
        int longueur = 0;
        for(int i = 0; i < 20; i++) {
            if(password[i] == '\0') {
                if(i < 10) {error++;}
                else {longueur = i;}
            }
        }
        if(longueur == 0 || error > 0) {
            error++;
            printf("Erreur: le mot de passe doit avoir entre 10 et 20 caratères\n");
        }
    } while (error != 0);


}
void Exercice2(){
    const float s = 0.8;
    const float t = 0.9;
    float n1, n2;
    scanf_secure_float("Entrez n1\n>", &n1);
    scanf_secure_float("Entrez n2\n>", &n2);
    float r;
    r = n1 / n2;
    if(r >= s) {
        printf("TB");
    } else if(r >= s*t){
        printf("OK");
    } else {
        printf("KO");
    }
    printf("\n");
}

int main_Exercices() {
    Exercice1();
    Exercice2();
    return 0;
}