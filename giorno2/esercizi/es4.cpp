#include <iostream>
#include <string>
using namespace std;

void saluta(string nome, string titolo = "Sig.") {
    cout << "Buongiorno, " << titolo << " " << nome << "!" << endl;
}

void saluta(string nome, int eta) {
    cout << "Ciao " << nome << ", hai " << eta << " anni!" << endl;
}

int main() {
    saluta("Rossi");              // usa il default "Sig."
    saluta("Bianchi", "Dott.");   // titolo esplicito
    saluta("Marco", 25);          // overload con int

    return 0;
}