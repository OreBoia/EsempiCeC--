#include <stdio.h>

int main()
{
    int maxAnni = 100, minAnni = 1, maggiorenne = 18, semiMaggiorenne = 16;

    int anni = 16;

    printf("inserisci la tua eta: ");
    scanf("%d", &anni);
    
    //ESEMPIO if-else
    // if (anni >= 18) //produce un risultato booleano (true/false) //se questa condizione è vera
    // {
    //     printf("Sei Maggiorenne"); //Esegui se la condizione nel if è vera
    // }
    // else //altrimenti (se la condizione nel if è false)
    // {
    //     printf("Sei Minorenne"); //esegui questo codice
    // }   

    //ESEMPIO if-elseif-else e AND (&&) e OR (||)
    if(anni > maxAnni || anni < minAnni)
    {
        printf("valore non valido");
    }
    else if(anni >= maggiorenne/*  && anni < 100 */) //la condizione è vera solo se anni è maggiore o uguale di 18 "E"(and/&&) minore di 100
    {
        // if(anni > 100)
        // {
        //     printf("valore non valido. superiore a 100")
        // }
        // else
        // {
        //     printf("sei Maggiorenne");
        // }
        printf("sei Maggiorenne");
    }
    else if(anni >= semiMaggiorenne /* && anni < 100 */)
    {
        printf("Non sei maggiorenne, ma puoi guidare un motorino");
    }
    else if (anni >= minAnni /* && anni < 100 */)
    {
        printf("sei Minorenne");
    }
    else
    {
        if(anni >= maxAnni){
            printf("Valore maggiore di 100. Non Valido");
        }
        else if(anni <= minAnni){

            printf("Valore minore di 1. Non valido");
        }
    }
}