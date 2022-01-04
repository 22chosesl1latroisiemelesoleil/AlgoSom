#include "stConfig.h"
#include <math.h>


config initStructConfigG(int nbvecteurs, int tailleVectData, int nbcolonnes){
    config structConfig;
        structConfig.nbvecteurs = nbvecteurs;
        structConfig.taillevecteur = tailleVectData;
        structConfig.nbneurones = 5 * sqrt(structConfig.nbvecteurs) * 1;
        structConfig.nbcolonnes = nbcolonnes;
        structConfig.nblignes = structConfig.nbneurones / structConfig.nbcolonnes;
        structConfig.nbiterations = 500 * structConfig.taillevecteur;
        structConfig.taillevoisinage = 0;
        structConfig.alpha = 0.0;

        printf("Fonction d'initialisation de la structure de configuration globale\n");
    return structConfig;
}

void afficheStructConfigG(config structConfig){
//        printf("Affichage structure de configuration globale \n");
        printf("Nb vecteurs : %d \t Taille vecteurs : %d \t Nb neurones : %d \t Nb colonnes : %d \t Nb lignes : %d \t Nb iterations : %d \t Taillevoisinage : %d \t Alpha :  %.2f\n",
        structConfig.nbvecteurs, structConfig.taillevecteur, structConfig.nbneurones, structConfig.nbcolonnes, structConfig.nblignes, structConfig.nbiterations, structConfig.taillevoisinage, structConfig.alpha);
}
