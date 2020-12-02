#include "usuario.h"
#include "compra.h"
#include "producto.h"
#include "marca.h"

#include <iostream>
#include <string>
using namespace std;

//Pruebas individual Ricardo Antonio Cervantes Martínez A01745912

int main(){

    cout << "Pruebas de Usuario.\n" << endl;
    Usuario usuario1;
    usuario1.ingresar_datos();
    usuario1.imprimir_datos();
    usuario1.pago_con_tarjeta();

    cout << "Pruebas de Producto.\n" << endl;
    Producto producto1;
    producto1.insertar_datos();
    producto1.insertar_cantidad();
    producto1.desplegar_datos();
    producto1.si_garantia();

    cout << "Pruebas de Compra.\n" << endl;
    Compra compra1;
    compra1.datos_compra(1);
    compra1.desplegar_usuario(usuario1).imprimir_datos();
    compra1.desplegar_producto(producto1).desplegar_datos();
    compra1.confirmar_producto();
    compra1.descartar_producto();

    cout << "Pruebas de Sucursal. n" << endl;
    Sucursal s1;
    s1.existencia_producto();
    s1.seleccionar_sucursal();
    s1.desplegar_datos();

    cout << "Pruebas de Marca.\n" << endl;
    Marca marca1;
    marca1.datos_mercado();
    marca1.desplegar_datos();
    marca1.desplegar_producto(producto1).desplegar_datos();
    marca1.desplegar_sucursal(s1).desplegar_datos(); 

    return 0;
}