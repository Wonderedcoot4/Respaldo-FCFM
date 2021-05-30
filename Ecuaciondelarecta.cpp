#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main (){
    //Programa que calcule la pendiente de una recta cuyos valores ingresa el usuario

    float x2,x1;
    float y2,y1;
    float pendiente = (x2 - x1) / (y2 - y1);

    cout << "Introduzca el primer valor de x" << endl;
    cin >> x1;
    cout << "Introduzca el segundo valor de x" << endl;
    cin >> x2;
    cout << "Introduzca el primer valor de y" << endl;
    cin >> y1;
    cout << "Introduzca el segundo valor de y" << endl;
    cin >> y2;


    cout << "Ahora calcule la pendiente "  << endl;
    cout << "El valor de la pendiente es : " << (x2 - x1) / (y2 - y1) << endl;


    cout << "Ahora calcule la distancia entre ellos" << endl;
    
    system("pause");
    cout << "La distancia entre ellos es: " << sqrt(pow(x2-x1,2))+(pow(y2-y1,2)) << endl;
    //cout << "Muy bien ahora calcula el angulo"

    return 0;
    
}
 