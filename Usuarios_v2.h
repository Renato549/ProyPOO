#include <string>

#include <sstream>

#include <iostream>

using namespace std;

class Usuario{

    protected:
        string nom_Usuario;
        string Tipo;

    public:
        Usuario(): nom_Usuario(""), Tipo("") {};
        Usuario( string Nom, string tipo): nom_Usuario(Nom), Tipo(tipo) {}; 
    
        string get_Nom(){
            return nom_Usuario;
        }
        string get_Tipo(){
            return Tipo;
        }

        virtual void Asignar_Horario() = 0;
        virtual void Mostrar() = 0;
        virtual void Mostrar_H() = 0;
};

class Alumno: public Usuario {

    private:
        int ID;
        string Horario;
    public:
        Alumno():Usuario("", "Alumno"){};
        Alumno(string  nom_Usuario, int ID): Usuario(nom_Usuario, "Alumno"), ID(ID){};

        string get_Horario(){
            return Horario;
        }
        string get_nombre(){
        return nom_Usuario;
        }
        int get_ID(){
        return ID;
        }
        
        void Asignar_Horario();
        void Mostrar();
        void Mostrar_H();
};

void Alumno::Asignar_Horario(){
    Horario = " Clase1:Lunes-Miercoles 2:30-5:00, Clase2: Martes-Jueves 11:00-3:00, Clase3: Lunes-Viernes 11:00-1:00";
}

//Funciónes para mostrar los datos del usuario
void Alumno::Mostrar(){
    cout << 'Usuario: ' << nom_Usuario << 'Clase: ' << Tipo;
}  
void Alumno::Mostrar_H(){
    cout << 'Usuario: ' << nom_Usuario << 'Horario: ' << Horario;
}


class Profesor: public Usuario {

    private:
        int ID;
        string Horario;
    public:
        Profesor():Usuario("", "Profesor"){};
        Profesor(string  nom_Usuario, int ID): Usuario(nom_Usuario,"Profesor"), ID(ID){};

        string get_Horario(){
            return Horario;
        }
        string get_nombre(){
            return nom_Usuario;
        }
        int get_ID(){
            return ID;
        }
        void Asignar_Horario();
        void Mostrar();
        void Mostrar_H();
};

void Profesor::Asignar_Horario(){
    Horario = " Clase1:Lunes-Martes 11:00-3:00, Clase3: Jueves-Viernes 11:00-1:00";
}

//Funciónes para mostrar los datos del usuario
void Profesor::Mostrar(){
    cout << "Usuario: " << nom_Usuario << "Clase: " << Tipo;
} 
void Profesor::Mostrar_H(){
    cout << "Usuario: " << nom_Usuario << "Horario: " << Horario;
}
