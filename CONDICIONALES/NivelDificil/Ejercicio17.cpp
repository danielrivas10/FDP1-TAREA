// Precio de Entrada a un Parque. 
// Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.

#include <iostream> 
using namespace std;

int main ()
{

int edad;

cout << "Bienvenido a nuestro parque infantil" << endl;
cout << "Podria brindarme su edad por favor" << endl;
cin >> edad;

if (edad<0)

{
    cout << "Usted tiene:" << edad << "años, siendo un error" << endl;
}

else if (edad >=0 && edad <5)
{

    cout << "Usted tiene:" << edad << "años, por lo que sue entrada es gratis" << endl; 

}

else if (edad >=5 && edad <12)

{
int billetera=150;
int pago= billetera - 5;


    cout << "Usted tiene:" << edad << "años, por lo que debe pagar 5$ dolares" << endl; 
    cout << "De sus 150 dolares en billetera, ahora tiene:" << pago << endl;

} 

else 

{
int billetera=150;
int pago= billetera - 10;


    cout << "Usted tiene:" << edad << "años, por lo que debe pagar 10$ dolares" << endl; 
    cout << "De sus 150 dolares en billetera, ahora tiene:" << pago << endl;

} 










return 0;

}

//Hecho