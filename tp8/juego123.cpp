#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int numJugUsr, numJugPc, difAux;
    string strJugPc, resultado;
    cout << endl << "PIEDRA, PAPEL O TIJERA: USUARIO vs PC" << endl;
    cout << "REGLAS: Perdedor <--- Ganador" << endl;
    cout << "Piedra (1) <--- Papel (2) <--- Tijera (3) <--- Piedra (1)" << endl;
    cout << endl << "Ingrese el número de su jugada: ";
    cin >> numJugUsr;
    if (numJugUsr < 1 || numJugUsr > 3)
    {
        cout << endl << "ERROR: Jugada invalida" << endl;
        return 10;
    }
    srand(time(0));
    numJugPc = 1 + rand()%3;
    if (numJugPc == 1)      strJugPc = "Piedra";
    else if (numJugPc == 2) strJugPc = "Papel" ;    
    else                    strJugPc = "Tijera";
    difAux = numJugPc - numJugUsr;
    cout << endl << "PC jugó: " << strJugPc << endl;
    // CASOS: {numJugUsr - numJugPc} (3x3 = 9 opciones) ---> reducidos a 3 condic.//
    //{1-1, 2-2, 3-3}
    if (difAux == 0)                        resultado = "EMPATE  x_x";
    //{1-3, 2-1, 3-2}
    else if (difAux == 2 || difAux == -1)   resultado = "GANASTE  :)";
    //{1-2, 2-3, 3-1}
    else                                    resultado = "PERDISTE :(";
    cout << endl << resultado << endl;
    return 0;
}
