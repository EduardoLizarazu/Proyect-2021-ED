#include "StdAfx.h"
#include "Vendedor.h"


Vendedor::Vendedor(void)
{
}


void Vendedor::rellenar(){
	int e;
	string nombre;
	for(int i=0;i<4;i++){
    cout<<"Ingrese edad :";
     cin>>e;
	  cout<<"Ingrese Nombre :";
	 cin>>nombre;
     datos[i].set_edad(e);
	 datos[i].set_nombre(nombre);

	}

}

void Vendedor::mostrar(){
	for(int i=0;i<4;i++){

     cout<<"La edad es : "<<datos[i].get_edad()<<endl;
	 cout<<"El nombre es :"<<datos[i].get_nombre()<<endl;

	}
}