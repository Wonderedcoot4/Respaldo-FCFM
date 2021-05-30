#include <iostream>
using namespace std;

int main(){
    int Hamburguesa = 105 ;
    int Con_Jamon;
    int i;
    int opcion;
    int Con_queso;
    int Especial;
cout << "Programa que realice el costo de una orden de una hambuerguesa con cosas extra" << endl;
cout << "Elija su opcion" << endl;
cin >> opcion;
cout << "Las opciones son 1: con jamon, 2: con queso, 3: con queso y jamon, 4: especial  \n"; 
switch(opcion){
    case 1:
    Con_Jamon=25;
    cout << "Hamburguesa con jamon" << endl;
    cout << "Su total es :  " << Hamburguesa + Con_Jamon  << "Gracias por venir" << endl;
    break;

    case 2:
    Con_queso=30;
    cout << "Hambuergsa con queso" << endl;
    cout << "Su total es :" << Hamburguesa + Con_queso << "Gracias por venir" << endl;
    break;

    case 3:
    Con_Jamon=25;
    Con_queso=25;

    cout << "Hamburguesa con queso y jamon" << endl;
    cout << "Su total es :" << Hamburguesa + Con_Jamon + Con_queso << endl;
    cout << "Gracias por venir" << endl;
    break;

    case 4:
    Especial= 60;

    cout << "Hamburguesa especial" << endl;
    cout << "Su total es : " << Hamburguesa + Especial << endl;
    cout << "Gracias por venir chango pelado" << endl;


}
return 0;
}