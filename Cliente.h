#pragma once
#include "Persona.h"
class Cliente : public Persona
{
private:
	string satisfaccion;
public:
	Cliente();
	Cliente(string, string, string, string, string);
	void set_satisfaccion(string);
	string get_satisfaccion();
};

