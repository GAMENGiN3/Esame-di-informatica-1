#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definire variabili
    float Base; 
    float Altezza;
    float Area;

    // Chiedere all'utente di inserire la base
    printf("Inserire la Base: ");
    scanf("%f", &Base); 

    // Chiedere all'utente di inserire l'altezza
    printf("Inserire l'Altezza: ");
    scanf("%f", &Altezza);
    
    // Calcolare l'area del triangolo
    Area = (Base * Altezza) / 2;

    // Stampare il risultato
    printf("L'Area e' %f\n", Area); 

    return 0; 
}