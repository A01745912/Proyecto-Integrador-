#include "producto.h"
#include "sucursal.h"

#include <iostream>
#include <string>
using namespace std;

//Proyecto Integrador - Equipo 4 
//Ricardo Antonio Cervantes Martínez A01745912 
//Josué Bernardo Villegas Nuño A01751694

class Marca {
    private: 
        Producto producto {};
        Sucursal sucursal {}; //Atributo de Clase Sucursal de Ricardo Cervantes Martínez
        string nombre_tienda;
        string categoria_tienda;

    public: 
        Marca(){
            producto = Producto{};
            sucursal = Sucursal{}; //Atributo de Clase Sucursal de Ricardo Cervantes Martínez
            nombre_tienda = "XXX";
        }
        void datos_mercado(){
            string nom;
            string cat;
            cout << "\nInserte el nombre de la marca: "; getline(cin,nom);
            cout << "Inserte la categoria de la marca: "; getline(cin,cat);
            nombre_tienda = nom;
            categoria_tienda = cat;
        }
        void desplegar_datos(){
            cout << "\nSe hara una compra de la marca: " << nombre_tienda << endl;
            cout << "La categoria de la marca es: " << categoria_tienda << endl;
        }
        Producto desplegar_producto(Producto pro){
            return pro;
        }
        Sucursal desplegar_sucursal(Sucursal su){//Método de Clase Sucursal de Ricardo Cervantes Martínez.
            return su;
        }
};