/*****************************************************************************
 Problema 5. Reescribir el siguiente código utilizando el operador condicional 
de C++:

    if ( temperatura >= 30.0 )
    {
        cout << “Hace calor!” << endl;
    }
        else
    {
        cout << “Hermoso día!” << endl;
    }
******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    float temperatura;
    cout << endl << "Ingrese la temperatura (Celsius) del dia: ";
    cin >> temperatura;
    string clima = (temperatura >= 30.0) ? "Hace calor!" : "Hermoso dia!";
    cout << endl << clima << endl;
    return (0);
}
