#include <stdio.h>

int main()
{
    int giorno = 1;

    printf("Inserisci giorno (1-7): ");
    scanf("%d", &giorno);

    switch(giorno){
        case 1: //if (giorno == 1)
            printf("\nLunedi");
            break;
        case 2: //else if(giorno == 2)
            printf("\nMartedi");
            break;
        case 3: //else if(giorno == 3)
            printf("\nMercoledi");
            break;
        case 4:
            printf("\nGiovedi");
            break;
        case 5:
            printf("\nVenerdi");
            break;
        case 6:
            printf("\nSabato");
            break;
        case 7:
            printf("\nDomenica");
            break;
        default:// else
            printf("Non gestito");
    }
}