//Comparación de Números, pide dos números e indica cuál es mayor, cuál es menor o si son iguales.

#include <iostream>
using namespace std;
int main ()

{

int x,y;

cout << "En este programa se evaluará si los números son mayores, menores o iguales comparados entre ellos." << endl;
cout << "Por favor ingresa número x" << endl ;
cin >> x;

cout << "Por favor ingresa número y" << endl;
cin >> y;

if (x<y)
{
cout << "El número: " << y << "es mayor" << endl; 


}

else if (x>y)

{
cout << "El número: "<< x << " es mayor" << endl; 



}

else 
{
cout << "Los números son iguales" << endl;


}



return 0;


}