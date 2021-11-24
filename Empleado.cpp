#include "Empleado.h"


Empleado::Empleado(string _nombre, string _edad, string _Carnet_identidad, string _nacionalidad, string _Ocupacion, string _Horas_trabajadas_mes, string _Salario, string _fecha_de_vinculacion, string _fecha_de_retiro) : Persona(_nombre, _edad, _Carnet_identidad, _nacionalidad) {
	Ocupacion = _Ocupacion;
	Horas_trabajadas_mes = _Horas_trabajadas_mes;
	Salario = _Salario;
	fecha_de_vinculacion = _fecha_de_vinculacion;
	fecha_de_retiro = _fecha_de_retiro;
}

Empleado::Empleado() {}

void Empleado::set_ocupacion(string ocu) {
	Ocupacion = ocu;
}
void Empleado::set_Horas_trabajadas_mes(string htm) {
	Horas_trabajadas_mes = htm;
}
void Empleado::set_Salario(string sala) {
	Salario = sala;
}
void Empleado::set_fecha_de_vinculacion(string f_vincu) {
	fecha_de_vinculacion = f_vincu;
}
void Empleado::set_fecha_de_retiro(string f_reti) {
	fecha_de_retiro = f_reti;
}
string Empleado::get_ocupacion() {
	return Ocupacion;
}
string Empleado::get_Horas_trabajadas_mes() {
	return Horas_trabajadas_mes;
}
string Empleado::get_Salario() {
	return Salario;
}
string Empleado::get_fecha_de_vinculacion() {
	return fecha_de_vinculacion;
}
string Empleado::get_fecha_de_retiro() {
	return fecha_de_retiro;
}



