//Cálculo de Potencia
//Pide dos números base y exponente, y calcula base^exponente sin usar la función pow().


#include <iostream>
using namespace std;
int main()
{

    int numero = 0, numero2=0;

    cout << "Bienvenido usuario" << endl;
    cout << "Este programa ayudara a calcular base^exponente" << endl;
    cout << "Ingresa tu primer numero" << endl;
    cin >> numero;
    cout << "Ingresa tu segundo numero" << endl;
    cin >> numero2;

    for (int i = 1; i <= 10; i++)
    {

        int resultado = i * numero;


        cout << "10 * " << i << " = "<< resultado << endl;
    }



    return 0;
}
