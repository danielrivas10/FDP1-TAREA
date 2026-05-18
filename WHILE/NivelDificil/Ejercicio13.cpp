// Serie de Fibonacci
// Muestra los primeros N términos de la serie de Fibonacci utilizando while.

#include <iostream>
using namespace std;
int main()
{

    int secuencia = 0, x = 1, siguiente; // Ayudará a guardar los datos de las dos variables

    cout << "Hola usuario" << endl;
    cout << "Este codigo es para mostrar una secuencia de numeros llamada: Serie de fibonacci" << endl;

    while (secuencia <= 50)
    {

        cout << secuencia << endl;

        siguiente = secuencia + x;
        secuencia = x;
        x = siguiente;
    }

    return 0;
}

// Hecho