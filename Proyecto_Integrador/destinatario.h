#ifndef DESTINATARIO_C
#define DESTINATARIO_C

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Clase Destinatario de Josué Bernardo Villegas Nuño A01751694.

class Destinatario{
    private:
    string nombre;
    string correo_electronico;
    string telefono;
    string direccion;

    public:
    Destinatario (){
        nombre = "AAAAAA";
        correo_electronico = "------";
        telefono = "-- ---- ----";
        direccion = "AAAAAA";
    }
    Destinatario(string N, string CE,string TE,string DI,string D){
        nombre = N;
        correo_electronico = CE;
        telefono = TE;
        direccion = DI;
    }
    string getNombre(){return nombre;}
    string getCorreo_electronico(){return correo_electronico;}
    string getTelefono(){return telefono;}
    string getDireccion(){return direccion;}

    void setNombre(string N){nombre = N;}
    void setCorreo_electronico (string CE){correo_electronico = CE;}
    void setTelefono (string TE){telefono = TE;}
    void setDireccion (string DI){direccion = DI;}

    void ingrese_datos(){
        string nom;
        string corr; 
        string tel;
        string dir;

        cout<<"\nIngrese los datos del destinatario"<<endl;
        cin.ignore(32767,'\n');
        cout<<"Nombre : "; getline(cin,nom);
        cout<<"Correo electronico: "; getline(cin,corr);
        cout<<"Telefono: " ;getline(cin,tel);
        cout<<"Direccion: ";getline(cin,dir);

        nombre = nom;
        correo_electronico = corr;
        telefono = tel;
        direccion = dir;
    }
    void correo_confirmaciom(){
        string desicion;
        cout<<"Estas seguro que to correo electronico es correcto? ";cin >> desicion;
        if (desicion == "Si"){
            cout<<"Entendido"<<endl;
        }else if ( desicion == "No"){
            cout<<"Cambielo entonces..."<<endl;
        }
    }
    void imprimir_datos(){
        cout << "\nDatos del destinatario. \n" << endl; 
        cout << "Nombre del destinatario: " << nombre << endl; 
        cout << "Correo electronico: " << correo_electronico << endl; 
        cout << "Telefono: " << telefono << endl; 
        cout << "Direccion: " << direccion << endl;
    }

};//clase Destinatario

#endif