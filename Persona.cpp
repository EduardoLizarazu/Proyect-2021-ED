
#include "Persona.h"
#include "string"

Persona::Persona(string _nombre, string _edad, string _Carnet_identidad, string _nacionalidad)
{
	nombre = _nombre;
	edad = _edad;
	Carnet_identidad = _Carnet_identidad;
	nacionalidad = _nacionalidad;
}

Persona::Persona() {}
void Persona::set_nombre(string n) {
	nombre = n;
}
string Persona::get_nombre() {
	return nombre;
}

void Persona::set_edad(string e) {
	edad = e;
}
string Persona::get_edad() {
	return edad;
}

void Persona::set_Carnet_identidad(string _Carnet_identidad) {
	Carnet_identidad = _Carnet_identidad;
}
string Persona::get_Carnet_identidad() {
	return Carnet_identidad;
}
void Persona::set_nacionalidad(string _nacionalidad) {
	nacionalidad = _nacionalidad;
}

string Persona::get_nacionalidad() {
	return nacionalidad;
}


