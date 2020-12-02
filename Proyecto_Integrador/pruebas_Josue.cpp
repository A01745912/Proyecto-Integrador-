#include "usuario.h"
#include "compra.h"
#include "producto.h"
#include "marca.h"
#include "destinatario.h"

#include <iostream>
#include <string>
using namespace std;

//Pruebas individual Josué Bernardo Villegas Nuño A01751694

int main(){

    cout << "Pruebas de Destinatario.\n" << endl;
    Destinatario destinatario1;
    destinatario1.ingrese_datos();
    destinatario1.setNombre("Josue");
    destinatario1.setDireccion("Av. Maple Num. 777");
    destinatario1.setTelefono("55-8776-5432");
    destinatario1.setCorreo_electronico("a01765432@itesm.mx");
    cout << "\nNombre " << destinatario1.getNombre();
    cout << "\nDireccion " << destinatario1.getDireccion();
    cout << "\nTelefono " << destinatario1.getTelefono();
    cout << "\nCorreo " << destinatario1.getCorreo_electronico();
    destinatario1.imprimir_datos();
    destinatario1.correo_confirmaciom();

    cin.ignore(32767,'\n');
    cout << "Pruebas de Usuario.\n" << endl;
    Usuario usuario1;
    usuario1.ingresar_datos();
    usuario1.imprimir_datos();
    usuario1.pago_con_tarjeta();
    
    cin.ignore(32767,'\n');

    cout << "Pruebas de Producto.\n" << endl;
    Producto producto1;
    producto1.insertar_datos();
    producto1.insertar_cantidad();
    producto1.desplegar_datos();
    producto1.si_garantia();

    cin.ignore(32767,'\n');

    cout << "Pruebas de Compra.\n" << endl;
    Compra compra1;
    compra1.datos_compra(1);
    compra1.desplegar_usuario(usuario1).imprimir_datos();
    compra1.desplegar_producto(producto1).desplegar_datos();
    compra1.confirmar_producto();
    compra1.descartar_producto();
    compra1.desplegar_destinatario(destinatario1).imprimir_datos();

    cin.ignore(32767,'\n');

    cout << "Pruebas de Sucursal. n" << endl;
    Sucursal s1;
    s1.existencia_producto();
    s1.seleccionar_sucursal();
    s1.desplegar_datos();

    cin.ignore(32767,'\n');

    cout << "Pruebas de Marca.\n" << endl;
    Marca marca1;
    marca1.datos_mercado();
    marca1.desplegar_datos();
    marca1.desplegar_producto(producto1).desplegar_datos();
    marca1.desplegar_sucursal(s1).desplegar_datos(); 

    return 0;
}