//Cuenta Regresiva
//Solicita un número y muestra una cuenta regresiva hasta 0.

#include <iostream>
using namespace std;
int main ()
{

int numero=0;

cout <<"Hola usuario, este programa ayuda a hacer cuentas regresivas" << endl;
cout <<"Ingresa un numero" << endl;
cin >> numero;

if (numero <0 || numero >100){
cout <<"Dato invalido" << endl;
}

else 
{

while (numero >=0){
cout <<"Su numero es: " << numero << endl;
numero--;
}

}

return 0;
}


//hecho










