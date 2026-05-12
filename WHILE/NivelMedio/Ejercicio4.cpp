// Menú Interactivo
// Crea un menú que se repita hasta que el usuario elija la opción de salir.

#include <iostream>
using namespace std;

int main()
{

    int opcion;
    do
    {
        cout << "Bienvenido usuario" << endl;
        cout << "Elige una opción de nuestro menu de deportes" << endl;
        cout << "1.Futbol" << endl;
        cout << "2.Basketball" << endl;
        cout << "3.Tenis" << endl;
        cout << "4.Ajedrez" << endl;
        cout << "5.Salir" << endl;
        cin >> opcion;

        switch (opcion){

        case 1:
        
            cout << "Tu opcion es el futbol :)" << endl;

            break;

        case 2:

            cout << "Tu opcion es el basketball :)" << endl;
            break;

        case 3:

            cout << "Tu opcion es el tenis :) " << endl;
            break;
        case 4:

            cout << "Tu opcion es el ajedrez :) " << endl;
            break;
        
        case 5:

            cout << "Tu opcion es salir :( ..." << endl;
            cout << "Saliste del menu" << endl;
            break;

        default:
            cout << "Datos no validos" << endl;
        }
    }

    while (opcion !=5);

    return 0;
}


//Hecho