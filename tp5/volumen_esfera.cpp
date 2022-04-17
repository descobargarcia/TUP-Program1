/*Problema 2. Escribir un programa para calcular el volumen de 
una esfera de radio "r" ingresado por consola*/

#include <iostream>
using namespace std;

int main ()

{
    const double PI = 3.141592653589793;
    double r;
    cout << endl;
    cout << "Ingrese el radio de la esfera: " << endl;
    cin >> r;
    if (r<0)
    {
        cout << "ERROR: radio negativo" << endl;
    }
    else
    {
        double volumen = (4.0 / 3.0)*PI*r*r*r;
        cout << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Volumen de la esfera: " << volumen << endl;
    }
    cout << endl;
    return 0;
}
