//
// Created by victor on 29/09/2021.
//

#include "fonctions.h"
#include "stdio.h"

int getMax(int nombre1 ,  int nombre2){
    if (nombre1 < nombre2)
    {
        printf("%d", nombre2);
    }
    else
    {
        printf("%d", nombre1);
    }
    return 0;
}


int saisirEntier(){
    int entier=0;
    printf("Saisir entiers");
    scanf("%d", &entier);
    return entier;
}



int calculAire(int longueur1, int largeur1){
    return (longueur1*largeur1);
}

int calculPérimètre(int longueur2, int largeur2){
    return (longueur2*2+largeur2*2);
}

int multiple(int nombre1, int nombre2){
    if (nombre1%nombre2)==0
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

