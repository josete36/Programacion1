#include <iostream>

using namespace std;

const float PI = 3.14159;

int main ()
{
    float grados, min, seg, grados_reales, radianes;

    cout << "Introduce grados: ";
    cin >> grados;
    cout << "introduce minutos: ";
    cin >> min;
    cout << "Introduce segundos: ";
    cin >> seg;

    grados_reales = grados + (min / 60.0) + (seg / 3600.0);
    radianes = (grados_reales * PI) / 180;

    cout << "Los grados reales son: " << grados_reales << " grados ";
    cout << "que equivalen a: " << radianes << " radianes" << endl;

    return 0;
}