#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void listado(string titulo, char espacio, string nombre)
{
	int Titulo = titulo.length();
	int Nombre = nombre.length();
	int repeticiones = 80 - (Nombre + Titulo);

	cout << titulo;
	for (size_t i = 0; i < repeticiones; i++)
		putchar(espacio);
        getline(cin, nombre);
	cout << nombre << endl;
   
}

int main() {
	//string nombres[5] = { "Jonathan", "Alexander", "David", "Rogelio", "Roberto" }; //Esto en caso de que no funcione la escirtura
	
    string nombres[5];

	for (size_t i = 0; i < 5; i++)
	
		listado("Nombre", 45, nombres[i]);
		
	
	ofstream archivo;
	string titulo = "Nombre";
	archivo.open("nombres.txt", ios::out);

	if (archivo.is_open()) {
		for (size_t i = 0; i < 5; i++)
		{
			int Titulo = titulo.length();
			int Nombre = nombres[i].length();
			int repeticiones = 80 - (Nombre + Titulo);

			archivo << titulo;
			for (size_t i = 0; i < repeticiones; i++)
				archivo << "-";
			archivo << nombres[i] << endl;
		}
	}
	archivo.close();
	system("pause > nul");
}