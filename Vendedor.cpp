#include "Vendedor.h"

Vendedor::Vendedor(void) {}

Vendedor::Vendedor(string _nombre, string _edad, string _Carnet_identidad, string _nacionalidad, string _Ocupacion, string _Horas_trabajadas_mes, string _Salario, string _fecha_de_vinculacion, string _fecha_de_retiro, string _nombre_producto_vendido, string _total_productos_vendidos) : Empleado(_nombre, _edad, _Carnet_identidad, _nacionalidad, _Ocupacion, _Horas_trabajadas_mes, _Salario, _fecha_de_vinculacion, _fecha_de_retiro) {
	nombre_producto_vendido = _nombre_producto_vendido;
	total_productos_vendidos = _total_productos_vendidos;
}

void Vendedor::set_nombre_producto_vendido(string _nombre_producto_vendido) {
	nombre_producto_vendido = _nombre_producto_vendido;
}
string Vendedor::get_nombre_producto_vendido() {
	return nombre_producto_vendido;
}

void Vendedor::set_total_productos_vendidos(string _total_productos_vendidos) {
	total_productos_vendidos = _total_productos_vendidos;
}
string Vendedor::get_total_productos_vendidos() {
	return total_productos_vendidos;
}


void Vendedor::mostrar() {
	//for(int i=0;i<4;i++)
	//{
	//	cout<<"La edad es : "<<datos[i].get_edad()<<endl;
	//	cout<<"El nombre es :"<<datos[i].get_nombre()<<endl;
	//
	//}
	cout << "Nombre: " << get_nombre() << endl;
	cout << "Edad: " << get_edad() << endl;
	cout << "Carnet de identidad: " << get_Carnet_identidad() << endl;
	cout << "Nacionalidad: " << get_nacionalidad() << endl;
	cout << "Horas de trabajo por mes: " << get_Horas_trabajadas_mes() << endl;
	cout << "Salario: " << get_Salario() << endl;
	cout << "Fecha de vinculacion: " << get_fecha_de_vinculacion() << endl;
	cout << "Fecha de retiro: " << get_fecha_de_retiro() << endl;
	cout << "Nombre producto vendido: " << get_nombre_producto_vendido() << endl;
	cout << "Total de productos vendidos: " << get_total_productos_vendidos() << endl;
}
