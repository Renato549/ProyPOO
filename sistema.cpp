#include <iostream>   // para imprimir.

#include "Usuarios_v2.h" // bibliotecas con objetos de mi proyecto.

#include "Sistemav1.h"

using namespace std;
 string respuesta;
 string nombre;
 string id;
int main(){

  cout << "Bienvenido quiere agregar un Usuario?" << endl;
  cin >> respuesta;
  if(respuesta == "No")
    cout << "Gracias por entrar" << endl;
  else(respuesta == "Si")
    for(int i = 1; i < 3, i++){
      cout << "Que tipo de usuario desea agragar?" << endl;
      cin << respuesta;
      if(respuesta == "Profesor")
        cout << "Cual es su nombre?" << endl;
        cin >> nombre;
        cout << "¿Cual es su id?" << endl;
        Sistema.agregar_UProfesor(Nombre, id);
      else if(respuesta == "Alumno")
        cout << "Cual es su nombre?" << endl;
        cin >> nombre;
        cout << "¿Cual es su id?" << endl;
        Sistema.agregar_UAlumno(Nombre, id);
      cout << "Quiere agregar otro usuario?" << endl;
      cin >> respuesta;
      if(respuesta  == "no")
        cout << "Gracias por usarnos" << endl;
        cout << "Desea mostrar los usuarios?" << endl;
        cin >> respuesta;
        if (respuesta == "Si")
          cout << "Que tipo de usuarios quiere mostrar?" << endl;
          cin << respuesta ;
            if(respuesta == "Alumno")
              Sistema.mostrar_Usuarios(" Alumno ");
            else(respuesta == "Profesor")
              Sistema.mostrar_Usuarios(" Profesor ")
        i = 3
      else(respuesta == "si")
        i = 1
    }
  
}
