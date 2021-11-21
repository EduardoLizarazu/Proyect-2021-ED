#pragma once
#include "Empleado.h"
class Vendedor : public Empleado
{
private:
	Nodo_Persona datos[100];

public:
	Vendedor(void);
	
	void rellenar();
	void mostrar();
};

