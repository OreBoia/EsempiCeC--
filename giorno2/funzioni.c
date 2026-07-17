#include <stdio.h>

int somma(int a, int b){
    return a + b;
} 

double area_cerchio(double r){
    return 3.14 * r * r;
}

void saluta(){
    printf("Benvenuto nel mio programma\n");
}

// int saluta(){ return 0;}

int main(){

    saluta();

    int s = somma(3, 12);
    printf("\n%d", s);
    s = somma(2,6);
    printf("\n%d", s);
    s = somma(45, 567);
    printf("\n%d", s);

    printf("\nArea cerchio 1 %.2f", area_cerchio(10));
    printf("\nArea cerchio 2 %.2f", area_cerchio(12));
    printf("\nArea cerchio 3 %.2f", area_cerchio(345));
    return 0;
}



