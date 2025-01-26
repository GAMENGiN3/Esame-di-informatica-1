#include <stdio.h>
#include <stdlib.h> 

#define VETTORE 5
int main() {

int v[VETTORE];
int i;
int j;
int scambio;

i=0;
while (i<VETTORE)
{
    printf("Quale numero vuoi inserire?\n");
    scanf("%d", &v[i]);
    i++;
}

i=0;
printf("i valori del vettore sono \n");
while (i<VETTORE)
{
     printf("%d    ", v[i]);
    i++;
}

printf("\n");

for (i = 0; i < VETTORE-1; i++)
{
    for (j = i+1;j < VETTORE; j++)
    {
        if (v[j]<v[i])
        {
            scambio=0;
            scambio=v[i];
            v[i]=v[j];
            v[j]=scambio;
        }
        
    }
    
}

i=0;
printf("Questo e' il vettore ordinato :)\n");
while (i<VETTORE)
{
printf("%d    ",v[i]);
i++;
}

return 0;

}