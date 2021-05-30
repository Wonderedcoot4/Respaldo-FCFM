#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;
char nombre[50];

char nOmbre(char nombre[50]){
    cout << "Ingrese su nombre";
    cin >> nombre[50];

}
void Imprime(char Titulo[50],char separador[80],char Nombre[]){
    _putch(46);
}
void gotoxy(int x, int y){
        HANDLE hcon;
        hcon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.X = x;
        dwPos.Y = y;
        SetConsoleCursorPosition(hcon, dwPos);
    }
int main(){
    for (size_t i = 0; i <= 10; i++)
    {
        cout << "Ahora se ingrese el nombre" << nOmbre << endl;
        cout << "Ingrese los nombres" << endl;
        cin >> nombre[i];

        
    }
    
}    