//Clasificación de Películas por Edad
// Pide la edad de un usuario y usa switch para recomendar una categoría de películas 
//(G - Para todo público)
//PG- Parte del contenido puede no ser apta para niños 
// PG-13, para mayores de 13 años
// R, menores de 17 años requieren compañia de adultos


#include <iostream>
using namespace std;
#include <windows.h>

int main ()
{
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int edad;

cout << "Bienvenido a la clasificación de películas por Edad" << endl;
cout << "Escriba su edad" << endl;
cin >> edad;

if (edad <=0 || edad>= 105){
cout <<"Sus datos son invalidos" << endl;


}
else if (edad >= 2 && edad <13){
cout <<"Tú solo puedes ver las categorias P y G con supervisión" << endl;


}

else if (edad >= 13 && edad <=17){

switch (edad)
{
case 13:
case 14:
case 15:
case 16:
case 17:
cout <<"Te recomendariamos ver la categoria PG-13, PG (acompañado de un adulto),  R (acompañado de un adulto) y G" << endl;
break;


}


}

else {
cout <<"Puedes ver cualquier categoria" << endl;

}










return 0;
    }



    //HECHO