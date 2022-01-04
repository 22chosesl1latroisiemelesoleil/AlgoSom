#ifndef stVec_h
#define stVec_h

#include <stdio.h>


typedef struct vec {
    double norme;
    // char* etiquette;
    double v[5];
}vec;

vec* createStructVec(int tailleStructure, int tailleVecteur);
void initVec(vec *tabStruct, int tailleStructure, int tailleVecteur);

double* calculNorme(vec *tabStructVec, int tailleStructure, int tailleVectData);
void initNorme(vec *tabStruct, int tailleStructure, double *norme);

double** normalisationV(vec *tabStructVec, int tailleStructure, int tailleVectData);
void initVecNormalise(vec *tabStruct, int tailleStructure, int tailleVecteur, double **vNormalise);

double* calculMoy(vec *tabStructVec, int tailleStructure, int tailleVectMoy);

void afficheTabStructVec(vec *tabStruct, int tailleStructure, int tailleVecteur);



#endif /* stVec_h */
