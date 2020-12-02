#include "usuario.h"
#include "destinatario.h"
#include "producto.h"

#include <iostream>
#include <string>
using namespace std;

//Proyecto Integrador - Equipo 4 
//Ricardo Antonio Cervantes Martínez A01745912 
//Josué Bernardo Villegas Nuño A01751694

class Compra {
    private: 
        Usuario comprador {};
        Destinatario destinatario {};
        Producto producto {};
        int numero_compra;
        bool producto_confirmar;
    
    public: 
        Compra (){
            comprador = Usuario {};
            destinatario = Destinatario {};
            producto = Producto {};
            numero_compra = 00000;
            producto_confirmar = false;
        }
        Usuario desplegar_usuario (Usuario usuario){
            return usuario;
        }

        Producto desplegar_producto (Producto pro){
            return pro;
        }

        Destinatario desplegar_destinatario (Destinatario des){
            return des;
        }

        void datos_compra (int n){   
            numero_compra = numero_compra + n;
            cout << "Numero de compra: " << to_string(numero_compra) << endl;
        }

        void confirmar_producto(){
            producto_confirmar = true;
            cout << "\n¿El producto esta confirmado?: " << to_string(producto_confirmar) << endl;
        }
        void descartar_producto(){
            producto_confirmar = false;
            cout << "\n¿El producto esta confirmado?: " << to_string(producto_confirmar) << endl;
        }
};
