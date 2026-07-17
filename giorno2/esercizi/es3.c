#include <stdio.h>

int e_primo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (e_primo(numero)) {
        printf("%d è primo\n", numero);
    } else {
        printf("%d non è primo\n", numero);
    }

    return 0;
}