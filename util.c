//
// Created by bob on 21/07/2022.
//

#include "util.h"
#include <stdio.h>
#include <stdlib.h>

void scanf_secure_unsigned(const char * message, unsigned * c)
{
    printf(message);
    if(scanf("%u", c) == 0)
    {
        fprintf(stderr, "Erreur %s scanf\n", __FILE__);
        exit(1);
    }
    getchar();
}

void scanf_secure_unsigned_short(const char * message, unsigned short* c)
{
    printf(message);
    if(scanf("%d", c) == 0)
    {
        fprintf(stderr, "Erreur %s scanf\n", __FILE__);
        exit(1);
    }
    getchar();
}

void scanf_secure_int(const char * message, int* c)
{
    printf(message);
    if(scanf("%d", c) == 0)
    {
        fprintf(stderr, "Erreur %s scanf\n", __FILE__);
        exit(1);
    }
    getchar();
}
void scanf_secure_float(const char * message, float* c)
{
    printf(message);
    if(scanf("%f", c) == 0)
    {
        fprintf(stderr, "Erreur %s scanf\n", __FILE__);
        exit(1);
    }
    getchar();
}

/*Retourne 1 si il y a une erreure, 0 sinon*/
int scanf_secure_string(const char * message, char* c)
{
    printf(message);
    if ( scanf("%s",c) == 0 )
    {
        fprintf(stderr,"Erreur %s scanf \n",__FILE__);
        return 1;
    }
    getchar();
    return 0;
}