#include <string>

#include <iostream>

#include <sstream>

#include "Usuarios_v2.h"

using namespace std;

const int Esp = 4;

class Sistema{

    private:
        Usuario * ap[Esp];
        int N_Us;
        
    public:

        Sistema():N_Us(0) {};
        void mostrar_Usuarios(string Clase); 
        void agregar_UProfesor(string nombre, int ID);
        void agregar_UAlumno(string nombre, int ID);
        void Imp_Horario(string Clase);
};



void Sistema::agregar_UProfesor(string nombre, int ID){
    ap[N_Us] = new Profesor(nombre, ID); 
    N_Us++;
}

void Sistema::agregar_UAlumno(string nombre, int ID){
    ap[N_Us] = new Profesor(nombre, ID); 
    N_Us++;
}

void Sistema::mostrar_Usuarios(string Clase){

    for(int a = 0; a < N_Us; a++){
        if(ap[a] -> get_Tipo() == Clase)
            ap[N_Us] -> Mostrar();
    }

}

void Sistema::Imp_Horario(string Clase){

    for(int a = 0; a < N_Us; a++){
        if(ap[a] -> get_Tipo() == Clase)
            ap[N_Us] -> Mostrar_H();
    }

}
