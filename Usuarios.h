#include <string>

#include <sstream>

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
        virtual void crear_Horario() = 0;
        virtual void Asignar_Horario() = 0;
};

class Alumno: public Usuario {

    private:
        int ID;
    public:
        Alumno():Usuario("", "Alumno"){};
        Alumno(int ID, string  nom_Usuario): Usuario(nom_Usuario, Tipo), ID(ID){};

        string get_nombre(){
        return nom_Usuario;
        }
        int get_ID(){
        return ID;
        }
        void crear_Horario();

};

class Profesor: public Usuario {

    private:
        int ID;
    public:
        Profesor():Usuario("", "Profesor"){};
        Profesor(int ID, string  nom_Usuario): Usuario(nom_Usuario,Tipo), ID(ID){};

        string get_nombre(){
        return nom_Usuario;
        }
        int get_ID(){
        return ID;
        }
        void Asignar_Horario();
        
};
