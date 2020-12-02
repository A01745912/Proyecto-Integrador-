#ifndef SUCURSAL_C
#define SUCURSAL_C

#include <iostream>
#include <string>
using namespace std;

//Clase Sucursal individual de Ricardo Antonio Cervantes Martínez A01745912.

class Sucursal{
    private: 
        string direccion;
        string titular_sucursal;
        string horario;
        bool si_producto;
    public: 
        Sucursal (){
            direccion = "Av. XXX Col. XXX Calle. XXX";
            titular_sucursal = "XXXX";
            horario = "XX:XX am/pm.";
            si_producto = false;
        }
        Sucursal (string d, string t, string h){
            direccion = h;
            titular_sucursal = t;
            horario = h;
        }
        void desplegar_datos(){

            cout << "\nDATOS DE LA SUCURSAL.\n" << endl;
            cout << "El local esta en: " << direccion << endl;
            cout << "El titular de la sucursal es: " << titular_sucursal << endl;
            cout << "El horario de la sucursal es: " << horario << endl;
            cout << "Esta disponible el producto: " << si_producto << endl;
            cin.ignore(32767,'\n');
        }
        void seleccionar_sucursal(){
            string dir;
            string tit;
            string hor;

            cout << "\nInserte la direccion: "; getline(cin,dir);
            cout << "Inserte el titular: "; getline(cin,tit);
            cout << "Inserte el horario: "; getline(cin,hor);
            cin.ignore(32767,'\n');

            direccion = dir;
            titular_sucursal = tit;
            horario = hor;
        }
        void existencia_producto (){
            si_producto = true;
            cout << "\nEl producto esta existente: " << si_producto << endl;
        }
};

#endif
