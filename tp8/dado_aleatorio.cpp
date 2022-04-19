/*************************************************************************
Problema 2. Crear un programa para tirar 1 dado y presentarlo en pantalla 
de forma vistosa. Ejemplo:
+-------+
+       +
+   *   +
+       +
+-------+

Nota: debe hacerse para los 6 valores posibles. Probar el código generando 
un número aleatorio y observando la salida correcta.
*************************************************************************/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int numDado;
    bool dadoEsPar;
    string linSup, linMed, linInf;
    srand(time(0));
    //Al dividir por 6, el modulo será un entero entre 0 y 5
    numDado = 1 + rand() % 6; 
    dadoEsPar = (numDado%2 == 0);  
    cout << " _____________ " << endl;
    cout << "|             |" << endl;
    //Definiendo linea superior e inferior
    //numDado: 4, 5 o 6
    if (numDado > 3) linSup = linInf = "|   *     *   |";
    //numDado: 1
    else if (numDado == 1) linSup = linInf = "|             |";
    //numDado: 2 o 3
    else
    {
        linSup = "|          *  |";
        linInf = "|  *          |";
    }
    //Impresion de linea superior
    cout << linSup << endl;
    //Definiendo linea media
    if (numDado == 6) linMed = linSup;
    else linMed = dadoEsPar ? "|             |" : "|      *      |";
    //Impresion de linea media e inferio
    cout << linMed << endl;
    cout << linInf << endl;
    cout << "|_____________|" << endl;
    return 0;
}
