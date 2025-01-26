#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main() {
int a;
a=0;
srand(time(NULL));
int r;


printf("Premere 1 se si vuole una generazione illimitata premere qualsiasi altro numero per uscire\n");
scanf("%d", &a);
r= rand() % 100 + 1;
if (a==1)
{
    while (a==1)
    {
        r= rand() % 100 + 1;
         printf("%d",r); 
    }
}
else return 0;
}