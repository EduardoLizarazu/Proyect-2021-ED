
#pragma once
#include "string"
#include "iostream"
using namespace std;

class Nodo_Persona
{
private:
	string nombre;
	int edad;
	int Carnet_identidad;
	string nacionalidad;
public:
	Nodo_Persona(void);           
	void set_nombre(string n);
	string get_nombre(); 
	void set_edad(int e);
	int get_edad();
	
};

