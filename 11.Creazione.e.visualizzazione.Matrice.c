#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrice [100] [100];
    int j;
    int i;
    int colonne;
    int righe;


    printf("Quanto vuoi grande la matrice in lunghezza?\n");
    scanf("%d", &colonne);
    printf("Quanto vuoi grande la matrice in larghezza?\n");
    scanf("%d", &righe);

    for (i = 0; i<colonne; i++)
    {
       for (j = 0; j < righe; j++)
       {
        printf("Quale valore vuoi inserire?\n");
        scanf("%d",&matrice [j] [i]);
       }
       
    }
    
    printf("Questa e' la matrice\n");

    for (i = 0; i < colonne; i++)
    {
        printf("\n");
        for (j = 0; j < righe; j++)
        {
         printf("%d\t", matrice [j] [i]);
        }
        
    }
    
    printf("\n");
  return 0;  
}