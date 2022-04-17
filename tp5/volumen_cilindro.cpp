/*Problema 3. Escribir un programa para calcular el volumen de un 
cilindro, ingresando los parámetros requeridos por el programa 
a través de la consola. (Puede pedir un string pidiendo al usuario 
un detalle del objeto a calcular)*/

#include <iostream>
using namespace std;

int main ()

{
    double PI = 3.141592653589793;
    double r, h, volumen;
    cout << endl;
    cout << "Ingrese el radio del cilindro: " << endl;
    cin >> r;
    cout << "Ingrese la altura o longitud del cilindro: " << endl;
    cin >> h;
    if ((r<0) || (h<0))
    {
        cout << "ERROR: dimension negativa" << endl;
    }
    else
    {
        volumen = PI*h*r*r;
        cout << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Volumen del cilindro: " << volumen << endl;
    }
    cout << endl;
    return 0;
}
