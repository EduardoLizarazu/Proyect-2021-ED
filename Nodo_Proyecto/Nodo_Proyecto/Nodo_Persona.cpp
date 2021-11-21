#include "StdAfx.h"
#include "Nodo_Persona.h"
#include "string"

Nodo_Persona::Nodo_Persona(void)
{

}

void Nodo_Persona::set_nombre(string n){
	nombre=n;
}
	string Nodo_Persona::get_nombre(){
   return nombre;
	}
	 
	void Nodo_Persona::set_edad(int e){
    edad=e;
	}
	int Nodo_Persona::get_edad(){

 return edad;
	}

