#include "usuario.h"
#include "compra.h"
#include "sucursal.h"
#include "producto.h"
#include "marca.h"
#include "destinatario.h"

#include <iostream>
#include <string>
using namespace std;

//Aplicacion con la clase Destinatario de Josué Bernardo Villegas Nuño A01751694

int main(){
    Usuario u1;
    Producto p1;
    Marca m1;
    Compra comp1;
    Sucursal s1;
    Destinatario d1;

    string afirmacion = "Si";

    while ((afirmacion == "Si")||(afirmacion=="si")){
        cout << "¡BIENVENIDO A LA TIENDA EN LINEA!" << endl;
        cout << "\nRegistrese para poder elegir su compra." << endl;
        cout << "PULSE ENTER PARA PODER CONTINUAR." << endl;
        cin.ignore(32767,'\n');

        cout << "\n¿Quiere registrar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            cin.ignore(32767,'\n');
            u1.ingresar_datos();
            cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
            
            if ((afirmacion == "Si")||(afirmacion=="si")){
                comp1.desplegar_usuario(u1).imprimir_datos();
            }
        }

        cout << "\n¿Quiere registrar los datos del destinatario?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            cin.ignore(32767,'\n');
            d1.ingrese_datos();
            cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
            
            if ((afirmacion == "Si")||(afirmacion=="si")){
                comp1.desplegar_destinatario(d1).imprimir_datos();
            }
        }
        
        cout << "\nIngrese los datos de la marca." << endl;
        cout << "\nPULSE ENTER PARA PODER CONTINUAR." << endl;
        cin.ignore(32767,'\n');
        m1.datos_mercado();
        m1.desplegar_datos();

        cout << "\nAhora ingrese los datos del producto a comprar." << endl;
        p1.insertar_datos();
        p1.insertar_cantidad();
        p1.si_garantia();

        cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            m1.desplegar_producto(p1).desplegar_datos();
        }

        cout << "\n¿Seguro quiere comprar el producto?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            comp1.confirmar_producto();
            
            cout << "\nPROCEDA A PAGAR." << endl;
            cout << "\n¿Quiere pagar con tarjeta?"; cin >> afirmacion;
            if ((afirmacion == "Si")||(afirmacion=="si")){
                u1.pago_con_tarjeta();
            }
            comp1.datos_compra(1);
        }
        else{
            comp1.descartar_producto();
        }

        cout << "\n¿Quiere seguir comprando?"; cin >> afirmacion;
    }  

}