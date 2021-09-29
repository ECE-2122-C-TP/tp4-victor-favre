//
// Created by victor on 29/09/2021.
//

#include "exercice.h"
#include "stdio.h"
#include "fonctions.h"

void exercice1(){
    int nombre1 = 0, nombre2 = 0;
    printf("Saisir entier");
    scanf("%d", &nombre1);
    printf("Saisir entier");
    scanf("%d", &nombre2);
    printf("%d", getMax(nombre1 , nombre2));
    return 0;
}


void exercice3(){
    int longueur=saisirEntier();
    int largeur=saisirEntier();
    printf("L'aire est de", calculAire(longueur1, largeur1));
    printf("Le périmètre est de", calculPérimètre(longueur2, largeur2));
    return;
}


void exercice4(){
    int nombre1=saisirEntier(), nombre2=3, nombre3=10;
    if multiple(nombre1, nombre2)==1
    {
        printf("multiple de 3");
    }
    else
    {
        printf("Ce n'est pas un multiple de 3");
    }
    if nombre1>=nombre3
    {
        printf("Supérieur ou égale à %d", nombre3);
    }
    return 0;
}