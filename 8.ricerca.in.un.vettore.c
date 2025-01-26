#include <stdio.h>
#include <stdlib.h>

#define VETTORE 10
int main() {

int v[VETTORE];
int i;
int a;
int b;
i=0;

while (i<VETTORE)
{
printf("Quale e' il nuemro?\n");
scanf("%d", &v[i]);
i++;
}

printf("Quale e' il numero da cercare?\t");
scanf("%d", &a);

i=0;
b=0;
while (i<VETTORE)
{
  if (a==v[i])
  {
    b++;
  }
i++;
}

if (b>0)
{
printf("il numero e' stato trovato %d volte", b);
}
else {
printf("il numero non e' stato trovato");
}
return 0;


}