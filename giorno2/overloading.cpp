#include <iostream>

double area(double lato)
{
    return lato * lato;
}

double area(double altezza, double base)
{
    return base * altezza;
}

int main()
{
    std::cout << "Area quadrato (l = 5): " << area(5) << "\n";
    std::cout << "Area rettangolo (A=5, B=10): " << area(5, 10);
    return 0;
}