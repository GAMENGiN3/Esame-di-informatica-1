#include <stdio.h>

int main() {

int Voto;

printf("Quale e' il voto?\n");
scanf("%d", &Voto);
if (Voto==30)
{
 printf("Promosso con 30/trentesimi\n bravo!!");
}
 else 
 {
 if (Voto>17)
 {
  printf("Promosso\n");
 }
  else
{
  printf("Bocciato attaccati\n");
  
}

    return 0;
 }
}
