#include <stdio.h>

int main() {
    float a, b, totale;
    int operando;
    totale=0;
    operando=1;
    a=0;
    b=0;


    while (1) {  // Ciclo infinito, usciamo solo quando operando è 0
        printf("\nQuale operazione vuoi utilizzare?\n");
        printf("-----------------------------------\n");
        printf("2) Somma\n");
        printf("3) Sottrazione\n");
        printf("4) Moltiplicazione\n");
        printf("5) Divisione\n");
        printf("0) Chiudi\n");
        printf("-----------------------------------\n");
        printf("Scelta: ");
        scanf("%d", &operando);

        if (operando == 0) {
            printf("Chiusura del programma.\n");
            break;  // Esce dal ciclo
        }

        if (operando < 2 || operando > 5) {
            printf("Scelta non valida. Riprova.\n");
            continue;  // Ripete il ciclo senza fare altro
        }

        printf("Inserisci il primo numero: ");
        scanf("%f", &a);
        printf("Inserisci il secondo numero: ");
        scanf("%f", &b);

        switch (operando) {
            case 2:
                totale = a + b;
                break;
            case 3:
                totale = a - b;
                break;
            case 4:
                totale = a * b;
                break;
            case 5:
                if (b == 0) {
                    printf("Errore: divisione per zero non consentita.\n");
                    continue;
                }
                totale = a / b;
                break;
        }

        printf("Il risultato e': %f\n\n", totale);
    }

    return 0;
}
