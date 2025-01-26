#include <stdio.h>

int main () {

float a;
float b;
int operando;
float totale;
totale=0;
operando=1;
a=0;
b=0;





while (operando>=1)
{

  printf("quale operando vuoi utilizare?\n");
printf("-----------------------------------\n");
printf("1) somma\n");
printf("2) sottrazione\n");
printf("3) moltiplicazione\n");
printf("4) divisione\n");
printf("5) chiudi\n");
printf("-----------------------------------\n");
printf("Scelta: ");
scanf("%d", &operando);

   if (operando==1)
   {
      printf("quale e' il primo numero che vuoi utilizare?\n");
   scanf("%f", &a);
   printf("quale e' il secondo numero che vuoi utilizare?\n");
   scanf("%f", &b);
   totale=a+b;
   printf("Il valore ottenuto e' %f\n \n", totale);
   }
   else if (operando==2)
   {
      printf("quale e' il primo numero che vuoi utilizare?\n");
   scanf("%f", &a);
   printf("quale e' il secondo numero che vuoi utilizare?\n");
   scanf("%f", &b);
   totale=a-b;
   printf("Il valore ottenuto e' %f\n \n", totale);
   }
   else if (operando==3)
   {
      printf("quale e' il primo numero che vuoi utilizare?\n");
   scanf("%f", &a);
   printf("quale e' il secondo numero che vuoi utilizare?\n");
   scanf("%f", &b);
   totale=a*b;   
   printf("Il valore ottenuto e' %f\n \n", totale);
   }
   else if (operando==4)
   {
      printf("quale e' il primo numero che vuoi utilizare?\n");
   scanf("%f", &a);
   printf("quale e' il secondo numero che vuoi utilizare?\n");
   scanf("%f", &b);
     totale=a/b;
     printf("Il valore ottenuto e' %f\n \n", totale);
   }
   else if (operando==5)
   {
   printf("Arrivederci!! \n");
   return 0;
   }
   else if (operando>5)
   {
    printf("Selezione non valida\n");
   }
   

totale=0;
operando=1;
a=0;
b=0;
};


return 0;

}