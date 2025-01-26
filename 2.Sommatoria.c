#include <stdio.h>
#include <stdlib.h>

int main() {

unsigned int i;
unsigned int I;
float N;
float Somma;
i=0;
N=0;
I=0;

printf("quanti numeri vuoi sommare? ");
scanf("%d", &i);

Somma=0;
while (i>I)
{
 printf("Inserisci il numero che vuoi sommare " );
 scanf("%f", &N);
 Somma = Somma + N;
 printf("La somma e' %f\n " , Somma);

 I++;


}
 printf("La somma totale e' %f\n " , Somma);
    return 0; 
}