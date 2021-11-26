#include "string"
#include "iostream"
#include "conio.h"
#include "Vendedor.h"
#include "Archivo.h"
#include "Empleado.h"
#include "Cliente.h"
#include "Agricultor.h"
#include "stdlib.h"
using namespace std;

int main()
{
	Vendedor vendedor;
	Agricultor agricultor;
	string nombre, edad, carnet, nacionalidad, ocupacion, horas_trabajadas, salario, fecha_vinculacion, fecha_retiro, producto, producto_vendidos, producto_total;
	int op1;
	bool salir = true;

	while (salir)
	{
		cout << "Seleccione su rol en la empresa:" << endl;
		cout << "1. Gerente" << endl; // Cliente
		cout << "2. Agricultor" << endl;
		cout << "3. Vendedor" << endl;
		cout << "0. Salir" << endl;
		cin >> op1;
		switch (op1)
		{
		case 1: // Gerente - Cliente
			break;
		case 2: // Agricultor
			int op2;
			cout << "Ingrese una de las opciones: " << endl;
			cout << "1. Leer " << endl;
			cout << "2. A�adir" << endl;
			cout << "0. Salir " << endl;
			cin >> op2;
			switch (op2)
			{
			case 1:
				break;
			case 2:
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingrese Edad: ";
				cin >> edad;
				cout << "Ingrese el carnet: ";
				cin >> carnet;
				cout << "Ingrese nacionalidad: ";
				cin >> nacionalidad;
				cout << "Ingrese Ocupacion: ";
				cin >> ocupacion;
				cout << "Ingrese horas trabajas por mes: ";
				cin >> horas_trabajadas;
				cout << "Ingrese salario: ";
				cin >> salario;
				cout << "Ingrese fecha de vinculacion: ";
				cin >> fecha_vinculacion;
				cout << "Ingrese fecha de retiro: ";
				cin >> fecha_retiro;
				cout << "Ingrese producto: ";
				cin >> producto;

				agricultor.set_nombre(nombre);
				agricultor.set_edad(edad);
				agricultor.set_Carnet_identidad(carnet);
				agricultor.set_nacionalidad(nacionalidad);
				agricultor.set_ocupacion(ocupacion);
				agricultor.set_Horas_trabajadas_mes(horas_trabajadas);
				agricultor.set_Salario(salario);
				agricultor.set_fecha_de_vinculacion(fecha_vinculacion);
				agricultor.set_fecha_de_retiro(fecha_retiro);
				agricultor.set_producto_de_cocecha(producto);
				agricultor.anadir(
					"agricultor",
					agricultor.get_nombre(),
					agricultor.get_edad(),
					agricultor.get_Carnet_identidad(),
					agricultor.get_nacionalidad(),
					agricultor.get_ocupacion(),
					agricultor.get_Horas_trabajadas_mes(),
					agricultor.get_Salario(),
					agricultor.get_fecha_de_vinculacion(),
					agricultor.get_fecha_de_retiro(),
					agricultor.get_producto_de_cocecha(),
					"NULL", "NULL", "NULL"
				);
				cout << "DATOS INGRESADOS!" << endl;
				break;
			default:
				cout << "SELECCIONE UNA DE LAS OPCIONES" << endl;
				break;
			}
		case 3: // Vendedor /////////////////////////////
			int op3;
			cout << "Ingrese una de las opciones: " << endl;
			cout << "1. Leer " << endl;
			cout << "2. A�adir" << endl;
			cout << "0. Salir " << endl;
			cin >> op3;
			switch (op3)
			{
			case 1:
				break;
			case 2:
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingrese Edad: ";
				cin >> edad;
				cout << "Ingrese el carnet: ";
				cin >> carnet;
				cout << "Ingrese nacionalidad: ";
				cin >> nacionalidad;
				cout << "Ingrese Ocupacion: ";
				cin >> ocupacion;
				cout << "Ingrese horas trabajas por mes: ";
				cin >> horas_trabajadas;
				cout << "Ingrese salario: ";
				cin >> salario;
				cout << "Ingrese fecha de vinculacion: ";
				cin >> fecha_vinculacion;
				cout << "Ingrese fecha de retiro: ";
				cin >> fecha_retiro;
				cout << "Ingrese el nombre producto vendido: ";
				cin >> producto_vendidos;
				cout << "Ingrese el total de producto mas vendido: ";
				cin >> producto_total;

				vendedor.set_nombre(nombre);
				vendedor.set_edad(edad);
				vendedor.set_Carnet_identidad(carnet);
				vendedor.set_nacionalidad(nacionalidad);
				vendedor.set_ocupacion(ocupacion);
				vendedor.set_Horas_trabajadas_mes(horas_trabajadas);
				vendedor.set_Salario(salario);
				vendedor.set_fecha_de_vinculacion(fecha_vinculacion);
				vendedor.set_fecha_de_retiro(fecha_retiro);
				vendedor.set_nombre_producto_vendido(producto_vendidos);
				vendedor.set_total_productos_vendidos(producto_total);
				vendedor.anadir(
					"vendedor",
					vendedor.get_nombre(),
					vendedor.get_edad(),
					vendedor.get_Carnet_identidad(),
					vendedor.get_nacionalidad(),
					vendedor.get_ocupacion(),
					vendedor.get_Horas_trabajadas_mes(),
					vendedor.get_Salario(),
					vendedor.get_fecha_de_vinculacion(),
					vendedor.get_fecha_de_retiro(),
					"NULL", // prducto de cocecha
					vendedor.get_nombre_producto_vendido(),
					vendedor.get_total_productos_vendidos(),
					"NULL"
				);
				cout << "DATOS INGRESADOS!" << endl;
				break;
			case 0: // Salir
				cout << "Saliendo ...." << endl;
				salir = false;
				break;
			default:
				cout << "SELECCIONE UNA DE LAS OPCIONES" << endl;
				break;
			}

		}

		cout << "Principal" << endl;
		system("pause");
		return 0;
	}
}


