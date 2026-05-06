//Conversión de Monedas
//Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) y realiza la conversión.


#include <iostream>
using namespace std;

int main ()
{

int opcion;
float resultado, monto;

cout << "Bienvenido a la calculadora que convierte monedas" << endl;
cout << "Ingresa el tipo de conversion que gustas realizar" <<endl;
cout <<"1. USD a EUR" << endl;
cout <<"2. USD a JPY" << endl;
cout <<"3. USD a GBP" << endl;
cin >> opcion;
if (opcion < 1 || opcion > 3)
{

    cout << "Dato incorrecto" << endl;

}

else {

cout << "Ingrese el monto a convertir" << endl;




cin >> monto;
switch (opcion)

{


case 1:
cout << "Usted tiene el monto de: " << monto << " en USD" << endl;
resultado= monto * 0.86;
cout << "Su resultado es:" << resultado <<" en EUR"<< endl;
break;

case 2:
cout << "Usted tiene el monto de: " << monto << " en USD" << endl;
resultado= monto * 150;
cout << "Su resultado es:" << resultado  <<" en JPY"<< endl;
break;

case 3:
cout << "Usted tiene el monto de: " << monto << "en USD" << endl;
resultado= monto * 0.78;
cout << "Su resultado es: " << resultado  <<" en GBP"<< endl;
break;

default:
cout <<"Por favor ingrese una moneda valida" << endl;

break;


}

    return 0;
}

}



//Hecho