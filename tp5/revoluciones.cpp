/*Prob 5. Escriba un programa para calcular la cantidad de revoluciones 
que realiza un neumático de 20 pulgadas ingresando la distancia en km a 
recorrer. ¿Cuántas revoluciones da una rueda de dicho tamaño al ir de 
Bahía Blanca a Monte Hermoso?*/

#include <iostream>
using namespace std;

const float PI = 3.14159265;

int main ()

{
    float diam_pulg = 20;
    float dist_km;    
    cout << endl;
    cout << "Ingrese la distancia (km) a recorrer: " << endl;
    cin >> dist_km;
    cout << endl;
    if (dist_km < 0) cout << "ERROR: distancia negativa" << endl;
    else
    {
        float diam_cm = 2.54*diam_pulg;
        float longcirc_m = PI*diam_cm/100.0;
        float dist_m = 1000.0*dist_km;
        float revoluc = dist_m / longcirc_m;
        cout.precision(2);
        cout << fixed;
        cout << "Revoluciones (neumatico 20'' diam): " << revoluc << endl;
    }
    cout << endl;
    return 0;
}
