// Año Bisiesto
// Pide un año y determina si es bisiesto.

#include <iostream>
using namespace std;

int main()
{

    int anio;

    cout << "Bienvenido usuario, este programa ayudará a que puedas determinar si un anio es bisiesto" << endl;
    cout << "Ingresa el anio" << endl;
    cin >> anio;

if (anio < 0){
cout << "Dato invalido" << endl;


}
else if (anio % 4 == 0 && anio % 100 !=0 || anio % 400 == 0){

cout <<"El anio es bisiesto" << endl;

}

else 
{
cout << "El anio no es bisiesto" << endl;


}

    return 0;
}

// Hecho