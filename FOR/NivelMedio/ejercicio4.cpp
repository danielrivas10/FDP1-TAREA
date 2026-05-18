// Tabla de Multiplicar
// Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

#include <iostream>
using namespace std;
int main()
{

    int numero = 1, resultado = 0;

    cout << "Bienvenido usuario" << endl;
    cout << "Este programa ayudara a mostrar la tabla de multiplicar del 1-10" << endl;
    cout << "Ingresa tu numero" << endl;
    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {

        int resultado = i * numero;


        cout << "10 * " << i << " = "<< resultado << endl;
    }



    return 0;
}


// HECHO