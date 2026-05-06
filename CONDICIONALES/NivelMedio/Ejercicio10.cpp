// Calculadora de Tarifa de Envío. Pide el peso de un paquete.
// Cobra $5 si pesa hasta 5kg
//$10 si pesa entre 6kg y 10kg
//$15 si pesa más de 10kg.

#include <iostream>
using namespace std;

int main()
{

    float peso;
    int billetera = 500;

    cout << "¿Cual es el peso del paquete?" << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)

    {
        int cobro = billetera - 5;
        cout << "Su cobro de 5$ se realizo correctamente, ahora su dinero en billetera es de: " << cobro << endl;
    }

    else if (peso > 5 && peso <= 10)

    {
        int cobro = billetera - 10;
        cout << "Su cobro de 10$ se realizo correctamente, ahora su dinero en billetera es de: " << cobro << endl;
    }

    else if (peso > 10)
        
    {
        int cobro = billetera - 15;

        cout << "Su cobro de 15$ se realizo correctamente, ahora su dinero en billetera es de: " << cobro << endl;
    }

    else {
        cout << "Sus datos son incorrectos" << endl;

    }

    return 0;
}