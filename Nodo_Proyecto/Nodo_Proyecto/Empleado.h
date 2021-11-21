#pragma once
#include "Nodo_Persona.h"
class Empleado : public Nodo_Persona

{
private:
	string Ocupacion;
	int Horas_trabajadas_mes;
	int Salario;
	string fecha_de_vinculacion;
	string fecha_de_retiro;
public:
	Empleado(void);
	void get_ocupacion(string ocu);
	void get_Horas_trabajadas_mes(int htm);
	void get_Salario(int sala);
	void get_fecha_de_vinculacion(string f_vincu);
	void get_fecha_de_retiro(string f_reti);

	string set_ocupacion();
	int set_Horas_trabajadas_mes();
	int set_Salario();
	string set_fecha_de_vinculacion();
	string set_fecha_de_retiro();



};

