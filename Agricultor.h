#pragma once
#include "Empleado.h"
class Agricultor : public Empleado
{
private:
	string producto_de_cocecha;
public:
	Agricultor();
	Agricultor(string, string, string, string, string, string, string, string, string, string);
	void set_producto_de_cocecha(string);
	string get_producto_de_cocecha();
	void mostrar();
};
