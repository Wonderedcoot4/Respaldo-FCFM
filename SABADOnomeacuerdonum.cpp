#include <iostream>
#include <math.h>

using namespace std;

inline float volCono (float r, float h){
    float V;
    V=r*r*h*3.1416/3;
    return V;
    }

int main () {
    

    cout <<"Inserte valores para calcular el valor de un cono" << endl;
    cout << "El total es : " << volCono(10,7) << endl;

}