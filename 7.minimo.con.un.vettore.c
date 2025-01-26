#include <stdio.h>
#include <stdlib.h>


int main() {

int v[10]= {0};
int a;
int b;
int i;
i=0;

while (i<10)
{
printf("Quali sono i valori\n");
scanf("%d",&v[i]);
i++;
}

i=0;
a=v[0];

while (i<10)
{
  if (v[i]<a)
  {
  a=v[i];
  }
  i++;
}


i=0;
b=v[0];

while (i<10)
{
  if (v[i]>b)
  {
  b=v[i];
  }
  i++;
}

printf("il numero minimo e' %d\n", a);
printf("il numero massimo e' %d\n", b);
return 0;


}