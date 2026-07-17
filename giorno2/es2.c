#include <stdio.h>

int main(void) {
    int a, b;
    char operatore;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("Inserisci un operatore (+, -, *, /): ");
    scanf(" %c", &operatore);  // spazio prima di %c per saltare newline residui

    switch (operatore) {
        case '+':
            printf("Risultato: %d\n", a + b);
            break;
        case '-':
            printf("Risultato: %d\n", a - b);
            break;
        case '*':
            printf("Risultato: %d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Errore: divisione per zero\n");
            } else {
                printf("Risultato: %d\n", a / b);
            }
            break;
        default:
            printf("Operatore non valido\n");
    }

    return 0;
}