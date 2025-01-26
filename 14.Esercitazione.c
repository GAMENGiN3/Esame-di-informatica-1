#include <stdio.h>
#include <stdlib.h>
#define DIM 2

int main () {

int matrice [DIM] [DIM];
int x=0, y=0;
int vettore [DIM];
int v=0;
int j=0;

while (y<DIM)
{
    while (x<DIM)
    {
        printf("Quale valore vuoi inserire?\n");
        scanf("%d", &matrice [x] [y]);
        x++;

    }
x=0;
y++;
}

y=0;
x=0;

while (y<DIM)
{
    while (x<DIM)
    {
        printf("%d", matrice [x] [y]);
        printf("\t");
        x++;


    }
printf("\n");
x=0;
y++;
}

y=0;
x=0;
 
while (y<DIM)
{
    while (x<DIM)
    {
       matrice [x] [y] = matrice [x] [y] * -1;
        x++;

    }
x=0;
y++;
}

y=0;
x=0;

while (y<DIM)
{
    while (x<DIM)
    {
        printf("%d", matrice [x] [y]);
        printf("\t");
        x++;


    }
printf("\n");
x=0;
y++;
}

y=0;
x=0;

while (y<DIM)
{
    while (x<DIM)
    {
        if (matrice [x] [y] < 0)
        {
        
        }
            else {
                vettore[v] = matrice [x] [y];
                v++;
            }
        x++;
    }    
    x=0;
    y++;
}

while (j<v)
{
   printf("%d\t", vettore[j]);
   j++;
}

printf("\n");
return 0;
}











