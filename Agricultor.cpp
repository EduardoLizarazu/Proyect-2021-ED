#include "Agricultor.h"

Agricultor::Agricultor() {}

Agricultor::Agricultor(string _nombre, string _edad, string _Carnet_identidad, string _nacionalidad, string _Ocupacion, string _Horas_trabajadas_mes, string _Salario, string _fecha_de_vinculacion, string _fecha_de_retiro, string _producto_de_cocecha) : Empleado(_nombre, _edad, _Carnet_identidad, _nacionalidad, _Ocupacion, _Horas_trabajadas_mes, _Salario, _fecha_de_vinculacion, _fecha_de_retiro) {
	producto_de_cocecha = _producto_de_cocecha;
}

void Agricultor::set_producto_de_cocecha(string _producto_de_cocecha) {
	producto_de_cocecha = _producto_de_cocecha;
}
string Agricultor::get_producto_de_cocecha() {
	return producto_de_cocecha;
}

void Agricultor::mostrar() {
	cout << "Nombre: " << get_nombre() << endl;
	cout << "Edad: " << get_edad() << endl;
	cout << "Carnet de identidad: " << get_Carnet_identidad() << endl;
	cout << "Nacionalidad: " << get_nacionalidad() << endl;
	cout << "Horas de trabajo por mes: " << get_Horas_trabajadas_mes() << endl;
	cout << "Salario: " << get_Salario() << endl;
	cout << "Fecha de vinculacion: " << get_fecha_de_vinculacion() << endl;
	cout << "Fecha de retiro: " << get_fecha_de_retiro() << endl;
	cout << "Producto de cocecha: " << get_producto_de_cocecha() << endl;
}
