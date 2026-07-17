#include <iostream>

void incrementa(int& a){
    a++;
}

int main()
{
    int n = 0;
    incrementa(n);
    std::cout << "n = " << n << "\n";
}