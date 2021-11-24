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

	Agricultor agricultor;
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
		case 2: // Vendedor
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
				
				agricultor.set_nombre("Eduardo");
				agricultor.set_edad("20");
				agricultor.set_Carnet_identidad("7788781");
				agricultor.set_nacionalidad("Boliviano");
				agricultor.set_ocupacion("Plantacion");
				agricultor.set_Horas_trabajadas_mes("200 hrs");
				agricultor.set_Salario("2100 bs");
				agricultor.set_fecha_de_vinculacion("10/08/01");
				agricultor.set_fecha_de_retiro("24/11/21");
				agricultor.set_producto_de_cocecha("Maiz");
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
					"NULL"
				);
				break;
			default:
				cout << "SELECCIONE UNA DE LAS OPCIONES" << endl;
				break;
			}
		case 3: // Agriculor
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


