// Cálculo de Impuestos
//  Solicita el salario de un trabajador y muestra el porcentaje de impuestos a pagar según su rango de ingresos.

#include <iostream>
using namespace std;
#include <windows.h>

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int salario, opcion = 0;

    // int rango = salario / 1000;
    cout << "Buen día" << "Por favor ingrese su salario" << endl;
    cout << "En base a su salario se mostrará su porcentaje de impuestos a pagar" << endl;
    cout << "Por favor ingrese su salario" << endl;
    cin >> salario;

    if (salario > 0 && salario < 1000)
    {
        opcion = 1;
    }

    else if (salario > 1000 && salario < 2000)
    {

        opcion = 2;
    }

    else if (salario > 2000 && salario < 3000)
    {

        opcion = 3;
    }

    else if (salario > 3000 && salario < 4000)
    {

        opcion = 4;
    }

    switch (opcion)
    {
    case 1:

        cout << "Su salario es de: " << salario << "Por lo que su porcentaje de impuestos a pagar es de 0% " << endl;

        break;

    case 2:

        cout << "Su salario es de: " << salario << "Por lo que su porcentaje de impuestos a pagar es de 10% " << endl;

        break;

    case 3:

        cout << "Su salario es de: " << salario << "Por lo que su porcentaje de impuestos a pagar es de 20% " << endl;

        break;

    case 4:

        cout << "Su salario es de: " << salario << "Por lo que su porcentaje de impuestos a pagar es de 30% " << endl;

    default:
        cout << "Su salario es invalido" << endl;

        break;
    }

    return 0;
}
