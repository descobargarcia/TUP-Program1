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
    string msj_salida;
    bool esHielo, esVapor;
    cout << endl << "Ingrese la temperatura (C) del agua: "; 
    cin >> temp;
    if (temp <= -273.15) 
    {
        cout << endl << "ERROR: T <= -273.15 C (cero absoluto de temp)" << endl;
        return 10;
    }
    esHielo = temp < 0.0;
    esVapor = temp > 100.0;
    msj_salida = esHielo ? "HIELO" : (esVapor ? "VAPOR" : "AGUA LIQ.");
    cout << endl << msj_salida << endl; 
    return 0;
}
