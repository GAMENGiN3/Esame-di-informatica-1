#include <stdio.h>
#include <stdlib.h>

int main() {
float v[10]= {0};
float somma;
float media;
int i;
i=0;
somma=0;

while (i<10)
{
 printf("Quale e' il numero da aggiungere per la media?");
 scanf("%f",&v[i]);
  i++;
}

i=0;

while (i<10)
{
  somma=somma+v[i];
  i++;
}

media=somma/10;

printf("il risultato della media e' di %f", media);

return 0;

}