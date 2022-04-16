/*Escriba un programa para ingresar tres valores de doble precisión A, B y C en ese orden. El programa debe
imprimir los valores en el orden inverso, es decir C, B y A. Agregue mensajes descriptivos para que el
usuario entienda como usar correctamente el programa*/

#include <iostream>
using namespace std;

int main()

    {
        double A, B, C;
        cout << endl << "Este programa recibe 3 numeros A, B y C, imprimiendo C, B y A" << endl;
        cout << endl << "Ingrese el número A: " << endl;
        cin >> A;
        cout << "Ingrese el número B: " << endl;
        cin >> B;
        cout << "Ingrese el número C: " << endl;
        cin >> C;
        cout << endl << "Numero C ingresado: " << C << endl;
        cout << "Numero B ingresado: " << B << endl;
        cout << "Numero A ingresado: " << A << endl;
        cout << endl << "FIN DEL PROGRAMA" << endl << endl;
        return 0;
    }
