/*Problema 3. Escribir un programa para determinar si un año es 
bisiesto. Todo año bisiesto es múltiplo de 4, salvo que sea múltiplo 
de 100. Si el año es múltiplo de 100 y también es múltiplo de 400, 
entonces es bisiesto; de lo contrario no lo es.*/

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int year;
    string resp;
    cout << endl;
    cout << "ESTE PROGRAMA DETERMINA SI UN ANIO ES BISIESTO" << endl;
    cout << "Ingrese el anio (numero): " << endl;
    cin >> year;
    cout << endl;

    /*(Si es múltiplo de 4 pero no de 100) O (es múltiplo de 400), es bisiesto.
    Uso de operadores and (&&), or (||) y condicional C++ (?) */
    resp = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "SI" : "NO";
    cout << "Es bisiesto: " << resp  << endl;
    cout << endl;
    return 0;
}
