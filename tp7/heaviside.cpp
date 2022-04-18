/*Prob 1. Escribir un programa para calcular el valor de la función de 
Heaviside – h(x) – ingresando el valor de x por terminal y luego imprimiendo 
el valor con cout.*/

#include <iostream>
using namespace std;

int main ()
{
    float x; 
    cout << "Ingrese el valor de X: " << endl;
    cin >> x;
    cout << endl;
    int heaviside = (x < 0) ? 0 : 1; //funcion escalon unitario 
    cout << "Heaviside= " << heaviside << endl;
    cout << endl;
    return(0);
}
