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
#include <ctime>
using namespace std;

int main()
{
    int dado;
    srand(time(0));
    /*al dividir por 6, el modulo será un entero entre 0 y 5*/
    dado = 1 + rand() % 6; 
    cout << " _____________ " << endl;
    cout << "|             |" << endl;
    cout << "|             |" << endl;
    cout << "|      " << dado << "      |" << endl;
    cout << "|             |" << endl;
    cout << "|_____________|" << endl;
    return 0;
}
