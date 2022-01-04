#ifndef stConfig_h
#define stConfig_h

#include <stdio.h>
#include "stBmu.h"
#include "stNeurone.h"


typedef struct config{
    int nbvecteurs;
    int taillevecteur;
    int nbneurones;
    int nbcolonnes;
    int nblignes;
    int nbiterations;
    int taillevoisinage;
    double alpha; // Taux d'apprentissage
    struct bmu *bmuC;
    struct neurone *map;
}config;


config initStructConfigG(int nbvecteurs, int tailleVectData, int nbcolonnes);
void afficheStructConfigG(config structConfig);


#endif /* stConfig_h */
