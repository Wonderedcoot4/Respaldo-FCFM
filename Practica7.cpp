#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
using namespace std;

struct info{
    char nombre [100];
    char apellido [100];
};


int main (){
    //Tipo de dato ------- Variable
    info  info[5];

   for (size_t i = 0; i < 5; i++)
   {
       cout << "Ingrese un nombre:   " << endl;
       cin >> info[i].nombre;
       cout << "Ingrese un apellido:  \n";
       cin >> info[i].apellido;
   }

system("pause");

char buffer[100];
char NombreCompleto[100];
for (size_t j = 0; j < 5; j++)
{
    NombreCompleto= "";
    _itoa(j, buffer,100);
    strcat(NombreCompleto, info[j].nombre);
    strcat(NombreCompleto, " ");
    strcat(NombreCompleto, info[j].apellido);
    strcat(NombreCompleto, " ");
    strcat(NombreCompleto, buffer);
    cout << NombreCompleto << endl;


    cout << info[j].nombre << " " << info[j].apellido << endl;

    
}

    

return 0;
}