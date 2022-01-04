#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#include "print.h"
#include "stBmu.h"
#include "stConfig.h"
#include "stNeurone.h"
#include "stVec.h"

int main(int argc, const char * argv[]) {

    int nbvecteurs = 150;
    int tailleVectData = 4;
    int nbcolonnes = 10;
    
    printf("Configuration globale\n");
    config configGlobale = initStructConfigG(nbvecteurs, tailleVectData, nbcolonnes);
    printf("Affichage du return de la fonction\n");
    afficheStructConfigG(configGlobale);
    printf("Taille voisinage et alpha à initialiser. Valeurs différentes si phase 1 ou phase 2 d'apprentissage. \n");

    
    printf("\n*********************************\n\n");
    printf("Structure Vec : Normalisation des vecteurs + calcul du vecteur moyen pour initialiser le réseau de neurones\n");
    int tailleStructure = 3;
    int tailleVecteur = tailleVectData + 1;
    
    vec* tabStructVec = createStructVec(tailleStructure, tailleVecteur);
    initVec(tabStructVec, tailleStructure, tailleVecteur);
    printf("Pour les tests de calcul, initialisation de 3 vecteurs seulement\n");
    printf("Affichage\n");
    afficheTabStructVec(tabStructVec, tailleStructure, tailleVecteur);
    printf("\n-----------------------\n\n");

    double* norme = calculNorme(tabStructVec, tailleStructure, tailleVectData);
    printf("Affichage du return de la fonction\n");
    afficheVecteur(norme, tailleStructure);
    printf("\n-----------------------\n\n");

    initNorme(tabStructVec, tailleStructure, norme);
    printf("Affichage\n");
    afficheTabStructVec(tabStructVec, tailleStructure, tailleVecteur);
    printf("\n-----------------------\n\n");

    double** vNormalise;
    vNormalise = normalisationV(tabStructVec, tailleStructure, tailleVectData);
    printf("Affichage du return de la fonction\n");
    afficheMatrice(vNormalise, tailleStructure, tailleVectData);
    printf("\n-----------------------\n\n");

    printf("\nCréation d'une nouvelle structure pour y mettre les vecteurs normalisés\n\n");
    vec* tabStructVecN = createStructVec(tailleStructure, tailleVecteur);
    
    initVecNormalise(tabStructVecN, tailleStructure, tailleVecteur, vNormalise);
    printf("Affichage\n");
    afficheTabStructVec(tabStructVecN, tailleStructure, tailleVecteur);
    printf("Indices à rajouter dans la 5eme colonne. \n\n");
    printf("\n-----------------------\n\n");

    double* moy = calculMoy(tabStructVecN, tailleStructure, tailleVectData);
    printf("Affichage du return de la fonction\n");
    afficheVecteur(moy, tailleVectData);
    printf("Ce vecteur moyen permettra d'initialiser le réseau de neurones. \n");
    printf("\n-----------------------\n\n");
    
    
    return 0;
}
