#include<iostream>
#include<math.h>

using namespace std;
//float calcularArea(circulo arreglo);
//circulo mayorRadio(circulo arreglo[5]);
//circulo masLejana(circulo arreglo[5]);


struct circulo
    {
       float x;
       float y;
       float r;

    };
circulo mayorRadio(circulo arreglo[5]){
    circulo valor = arreglo[0];
    for (size_t i = 0; i < 5; i++)
    {
       if (valor.r < arreglo[i].r)
       {
           valor = arreglo[i];
       }
       
    }
    return valor;
}
circulo maslejana(circulo arreglo[5]){
    circulo lejano = arreglo[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (lejano.r > arreglo[i].r)
        {
            lejano = arreglo[i];
        }
        
    }
    return lejano;
    
}
float calcularArea(circulo arreglo){
    float area;
    area = pow(3.1416*arreglo.r, 2);
    return area;
}
int main(){
    circulo arreglo[5];

    for (size_t i = 0; i < 5; i++)
    {
    
        cout << "Ingrese los datos de sus circulos:  \n";
        cout << "Ingrese x " << endl;
        cin >> arreglo[i].x;
        cout << "Ingrese y " << endl;
        cin >> arreglo[i].y;
        cout << "Ingrese r " << endl;
        cin >> arreglo[i].r;
    }   
    for (size_t i = 0; i < 5; i++)
    {
        cout << "El circulo de posicion ( " << arreglo[i].x << "," << arreglo[i].y << ") y de radio :" << arreglo[i].r << "tiene un area de :" << endl;
    }
    for (size_t i = 0; i < 5; i++)
    {
        circulo mayor= mayorRadio(arreglo);
        cout << "El circulo de posicion (" << mayor.x << "," << mayor.y << ") y que tiene de radio :" << mayor.r <<  "es el que tiene mayor radio" << endl;
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        circulo lejano = maslejana(arreglo);
        cout << "El circulo de posicion (" << lejano.x << "," << lejano.y << ") y que tiene de radio : " << lejano.r << "es el mas lejano al origen" << endl;
    }
    
    
  return 0;
}

 
