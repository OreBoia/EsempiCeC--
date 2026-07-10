#include <stdio.h>
int main(){
    //Dichiarazione variabile
    //Tipo di dato : int
    //Nome della variabile: anni
    //(non sempre obbligatorio) valore di inizializzazione
    int anni = 0;
    float altezza = 1.75;
    char iniziale = 'M';

    //Stampa una scritta nel terminale
    printf("quanti anni hai? ");
    
    //Prende una frase in input dall'utente
    //&anni serve a dire, salva l'input in anni
    //%d è per indicare un intero (int)
    scanf("%d", &anni);
    // scanf("%f", &altezza);
    // scanf("%c", &iniziale);

    //%d indica le possizioni nella stringa che devono essere sostituiti
    //da un intero (anni, anni+10,...,...,...,...)
    //basta inserire i valori in maniera ordinata rispetto ai %d
    printf("adesso hai %d, tra 10 anni: %d\n", anni, anni + 10);
    printf("altezza: %.2f\n", altezza);
    printf("iniziale: %c\n", iniziale);

    return 0;
}