/******************************************************************************
MATRICE DI PUNTI
Problema: acquisito un numero intero n, si visualizzi una figura quadrata di n*n  
con degli asterischi "*" nella diagonale principale, dei segni meno "-" al di sotto e 
dei segni più "+" al di sopra della diagonale principale stessa

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

//dichialo la matrice tra variabile locale perche ha piu spazio di allocazione
int matrice [DIM] [DIM];

int main() {
int i;
int j;
i=0;
j=0;


while (i<DIM)
{
j=0;
    while (j<DIM)
    {
        if (i==j)
        {
            printf("*\t");
        }
            else {
                if (i>j)
                {
                    printf("-\t");
                }
                    else {

                        printf("+\t");

                    }
                



            }
    j++;
        
    }
    printf("\n");
    i++;
}




return 0; 
}