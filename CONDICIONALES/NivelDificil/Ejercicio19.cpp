//Tarifa de Luz Eléctrica. 
//Calcula la tarifa según el consumo: 
//menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>
using namespace std;

int main (){

int tarifa;

cout << "Bienvenido a la prueba de sus Kwh consumidos mensualmente" << endl;
cout << "Por favor podría ingresar su tarifa de kwh" << endl;
cin >> tarifa;


if (tarifa <0)
{
cout << "Sus Kwh consumidos mensualmente son:" << tarifa << endl;
cout << "Sus datos son invalidos y no existen" << endl;



}

else if (tarifa >=0 && tarifa <100)
{
cout << "Sus Kwh consumidos mensualmente son:" << tarifa << endl;
cout << "El porcentaje de su tarifa es bajo " << endl;



}


else if (tarifa >=100 && tarifa <=200)
{
cout << "Sus Kwh consumidos mensualmente son:" << tarifa << endl;
cout << "El porcentaje de su tarifa es media " << endl;



}

else 

{
cout << "Sus Kwh consumidos mensualmente son:" << tarifa << endl;
cout << "El porcentaje de su tarifa es alta " << endl;



}

//hecho











return 0;
}

