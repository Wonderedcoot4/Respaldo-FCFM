#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
//contador para el switch case
int opcion;

//prototipos de funciones
void escribirnTxt();

void escribirnTxt(){
    ofstream usuario;
    
    usuario.open("descifrado.txt",ios::out ); //Abre el archivo y crea uno

    if(usuario.fail()){
        cout << "No se logro hacer el descifrado ";
        exit(1);
    } 
    usuario << "Hola esto es una prueba";

    usuario.close();//cierra el archivo
}
int main( ){
    cout << "Hola, bienvenido al descifrador 3000" << endl;
    cout << "Porfavor eliga su opcion \n" << "Opcion 1: Cargar diccionario \n" 
    << "Opcion 2: Encriptar mensaje \n" << "Opcion 3: Descifrar mensaje \n" << "Opcion 4: Salir del sistema \n";


    cout << "Porfavor elija lo que quiere hacer";
    cin >>  opcion;

    switch (opcion)
    {
    case 1: 
    cout << "Cargar diccionario \n";
        break;
    case 2:
    cout << "Encriptar mensaje";
    break;
    case 3:
    cout << "Desencriptar mensaje";
    break;
    case 4:
    cout << "Salir del sistema";
    return 0;
    break;
    
    default:
    cout <<"Numero equivocado";
        break;
    }




    return 0;

}