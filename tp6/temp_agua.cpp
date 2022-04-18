/* Problema 1. Escribir una estructura de control que examine el valor de una 
variable en punto flotante llamada temperatura y escriba uno de los 
siguientes mensajes dependiendo de su valor:
    a. HIELO si el valor de temperatura es menor que 0.0
    b. AGUA si el valor de temperatura se encuentra entre 0.0 y 100.0
    c. VAPOR si el valor de temperatura es mayor que 100.0*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    float temp;
    string Msj;
    cout << endl << "Ingrese la temperatura (C) del agua: "; 
    cin >> temp;
    if (temp <= -273.15)
    {
        Msj = "ERROR: T <= -273.15 C (cero absoluto de temp)";
    }
    else
    {
        Msj = (temp < 0.0) ? "HIELO" : ((temp < 100.0) ? "AGUA LIQ." : "VAPOR");
    }       
    cout << endl << Msj << endl; 
    return 0;
}
