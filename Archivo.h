#pragma once
#include<iostream>
#include "stdlib.h"
#include "fstream" // trabajar con archivos
#include "string"
using namespace std;
class Archivo
{
private:
public:
	Archivo();
	void escribir();
	void lectura();
	void anadir(string, string, string, string);
	void bajaLogica();
};

