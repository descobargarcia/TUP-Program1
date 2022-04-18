/************************************************************************************* 
Problema 2. Dado dos puntos en el plano (con coordenadas reales no enteras) P1(x1,y1)
y P2(x2,y2). Decir cuál es el que se encuentra más cerca del origen.
Ingresar todos los valores por terminal.
*************************************************************************************/

#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cout << "Este programa compara las coordenadas de dos puntos P1 y P2" << endl;
    cout << "y decide cuál está más cerca del origen del plano cartesiano" << endl;
    cout << endl;
    cout << "Ingrese las coordenadas (X1, Y1) del punto P1" << endl;
    cout << "X1 = " << endl;
    cin >> x1;
    cout << "Y1 = " << endl;
    cin >> y1;
    cout << endl;
    cout << "Ingrese las coordenadas (X2, Y2) del punto P2" << endl;
    cout << "X2 = " << endl;
    cin >> x2;
    cout << "Y2 = " << endl;
    cin >> y2;
    float dP1 = sqrt(x1 * x1 + y1 * y1);
    float dP2 = sqrt(x2 * x2 + y2 * y2);
    float dMin = min(dP1, dP2);
    string resp = (dP1 == dP2) ? "P1, P2. " : ((dMin == dP1) ? "P1. " : "P2. ");
    cout << endl << "Punto(s) mas cercano(s) al origen: " << resp << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Distancia: " << dMin << endl;
    cout << endl;
    return 0;
}
