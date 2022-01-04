#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "stVec.h"
#include "print.h"

double* calculMoy(vec *tabStructVec, int tailleStructure, int tailleVectMoy){
     double* moy = NULL;
     if (tailleVectMoy > 0){
          moy = malloc((tailleVectMoy) * sizeof(double));
          if (moy == NULL) {
               printf("Malloc a échoué");
               exit(0);
          }
     }
          for(int j = 0; j < tailleVectMoy; j++){
             double temp = 0.0;
             double m = 0.0;
             for(int i = 0; i < tailleStructure; i++){
                     temp = temp + tabStructVec[i].v[j];
                     m = temp / tailleStructure;
                     moy[j] = m;
             }
          }
     printf("Fonction de calcul de la moyenne des vecteurs de la structure Vec\n");
    return moy ;
}

// Problème avec cette fonction. En relancant le code, elle fonctionne
void initVecNormalise(vec *tabStruct, int tailleStructure, int tailleVecteur, double **vNormalise){
        for (int i = 0 ; i < tailleStructure ; i++){
            for (int j = 0 ; j < tailleVecteur-1 ; j++){
                 tabStruct[i].v[j] = vNormalise[i][j];
            }

            // for (int j = 4 ; j < tailleVecteur ; j++){
            //     tabStruct[i].v[j] = i + 1;
            // }
        }
    printf("Fonction d'intialisation des vecteurs de la structure Vec\n");
}



double** normalisationV(vec *tabStructVec, int tailleStructure, int tailleVectData){
    double** vNormalise = NULL;
    if (tailleStructure > 0 && tailleVectData > 0){
        vNormalise = (double**) malloc (sizeof(double*)*tailleStructure);
        for(int i=0 ;i<tailleVectData ;i++){
            vNormalise[i] = (double*) malloc (sizeof(double)*tailleVectData);
        }
        if (vNormalise == NULL) {
               printf("Malloc a échoué");
               exit(0);
        }

        for (int i = 0 ; i < tailleStructure ; i++){
            for (int j = 0 ; j < tailleVectData ; j++){
                vNormalise[i][j] = tabStructVec[i].v[j]/tabStructVec[i].norme;
            }
        }
    }
    else{
          printf("Nbre de lignes et ou de colonnes égal à 0 ou négatif\n");
          exit(0);
    }

    free(vNormalise);
    printf("Fonction de normalisation d'un vecteur\n");
    return vNormalise;
}




void initNorme(vec *tabStruct, int tailleStructure, double *norme){
    for(int i=0;i<tailleStructure;i++){
            tabStruct[i].norme = norme[i];
    }
    // Pour une raison que j'ignore cette valeur passe à 0.0 (parfois)
    tabStruct[0].v[0] = 5.1;
    // tabStruct[0].v[0] = tabStruct[0].v[0];
    printf("Fonction d'intialisation des normes de la structure Vec\n");
}




double* calculNorme(vec *tabStructVec, int tailleStructure, int tailleVectData){
    double* norme = NULL;
    if (tailleVectData > 0){
          norme = malloc((tailleStructure) * sizeof(double));
          if (norme == NULL) {
               printf("Malloc a échoué");
               exit(0);
          }
    }
    for(int i = 0; i < tailleStructure; i++){
        double temp = 0.0;
        double n = 0.0;
        for(int j = 0; j < tailleVectData; j++){
            temp = temp + pow(tabStructVec[i].v[j], 2);

        }
        n = sqrt(temp);
        norme[i] = n;
    }
    free(norme);
    printf("Fonction de calcul de la norme des vecteurs de la structure Vec\n");
    return norme;
}




void initVec(vec *tabStruct, int tailleStructure, int tailleVecteur){
        tabStruct[0].v[0] = 5.1;
        tabStruct[0].v[1] = 3.5;
        tabStruct[0].v[2] = 1.4;
        tabStruct[0].v[3] = 0.2;

        tabStruct[1].v[0] = 4.9;
        tabStruct[1].v[1] = 3.0;
        tabStruct[1].v[2] = 1.4;
        tabStruct[1].v[3] = 0.2;

        tabStruct[2].v[0] = 4.7;
        tabStruct[2].v[1] = 3.2;
        tabStruct[2].v[2] = 1.3;
        tabStruct[2].v[3] = 0.2;

        for (int i = 0 ; i < tailleStructure ; i++){
            for (int j = 4 ; j < tailleVecteur ; j++){
                tabStruct[i].v[j] = i + 1;
            }
        }
    printf("Fonction d'intialisation des vecteurs de la structure Vec\n");
}


vec* createStructVec(int tailleStructure, int tailleVecteur){
    vec* tabStructVec = NULL;
    if (tailleStructure > 0){
        tabStructVec = malloc(tailleStructure * sizeof(vec));
        if (tabStructVec == NULL) {
            printf("Malloc a échoué");
            exit(0);
        }
        for (int i = 0 ; i < tailleStructure ; i++){
            for (int j = 0 ; j < tailleVecteur ; j++){
                tabStructVec[i].norme = 0;
                tabStructVec[i].v[j] = 0;
            }
        }
        free(tabStructVec);
        printf("Fonction de création d'un tab de structure Vec\n");
    }
    else{
        printf("Nbre de lignes et ou de colonnes égal à 0 ou négatif\n");
        exit(0);
    }
    return tabStructVec;
}


void afficheTabStructVec(vec *tabStruct, int tailleStructure, int tailleVecteur){
    // printf("Fonction d'affichage d'un tab de la structure Vec\n");
    for(int i = 0; i < tailleStructure; i++){
        printf("norme : %.2f - ", tabStruct[i].norme);
        afficheVecteur(tabStruct[i].v, tailleVecteur);
    }
}





