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

	Persona persona;
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
				persona.set_nombre("Eduardo");
				persona.set_edad("20");
				persona.set_Carnet_identidad("7788781");
				persona.set_nacionalidad("boliviano");
				persona.anadir(
					persona.get_nombre(),
					persona.get_edad(),
					persona.get_Carnet_identidad(),
					persona.get_nacionalidad()
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


