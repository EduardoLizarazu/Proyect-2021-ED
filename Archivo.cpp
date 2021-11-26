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

void Archivo::lectura() {
	ifstream archivo; // Lectura
	string texto;

	archivo.open("programacion.txt", ios::in); // Lectura

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

void Archivo::bajaLogica() {
	char nombre[20], profesion[20];
	int edad;

	ifstream salida;
	salida.open("empleados.txt", ios::in);

	ofstream entrada;
	entrada.open("temp.txt", ios::out);

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

		salida >> nombre; // empleados lectura
		cout << "1. Salida: " << nombre << endl;

		while (!salida.eof())
		{
			salida >> edad >> profesion; // empleados lectura
			cout << "2. salida: " << nombre << edad << profesion << endl;

			if (strcmp(aux, nombre) == 0) // si coincide regresa null
			{
				cout << "El registro se ha eliminado";
				//getch();
			}
			else
			{
				entrada << nombre << " " << edad << " " << profesion << endl; // Escribiendo
				cout << "3. Entrada: " << nombre << " " << edad << " " << profesion << endl;
			}
			salida >> nombre;// empleados lectura
			cout << "4. salida: " << nombre;
		}

		entrada.close();
		salida.close();
		remove("empleados.txt");
		rename("temp.txt", "empleados.txt");
	}
}
