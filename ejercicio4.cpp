#include <iostream>

using namespace std;

int main()
{
    int lado1, lado2, lado3;

    cout << "Introduzca las medidas de los lados de un triangulo: " << endl;
    cout << "lado 1: ";
    cin >> lado1;
    cout << "lado 2: ";
    cin >> lado2;
    cout << "lado 3: ";
    cin >> lado3;

    if(lado1 == lado2 && lado1 == lado3)
        cout << "el triangulo es Equilatero" << endl;
    else
    {
        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            cout << "el triangulo es Isóceles "  << endl;
        else
            cout << "el triangulo es Escaleno, ningun lado es igual" << endl;
    }
    return 0;
}