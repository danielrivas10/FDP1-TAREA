//Conversión de Unidades de Longitud
//Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversión.

#include <iostream>
using namespace std;

int main(){

 int opcion, eleccion; 
 double resultado;  

cout << "Bienvenido usuario, este es el menu de conversiones"<< endl;
cout << "1. cm a pulgadas"<< endl;
cout << "2. metros a pies"<< endl;
cout << "3. km a millas"<< endl;
cout << "Ingresa tu elección" << endl;
cin >> eleccion;
cout << "ingresa tu valor de unidad" << endl;
cin >> opcion;



switch (eleccion){

case 1: 
cout << "Tus unidades de cm son " << opcion << endl;
 resultado= opcion/ 2.54;
cout << "Cambiandolo a pulgadas da como resultado= " << resultado << endl;
break;

case 2: 
cout << "Tus unidades en metro son " << opcion << endl;
 resultado= opcion * 3.2808399;
cout << "Cambiandolo a pies da como resultado= " << resultado << endl;
break;

case 3: 
cout << "Tus unidades en km son " << opcion << endl;
resultado= opcion * 0.621371;
cout << "Cambiandolo a millas da como resultado= " << resultado << endl;
break;

default:
cout << "Por favor ingrese un valor entre 1-3" << endl;



}






return 0;

}


//hecho