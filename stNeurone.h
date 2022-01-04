#ifndef stNeurone_h
#define stNeurone_h
#include <stdio.h>

// Neurone
typedef struct neurone {
    double *w; // Mémoire d'un neurone
    double act; //Activation (distance euclidienne entre neurone et vecteurs Data Set)
    char id; // A - B - C
}neurone;

// Si neurone du voisinnage, alors
// w = w + alpha * vecteur
// Sinon
// w = w


#endif /* stNeurone_h */
