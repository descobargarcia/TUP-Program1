/*Problema 3. Escribir un programa para calcular el volumen de un 
cilindro, ingresando los parámetros requeridos por el programa 
a través de la consola. (Puede pedir un string pidiendo al usuario 
un detalle del objeto a calcular)*/

#include <iostream>
using namespace std;

const float PI = 3.14159265;

int main ()

{
    float r, h;
    cout << endl;
    cout << "Ingrese el radio del cilindro: " << endl;
    cin >> r;
    cout << "Ingrese la altura o longitud del cilindro: " << endl;
    cin >> h;
    if (r<0 || h<0) cout << "ERROR: dimension negativa" << endl;
    else
    {
        float volumen = PI*h*r*r;
        cout << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Volumen del cilindro: " << volumen << endl;
    }
    cout << endl;
    return 0;
}
