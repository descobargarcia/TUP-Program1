/* Problema 1. Escribir una estructura de control que examine el valor de una 
variable en punto flotante llamada temperatura y escriba uno de los 
siguientes mensajes dependiendo de su valor:
    a. HIELO si el valor de temperatura es menor que 0.0
    b. AGUA si el valor de temperatura se encuentra entre 0.0 y 100.0
    c. VAPOR si el valor de temperatura es mayor que 100.0*/

#include <iostream>
using namespace std;

int main ()
{
    double temp;
    cout << endl << "Ingrese la temperatura (C) del agua: " << endl; 
    cin >> temp;
    cout << endl; 
    if (temp <= -273.15)
    {
        cout << "ERROR: T <= -273.15 C (cero absoluto de temp)" << endl;
    }
    else if (temp < 0.0)
    {
        cout << "HIELO" << endl;
    }       
    else if (temp <= 100.0)
    {
        cout << "AGUA LIQUIDA" << endl;
    }
    else
    {
        cout << "VAPOR" << endl;
    }
    cout << endl; 
    return 0;
}
