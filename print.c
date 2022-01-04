#include "print.h"

void afficheVecteur(double *vecteur, int tailleVecteur){
    // printf("Fonction d'affichage d'un vecteur de double\n");
    printf("Vecteur : ");
    for (int i = 0 ; i < tailleVecteur ; i++){
        printf("%.2f  ", vecteur[i]);
    }
    printf("\n");
}




void afficheMatrice(double** mat, int nblignes, int nbcolonnes){
        // printf("Fonction affichage Matrice de double 2 chiffres après la virgule \n");
        for(int i=0; i < nblignes; i++){
            for(int j = 0; j < nbcolonnes; j++){
               printf("%.2f  ", mat[i][j]);
            }
            printf("\n");
        }
}
