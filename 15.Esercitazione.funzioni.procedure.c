#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 100 

//dichiarazione variabili
int v=0, x=0, y=0, j=0, i=0, a=0, b=0;
//dichiarazione vettore
int vettore [DIM];

//dichiarazione matrice
int matrice [DIM] [DIM];

//fuinzioni


//procedure
void Definizione_matrice () {
    printf("Quanto righe vuoi per la matrice?\n");
    scanf("%d", &y);
    printf("\n");
    printf("Quante colonne vuoi per la matrice?\n");
    scanf("%d", &x);
    printf("\n");
}

//------------------------------------------------------------
void Generatore_casuale () {
    srand(time(NULL));
}

//------------------------------------------------------------
void Creazione_matrice() {
    while (j<y)
    {
        while (i<x)
        {
                a= rand() % 200 -100;
            matrice [j] [i] = a;
            i++;
        }
    i = 0;
    j++; 
    }
j = 0;
i = 0;
}

//------------------------------------------------------------
void Visualizzazione_matrice() {
    while (j<y)
    {
        while (i<x)
        {
            printf("%d\t", matrice [j] [i]);
            i++;
        }
        printf("\n");
        i=0;
        j++;
    }
    i=0;
    j=0;
    printf("\n");
}

//------------------------------------------------------------
void Inversione_matrice () {
    while (j<y)
    {
        while (i<x)
        {
            matrice [j] [i] = matrice [j] [i] * -1;
            i++;
        }
        i=0;
        j++;
    }
i=0;
j=0;
}

//------------------------------------------------------------
void Inserimento_vettore () {
while (j<y)
{
    while (i<x)
    {
        if (matrice [j] [i]>0)
        {
            i++;
        }
        else {
            vettore [b] = matrice [j] [i];
            b++;
        }
        i++;
    }
    i=0;
    j++;
}
i=0;
j=0;
}

//------------------------------------------------------------
void visualizzazione_vettore () {
    while (j<b)
    {
        printf("%d\t", vettore [j]);
        j++;
    }
j=0;
}

//------------------------------------------------------------
void spazio () {
printf("\n\n\n");
}

//------------------------------------------------------------


int main () {

//dimensione matrice
Definizione_matrice ();

//avviare generatore di numeri casuali
Generatore_casuale ();

//crezione matrice
Creazione_matrice ();

//visualizazione matrice
Visualizzazione_matrice ();

//Spazio
spazio();

//inversione valori matrice
Inversione_matrice ();

//visualizazione valore matrice inversa
Visualizzazione_matrice ();

//Spazio
spazio();

//inserimento valori negativi all'interno di un vettore
Inserimento_vettore ();

//visualizazione vettore
visualizzazione_vettore ();

//Spazio
spazio();

//fine programma :D
return 0;
}