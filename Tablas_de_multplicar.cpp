#include <iostream>
using namespace std;

//Programa que realice la tabla de multiplicar del numero que se ingrese por el usuario
//Use ciclos anidados
int main (){
    int Tabla;
    int i = 0;
    int Total;
cout << "Ingrese su numero a calcular" << endl;
cin >> Tabla;
for ( i = 0; i <=10 ; i++)
{
    Total = Tabla * i;
    cout << Total << endl;
}
return 0;
} //AHUEVO YA JALO A LA PRIMERA 