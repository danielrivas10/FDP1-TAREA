//Suma de Números Pares
//Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.

#include <iostream>
using namespace std;

int main() {
    int n, suma=1;

    cout << "Bienvenido usuario" << endl;
    cout << "Ingrese un numero a partir de 1" << endl;
cin >> n;

if (n<1 || n>100)
{
cout <<"Datos invalidos" << endl;

}

else (n % 2 == 0);
{

while(n % 2 == 0){
cout << "Puede seguir ingresando datos" << endl;
suma= suma+ n;
cin >> n;




}

}

cout <<"La sumatoria de sus numeros es" << suma << endl;

    return 0;
}



//5,7,2,4,13