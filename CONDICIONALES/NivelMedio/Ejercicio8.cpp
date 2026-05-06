//Verificación de Usuario y Contraseña. Simula la verificación de un usuario y contraseña predefinidos.

#include <iostream>
using namespace std;

int main ()
{

string usuario, contrasena;

string usuarioCorrecto = "DanielRivas" ;
string contrasenaCorrecta = "KeeleyAquino" ;


cout << "Por favor ingrese su usuario" << endl;
cin >> usuario;
cout << "Por favor ingrese su contrasena" << endl;
cin >> contrasena;


if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta)
{

cout << "Su usuario es: " << usuario << ". Dato correcto" << endl;
cout << "Su contrasena es: " << contrasena << ". Dato correcto" << endl;
cout << "Accediendo al sistema..." << endl ; 
}

else {

cout << "Sus datos son incorrectos. Lo lamento" << endl;


}




return 0;



}