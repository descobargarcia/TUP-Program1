/*Prob 1. Escribir un programa para convertir pulgadas en centimetros,
ingresando el valor de la medida en pulgadas por consola.*/

#include <iostream>
using namespace std;

int main ()

{
    double long_pulg, long_cm;
    cout << endl;
    cout << "Ingrese la longitud en pulgadas: " << endl;
    cin >> long_pulg;
    if (long_pulg<0)
    {
        cout << "ERROR: longitud negativa" << endl;
    }
    else
    {
        long_cm = 2.54*long_pulg;
        cout << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Longitud (cm): " << long_cm << endl;
    }
    cout << endl;
    return 0;
}
