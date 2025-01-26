#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define DIM 15

//Dichiarazione della matrice qui perche ce piu memoria dello stack main
int matrice [DIM] [DIM]; 

int main() {
//Dichiarazione variabile
    int i;
    int j;
    int r;
    int a;
    int b;
    i=0;
    j=0;
    b=0;
    a=0;
    srand(time(NULL));

//Scelta
printf("Vuoi che la matrice sia generata automaticamente clicca il tasto 1\n");
scanf("%d", &a);

//Crezione matrice automatica
if (a==1)
{
while (i<DIM)
{
j=0;
  while (j<DIM)
  {
    r = rand() % 10000 + 1;
    matrice [i] [j] = r;
    j++;
  }
i++;
}

printf("\n");

}

//Crezione matrice manuale

else {
while (i<DIM)
{
j=0;
    while (j<DIM)
    {
     printf("quale e il valore da inserire?\n");
     scanf("%d", &matrice [i] [j]);
     j++;
    }
    i++;
}

}

//Visualizzazione matrice
    i=0;
    j=0;
while (i<DIM)
{
j=0;
    printf("\n");
    while (j<DIM)
    {
        printf("%d\t", matrice [i] [j]);
        j++;
    }
    i++;
}

printf("\n");

//somma di tutti i valori della matrice
i=0;
j=0;

while (i<DIM)
{
    j=0;
    while (j<DIM)
    {
     b=b + matrice [i] [j];
     j++;
    }
     i++;
}

printf("\n");

printf("la somma totale e' %d", b);

printf("\n");
return 0;
}