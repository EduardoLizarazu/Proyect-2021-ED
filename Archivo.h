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
	void lectura(string);
	void anadir(
		string, string, // 1
		string, string, // 2
		string, string, // 3
		string, string, // 4
		string, string, // 5
		string, string, // 6
		string, string // 7
	);
	void bajaLogica();
};

