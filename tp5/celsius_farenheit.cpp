/*Prob 4. Escriba un programa para convertir una temperatura expresada en 
grados centígrados a grados Fahrenheit.*/

#include <iostream>
using namespace std;

int main ()

{
    float tC;
    cout << endl << "Ingrese la temperatura (C): " << endl; 
    cin >> tC;
    cout << endl; 
    if (tC <= -273.15) cout << "ERROR: T <= -273.15 C (cero absoluto de temp)" << endl;
    else
    {
        float tF = 32 + 9.0*tC/5.0;
        cout.precision(2);
        cout << fixed;
        cout << "Temperatura (F): " << tF << endl;
    }
    return 0;
}

