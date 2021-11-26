#include "Archivo.h"
#include "fstream" // trabajar con archivos

Archivo::Archivo() {}

void Archivo::escribir() {
	ofstream archivo; // Declaramos nuestro archivo
	string frase;

	archivo.open("prueba.txt", ios::out); // Abrir archivo, si hay una copia la reemplaza

	if (archivo.fail()) // Verificamos si hubo un error
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	// archivo << "Hola mi nombre es Eduardo "; // copia directamente en el archivo

	// escribir desde consola
	cout << "\n Digite el texto del archivo: ";
	getline(cin, frase);
	archivo << frase;

	archivo.close(); // Cerrar el archivo
}

void Archivo::lectura(string rol_empresa) {
	ifstream archivo; // Lectura
	string texto;
	if (rol_empresa == "agricultor")
	{
		archivo.open("BaseDeDatos/agricultor.txt", ios::in); // Lectura

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}

		while (!archivo.eof()) // mientras no se el final del archivo
		{
			getline(archivo, texto); // copiamos que encontremos en el archivo
			cout << texto << endl;
		}
	}
	else if (rol_empresa == "vendedor")
	{
		archivo.open("BaseDeDatos/vendedor.txt", ios::in); // Lectura

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}

		while (!archivo.eof()) // mientras no se el final del archivo
		{
			getline(archivo, texto); // copiamos que encontremos en el archivo
			cout << texto << endl;
		}
	}
	else if (rol_empresa == "cliente")
	{
		archivo.open("BaseDeDatos/cliente.txt", ios::in); // Lectura

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}

		while (!archivo.eof()) // mientras no se el final del archivo
		{
			getline(archivo, texto); // copiamos que encontremos en el archivo
			cout << texto << endl;
		}
	}
	else
	{
		cout << "ERROR EN SELECCIONAR ROL DE LA EMPRESA!" << endl;
	}
	

	archivo.close(); // Cerramos el archivo
}

void Archivo::anadir(string rol_en_la_empresa, string nombre, string edad, string Carnet_identidad, string nacionalidad, string Ocupacion, string Horas_trabajadas_mes, string Salario, string fecha_de_vinculacion, string fecha_de_retiro, string producto_de_cocecha, string nombre_producto_vendido, string total_productos_vendidos, string satisfaccion) {
	ofstream archivo;
	string texto;
	
	if (rol_en_la_empresa == "agricultor")
	{
		archivo.open("BaseDeDatos/agricultores.txt", ios::app); // Actualizar

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}
		archivo << "Nombre: " << nombre << endl;
		archivo << "Edad: " << edad << endl;
		archivo << "Carnet de identidad: " << Carnet_identidad << endl;
		archivo << "Nacionalidad: " << nacionalidad << endl;
		archivo << "Ocupacion: " << endl;
		archivo << "Horas de trabajo por mes: " << Horas_trabajadas_mes << endl;
		archivo << "Salario: " << Salario << endl;
		archivo << "Fecha de vinculacion: " << fecha_de_vinculacion << endl;
		archivo << "Fecha de retiro: " << fecha_de_retiro << endl;
		archivo << "Producto de cocecha: " << producto_de_cocecha << endl;
	}
	else if (rol_en_la_empresa == "vendedor")
	{
		archivo.open("BaseDeDatos/vendedor.txt", ios::app); // Actualizar

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}
		archivo << "Nombre: " << nombre << endl;
		archivo << "Edad: " << edad << endl;
		archivo << "Carnet de identidad: " << Carnet_identidad << endl;
		archivo << "Nacionalidad: " << nacionalidad << endl;
		archivo << "Ocupacion: " << endl;
		archivo << "Horas de trabajo por mes: " << Horas_trabajadas_mes << endl;
		archivo << "Salario: " << Salario << endl;
		archivo << "Fecha de vinculacion: " << fecha_de_vinculacion << endl;
		archivo << "Fecha de retiro: " << fecha_de_retiro << endl;
		archivo << "Productos vendidos: " << nombre_producto_vendido << endl;
		archivo << "Total de producto vendidos: " << total_productos_vendidos << endl;
	}
	else if (rol_en_la_empresa == "cliente") 
	{
		archivo.open("BaseDeDatos/cliente.txt", ios::app); // Actualizar

		if (archivo.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}
		archivo << "Nombre: " << nombre << endl;
		archivo << "Edad: " << edad << endl;
		archivo << "Carnet de identidad: " << Carnet_identidad << endl;
		archivo << "Nacionalidad: " << nacionalidad << endl;
		archivo << "Nivel de satisfaccion: " << satisfaccion << endl;
	}
	else
	{
		cout << "ERROR AL SELECCIONAR ROL DE LA EMPRESA" << endl;
	}
	

	archivo.close();
}

void Archivo::bajaLogica(string rol_empresa) {
	if (rol_empresa == "cliente")
	{
		char nombre[20], edad[20], carnet[20], nacionalidad[20], satisfaccion[20];
		char nombre_r[20], edad_r[20], carnet_r[20], nacionalidad_r[20], satisfaccion_r[20];
		//int edad;

		ifstream salida;
		salida.open("BaseDeDatos/empleados.txt", ios::in);

		ofstream entrada;
		entrada.open("BaseDeDatos/temp.txt", ios::out);

		if (salida.fail())
		{
			cout << "No se pudo abrir el archivo";
			exit(1);
		}
		else
		{
			char aux[20];

			cout << "Introduce el nombre: ";
			cin >> aux;

			salida >> nombre;

			while (!salida.eof())
			{
				salida >> edad >> edad;

				if (strcmp(aux, nombre) == 0)
				{
					cout << "El registro se ha eliminado" << endl;
					//exit(1);
				}
				else
				{
					entrada << nombre << " " << edad << " " << edad << endl;
				}

				salida >> nombre;
			}

			entrada.close();
			salida.close();

			remove("BaseDeDatos/empleados.txt");
			rename("BaseDeDatos/temp.txt", "BaseDeDatos/empleados.txt");
		}
	}
	else if (rol_empresa == "agricultor")
	{

	}
	else if (rol_empresa == "vendedor")
	{

	}
	else
	{
		cout << "ERROR AL SELECCIONA ROL EN LA EMPRESA" << endl;
	}

}
