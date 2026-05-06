// Sistema de Transporte Público
// Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.

#include <iostream>
using namespace std;

int main()
{

    int transporte;

    cout << "Buen día usuario" << "Este programa es de ayuda para ayudarle a elegir transporte" << endl;
    cout << "Podrías por favor seleccionar su transporte" << endl;
    cout << "1. Bus" << endl;
    cout << "2. Metro" << endl;
    cout << "3. Taxi" << endl;
    cin >> transporte;

    switch (transporte)
    {

    case 1:
        cout << "Tu transporte es un bus:" << endl;
        cout << "Debe pagar 0.35 centavos" << endl;

        break;

    case 2:
        cout << "Tu transporte es el metro:" << endl;
        cout << "Debe pagar 5 dolares" << endl;

        break;

    case 3:
        cout << "Tu transporte es un taxi:" << endl;
        cout << "Debe pagar 10 dolares" << endl;

        break;

    default:
        cout << "Por favor ingrese un numero del 1 al 3" << endl;

        break;
    }

    return 0;
}