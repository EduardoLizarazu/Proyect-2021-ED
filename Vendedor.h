#pragma once
#include "Empleado.h"
class Vendedor : public Empleado
{
private:
	string nombre_producto_vendido;
	string total_productos_vendidos;
public:
	Vendedor(void);
	Vendedor(string, string, string, string, string, string, string, string, string, string, string);

	string get_nombre_producto_vendido();
	void set_nombre_producto_vendido(string);
	string get_total_productos_vendidos();
	void set_total_productos_vendidos(string);

	void rellenar();
	void mostrar();
};



