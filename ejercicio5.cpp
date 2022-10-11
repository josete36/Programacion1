#include <iostream>

using namespace std;

int main()
{
    float lado1, lado2, lado3, cateto1, cateto2, hipotenusa;

    cout << "Introduzca las medidas de los lados de un triangulo: " << endl;
    cout << "lado 1: ";
    cin >> lado1;
    cout << "lado 2: ";
    cin >> lado2;
    cout << "lado 3: ";
    cin >> lado3;

    if(lado1 == lado2 && lado1 == lado3)
        cout << "El triangulo es Equilatero" << endl;
    else
    {
        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            cout << "El triangulo es Isóceles "  << endl;
        else
            cout << "El triangulo es Escaleno, ningun lado es igual" << endl;
    }
    cout << "¿ES TRIANGULO RECTANGULO? " << endl;
    if(lado1 > lado2)
    {
        cateto1 = lado2;
        if(lado1 > lado3)
        {
            cateto2 = lado3;
            hipotenusa = lado1;
        }
        else
        {
            cateto2 = lado1;
            hipotenusa = lado3;
        }
    }
    else
    {
        cateto1 = lado1;
        if(lado2 > lado3)
        {
            cateto2 = lado3;
            hipotenusa = lado2;
        }
        else
        {
            cateto2 = lado2;
            hipotenusa = lado3;
        }
    }
    if((cateto1 * cateto1) + (cateto2 * cateto2) == hipotenusa * hipotenusa)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;
    return 0;
}