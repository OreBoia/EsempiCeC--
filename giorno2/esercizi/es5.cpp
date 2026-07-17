#include <iostream>
using namespace std;

void calcola_statistiche(int a, int b, int c, int &somma, double &media) {
    somma = a + b + c;
    media = static_cast<double>(somma) / 3;
}

int main() {
    int x, y, z;
    int totale;
    double media;

    cout << "Inserisci tre numeri: ";
    cin >> x >> y >> z;

    calcola_statistiche(x, y, z, totale, media);

    cout << "Somma: " << totale << endl;
    cout << "Media: " << media << endl;

    return 0;
}