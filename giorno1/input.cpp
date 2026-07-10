#include <iostream>

int main()
{
    int anni = 0;
    double altezza = 1.75;
    bool studente = true;
    //Qui possiamo subito dichiare il tipo stringa
    std::string nome = "Maria";

    //stampa una scritta
    std::cout << "quanti anni hai? ";
    //prende un input da tastiera dall'utente
    std::cin >> anni;
    std::cout   << "Adesso hai " << anni 
                <<", tra 10 anni avrai " << anni + 10
                <<"\n";
    std::cout << "nome: " << nome << "\n";
    std::cout <<"altezza: " << altezza << "\n";
    //std::boolalpha cambia l'output dei bool da 0/1 a true/false
    std::cout <<"studente? " << std::boolalpha << studente << "\n";

    return 0;
}