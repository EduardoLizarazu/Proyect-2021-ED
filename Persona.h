#pragma once
#include "string"
#include "iostream"
#include "Archivo.h"

using namespace std;

class Persona : public Archivo
{
private:
	string nombre;
	string edad;
	string Carnet_identidad;
	string nacionalidad;

public:
	Persona(string, string, string, string);
	Persona();
	void set_nombre(string n);
	string get_nombre();
	void set_edad(string e);
	string get_edad();
	void set_Carnet_identidad(string);
	string get_Carnet_identidad();
	void set_nacionalidad(string);
	string get_nacionalidad();

};

