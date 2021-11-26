#include "Cliente.h"
Cliente::Cliente(){}

Cliente::Cliente(string _nombre, string _edad, string _Carnet_identidad, string _nacionalidad, string _satisfaccion) : Persona(_nombre, _edad, _Carnet_identidad, _nacionalidad) {
	satisfaccion = _satisfaccion;
}

void Cliente::set_satisfaccion(string _satisfaccion) {
	satisfaccion = _satisfaccion;
}

string Cliente::get_satisfaccion() {
	return satisfaccion;
}