// Calificación Aprobatoria. Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).

#include <iostream>
using namespace std;

int main()
{

int nota;

cout << "Bienvenido al día decisivo. Ahora conocerás si tu esfuerzo fue suficiente para pasar la materia de FDP1 o no. Mucha suerte" << endl;
cout << "Ingresa tu nota " << endl;
cin >> nota; 

if (nota <0 || nota > 100 ) 
{

cout << "Su nota es: " << nota << ". Por lo que no es valida" << endl;

}

else if (nota <60)
{
cout << "Su nota es:" << nota << ". Por lo que lamentablemente ha reprobado" << endl; 


}

else 
{
cout << "Su nota es:" << nota << ". Felicidades. Ha aprobado" << endl;

}






return 0;


}