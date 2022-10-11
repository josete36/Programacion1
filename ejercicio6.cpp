#include <iostream>

using namespace std;

int main()
{
    float nota;

    cout << "Introduce la nota del alumno: ";
    cin >> nota;

    while(nota < 0.0 || nota > 10.0)
    {
        cout << "Nota no valida, introduce de nuevo la nota del alumno: ";
        cin >> nota;
    }
    if(nota >= 0.0 && nota < 5.0 )
        cout << "SUSPENSO" << endl;
    else if(nota >= 5.0 && nota < 6.0)
        cout << "APROBADO" << endl;
    else if(nota >= 6.0 && nota < 7.0)
        cout << "BIEN" << endl;
    else if(nota >= 7.0 && nota < 9.0)
        cout << "NOTABLE" << endl;
    else if(nota >= 9.0 && nota < 10.0)
        cout << "SOBRESALIENTE" << endl;
    else if(nota == 10.0)
        cout << "MATRICULA DE HONOR" << endl;
    return 0;
}