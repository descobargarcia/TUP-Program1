#include <iostream>     
#include <iomanip>      
using namespace std;
int main () 

{
    double manz, peras, total;
    cout << endl << "Ingrese el monto de compra de manzanas (pesos): " << endl;
    cin >> manz;
    cout << "Ingrese el monto de compra de peras (pesos): " << endl;
    cin >> peras;
    total = manz + peras;
    cout << " " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "           TICKET DE COMPRAS           " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "EMPRESA: Valle-F-Ruta" << endl;
    cout << "COMPRA: " << endl;
    cout.precision(2);
    cout << fixed << setfill (' ');
    cout << setw(20) << "Manzanas: $ " << setw(8) << manz << endl;
    cout << setw(20) << "Peras: $ " << setw(8) << peras << endl;
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
    cout << setw(20) << "TOTAL: $ " << setw(8) << total << endl;
    cout << " " << endl;
    return 0;
}
