#include<iostream>
#include<math.h>

using namespace std;
float ecuacionCuadratica(float x, float y, float z){
    float ecuacion;
    ecuacion = (x*x)+y+z;
    return ecuacion;
}
int main() {
    std::cout << "Programa en el que un usuario le de valores a la ecuacion  \n" ;
    cout << ecuacionCuadratica(5,6,7); 

return 0;
}//me acabo de dar cuenta que es mejor pedir valor por valor y no hacer una funcion
//coño