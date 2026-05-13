//Sistema de Calificación de Conducción
//(Un programa debe calificar el estado de un conductor según su edad, número de infracciones y años de experiencia.

#include <iostream>
using namespace std;

int main()
{

int edad, infracciones, experiencia; 
bool tieneLicencia;


cout <<"Hola, bienvenido al test del buen conductor" << endl;
cout << "Por favor introduzca su edad" << endl;
cin >> edad;

cout << "Si es tan amable introduzca su número de infracciones" << endl;
cin >> infracciones;

cout << "Digame sus años de experiencia" << endl;
cin >> experiencia;


cout << "Digame si tiene licencia: (1=si, 0=no)" << endl;
cin >> tieneLicencia;


if (edad <0 || infracciones <0 || experiencia <0)

{

cout << "Datos incorrectos " << endl;

}


else if (edad < 18 ) {
        cout << "Edad: " << edad << endl;
    
        if (!tieneLicencia) {
            cout << "Menor sin licencia: ilegal" << endl;
        } else {
            cout << "Menor con licencia: permiso especial requerido" << endl;
        }

        cout << "Conductor inexperto" << endl;

    

    }



else if (!tieneLicencia) {
    cout << "Sin licencia: ilegal" << endl;
        } 
        

else if (edad >= 18 && edad <= 80 && infracciones == 0 && experiencia >= 1) {
        cout << "Buen conductor" << endl;
    }

else if (infracciones>0 && infracciones <=3){
    cout << "Conductor común" << endl;



}

else if (infracciones >3)
    cout << "Conductor peligroso" << endl;


else if (experiencia<=0)
cout << "Principiante" << endl;



return 0;

}