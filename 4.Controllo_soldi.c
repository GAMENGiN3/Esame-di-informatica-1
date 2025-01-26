#include <stdio.h>
#include <math.h>

int main () {

float Somma; 
float Totale;
float Soldi;
int Persone;
float Mancano;
float Differenza;
Differenza=0;
Mancano=0;
Persone=0;
Soldi=0;
Totale=0;

printf("Quale e' il valore da raggiungere?\n");
scanf("%f", &Somma);

do
{
Mancano=Somma-Totale;    
printf("Quanti soldi vuoi agigungere mancano %.2f, il totale e' di\n %.2f Euro\n con %d Persona/e\n",Mancano, Totale, Persone);
scanf("%f", &Soldi);

Totale=Totale+Soldi;
Persone++;

} while (Somma>=Totale);

Differenza=Totale-Somma;
if (Differenza>Somma)
{
   printf("Il totale e' stato taggiunto con un totale di\n %.2f Euro soforando di %.2f Euro\n con %d Persona/e", Totale,Differenza, Persone); 
}
else {
printf("Il totale e' stato taggiunto con un totale di\n %.2f Euro\n con %d Persona/e", Totale, Persone);
}
return 0;
}