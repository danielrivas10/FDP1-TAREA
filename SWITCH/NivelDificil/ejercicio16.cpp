// Horario de Clases
// Pide el día de la semana y muestra el horario de clases para ese día.

#include <iostream>
using namespace std;


int main()
{

    

    int dia;

    cout << "Buen día usuario" << "Este programa es de ayuda para recordar su horario de clases" << endl;
    cout << "Podrías por favor seleccionar el día de la semana que te corrresponde" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;
    cin >> dia;




switch(dia) {


case 1: 
cout << "Tu horario es:" << endl;
cout << "Precálculo 7:00 AM:" << endl;
cout << "Lenguaje 9:00 AM:" << endl;
cout << "Historia 11:00 AM:" << endl;

break;

case 2: 
cout << "Tu horario es:" << endl;
cout << "Sociales 7:00 AM:" << endl;
cout << "Fisica 9:00 AM:" << endl;
cout << "Historia 11:00 AM:" << endl;

break;

case 3: 
cout << "Tu horario es:" << endl;
cout << "Precálculo 7:00 AM:" << endl;
cout << "Lenguaje 9:00 AM:" << endl;
cout << "Historia 11:00 AM:" << endl;

break;

case 4: 
cout << "Tu horario es:" << endl;
cout << "Precálculo 7:00 AM:" << endl;
cout << "Lenguaje 9:00 AM:" << endl;
cout << "Quimica 11:00 AM:" << endl;

break;

case 5: 
cout << "Tu horario es:" << endl;
cout << "Precálculo 7:00 AM:" << endl;
cout << "Lenguaje 9:00 AM:" << endl;
cout << "Historia 11:00 AM:" << endl;

break;

case 6: 
cout << "Tu horario es:" << endl;
cout << "Ingles 7:00 AM:" << endl;
cout << "Programación 9:00 AM:" << endl;

break;

case 7: 
cout << "Este día descansas" << endl;

break;

default:
cout <<"Por favor ingrese un numero del 1-7" << endl;

break;




    
}

return 0;

}

//Hecho