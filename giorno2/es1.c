#include <stdio.h>

int main(void) {
    int voto;

    printf("Inserisci il voto (0-100): ");
    scanf("%d", &voto);

    if (voto < 0 || voto > 100) {
        printf("Voto non valido\n");
    } else if (voto >= 90) {
        printf("A\n");
    } else if (voto >= 80) {
        printf("B\n");
    } else if (voto >= 70) {
        printf("C\n");
    } else if (voto >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}