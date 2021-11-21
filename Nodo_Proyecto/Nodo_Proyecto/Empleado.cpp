#include "StdAfx.h"
#include "Empleado.h"


Empleado::Empleado(void)
{
}
void Empleado::get_ocupacion(string ocu){
   Ocupacion=ocu;
}
void Empleado::get_Horas_trabajadas_mes(int htm){
	Horas_trabajadas_mes=htm;
}
void Empleado::get_Salario(int sala){
	Salario=sala;
}
void Empleado::get_fecha_de_vinculacion(string f_vincu){
	fecha_de_vinculacion=f_vincu;
}
void Empleado::get_fecha_de_retiro(string f_reti){
	fecha_de_retiro=f_reti;
}

string Empleado::set_ocupacion(){
	return Ocupacion;
}
int Empleado::set_Horas_trabajadas_mes(){
	return Horas_trabajadas_mes;
}
int Empleado::set_Salario(){
	return Salario;
}
string Empleado::set_fecha_de_vinculacion(){
	return fecha_de_vinculacion;
}
string Empleado::set_fecha_de_retiro(){
	return fecha_de_retiro;
}


