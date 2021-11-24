#pragma once
#include "Persona.h"
class Empleado : public Persona

{
private:
	string Ocupacion;
	string Horas_trabajadas_mes;
	string Salario;
	string fecha_de_vinculacion;
	string fecha_de_retiro;
public:
	Empleado(string, string, string, string, string, string, string, string, string);
	Empleado();
	void set_ocupacion(string ocu);
	void set_Horas_trabajadas_mes(string htm);
	void set_Salario(string sala);
	void set_fecha_de_vinculacion(string f_vincu);
	void set_fecha_de_retiro(string f_reti);

	string get_ocupacion();
	string get_Horas_trabajadas_mes();
	string get_Salario();
	string get_fecha_de_vinculacion();
	string get_fecha_de_retiro();
};



