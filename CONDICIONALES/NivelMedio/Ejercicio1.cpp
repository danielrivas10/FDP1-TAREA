//Escribe un programa que pida la edad de una persona 
// Indique si es mayor o menor de edad (18 años o más es mayor de edad)

#include <iostream>
using namespace std;

int main ()
{

int edad;

cout << "Bienvenido al programa para detectar tu edad" << endl;
cout << "Por favor ingresa tu edad" << endl;
cin >> edad;

if (edad <0 || edad >100) 
// Ese signo significa "O".
{
cout << "Usted tiene : " << edad << ". Por lo que su edad no es valida" << endl ;

}

else if (edad <18)
{

cout << "Usted tiene :" << edad << ". Por lo que es menor de edad" << endl;

}

else {

cout << "Usted tiene :" << edad << ". Por lo que es mayor de edad" << endl;

}


return 0;

}


