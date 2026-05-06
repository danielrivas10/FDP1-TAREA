// Doble Verificación de Datos. Pide dos contraseñas y verifica si coinciden antes de continuar.

#include <iostream>
using namespace std;

int main()
{

string contrasena1, contrasena2;

string contrasenaCorrecta1= "Daniel";
string contrasenaCorrecta2= "Daniel";


cout << "Buenos días usuario" <<  endl;
cout << "Ingrese su contrasena" << endl;
cin >> contrasena1;

cout << "Por motivos de seguridad, por favor ingrese nuevamente su contrasena" << endl;
cin >> contrasena2;

if (contrasena1==contrasena2)
{

cout << "Su contrasena es:" << contrasena1 << endl;
cout << "Verificando..." << "accediendo al sistema..." << "Ha ingresado" << endl;

}

else 
{

cout << "Sus datos son incorrectos " << endl;











}



    return 0;

    }

//hecho