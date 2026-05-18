// Suma de Números
// Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;

    cout << "Bienvenido usuario" << endl;
    cout << "Ingrese un numero" << endl;
    cin >> n;

    if (n == -1)
    {
        cout << "Fin del ciclo" << endl;
    }

    else (n!=0);
    {
        while (n!=-1){
        cout <<"Puede seguir ingresando datos" << endl;
        sum= sum + n;
        cin >> n;
    }

    }
cout << "La sumatoria total de sus numeros es" << sum << endl;

return 0;
}

//hecho