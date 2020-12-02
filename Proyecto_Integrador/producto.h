#ifndef PRODUCTO_C
#define PRODUCTO_C

#include <iostream>
#include <string>
using namespace std;

//Proyecto Integrador - Equipo 4 
//Ricardo Antonio Cervantes Martínez A01745912 
//Josué Bernardo Villegas Nuño A01751694

class Producto {
    private: 
        string tamanio;
        double peso; 
        double costo;
        string categoria;
        bool garantia;
        int cantidad;

    public: 
        Producto(){
            tamanio = "XX";
            peso = 0;
            costo = 0;
            categoria = "XX";
            garantia = false;
            cantidad = 0;
        }

        void desplegar_datos(){
            cout << "\nDATOS DEL PRODUCTO. \n" << endl;
            cout << "Tamanio del producto: " << tamanio << endl;
            cout << "Peso del producto (kg): " << to_string(peso) << " kg" << endl;
            cout << "Costo del producto: $" << to_string(costo) << endl;
            cout << "Categoria del producto: " << categoria << endl;
            cout << "Tiene garantia el producto: " << to_string(garantia) << endl;
            cout << "Cantidad del producto: " << to_string(cantidad) << endl;
            cin.ignore(32767,'\n');
        }

        void insertar_datos(){
            string tam;
            double p;
            double cos;
            string u;
            string cat;
            
            cout << "\nDATOS DEL PRODUCTO. " << endl;
            cout << "Tamanio del producto: "; getline(cin,tam);
            cout << "Peso del producto (kg): "; cin >> p;
            cout << "Costo del producto: "; cin >> cos;
            cin.ignore(32767,'\n');
            cout << "Categoria del producto: "; getline(cin, cat);
            //cin.ignore(32767,'\n');
            
            tamanio = tam;
            peso = p;
            costo = cos;
            categoria = cat;

        }

        void insertar_cantidad(){
            int can;
            cout << "\nInserta cantidad del producto: "; cin >> can;
            cantidad = can;
            cin.ignore(32767,'\n');
        }

        void si_garantia(){
            garantia = true;
        }
};

#endif