#include <iostream>

void saluta(std::string nome = "ospite"){
    std::cout<< "Ciao, "<< nome << "\n";
}

int somma(int a = 0, int b = 0){
    return a + b;
}

int main()
{
    saluta();
    std::cout << somma();
    return 0;
}