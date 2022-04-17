/*Prob 5. Escriba un programa para calcular la cantidad de revoluciones 
que realiza un neumático de 20 pulgadas ingresando la distancia en km a 
recorrer. ¿Cuántas revoluciones da una rueda de dicho tamaño al ir de 
Bahía Blanca a Monte Hermoso?*/

#include <iostream>
using namespace std;

int main ()

{
    double PI = 3.141592653589793;
    double diam_pulg = 20;
    double dist_km;    
    cout << endl;
    cout << "Ingrese la distancia (km) a recorrer: " << endl;
    cin >> dist_km;
    cout << endl;
    if (dist_km < 0)
    {
        cout << "ERROR: distancia negativa" << endl;
    }
    else
    {
        double diam_cm = 2.54*diam_pulg;
        double longcirc_m = PI*diam_cm/100.0;
        double dist_m = 1000.0*dist_km;
        double revoluc = dist_m / longcirc_m;
        cout.precision(2);
        cout << fixed;
        cout << "Revoluciones (neumatico 20'' diam): " << revoluc << endl;
    }
    cout << endl;
    return 0;
}
