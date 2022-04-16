/* Donde el jugador nunca gana
* El jugador siempre pierde
*********************************************************/

#include <iostream>
using namespace std;

int main()

{
    cout << "Para jugar este juego debes introducir un numero entre 1 y 10\n" << endl;
    cout << "Ingrese un valor: " << endl;
    int numero;
    cin >> numero;
    cout << "Lo siento perdiste" << endl;
    cout << "Vuelva a intentar, a lo mejor tiene mas suerte!" << endl;
    cout << "No usar el numero " << numero << " otra vez" << endl;
    return 0;
}
