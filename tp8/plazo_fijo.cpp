/*************************************************************************************
Problema 1. Calculador de plazos fijos. Un banco debe calcular la tasa de interés que 
aplica a un plazo fijo. El gerente decide aplicar la siguiente tabla. Escriba un programa 
que pregunte por el monto a depositar y el plazo para luego escribir el valor final 
(deposito más interés) que el banco debe entregar al cliente.

Deposito                    3 meses     6 meses     12 meses
Hasta 1000 pesos            2% mensual  3% mensual  4% mensual
Entre 1000 y 10000 pesos    3% mensual  4% mensual  5% mensual
Mas de 10000 pesos          4% mensual  5% mensual  6% mensual

Nota: Debe resolverse utilizando el operador && y la estructura if-else if-else
**************************************************************************************/

#include <iostream>
using namespace std;

const float DEPL1 = 1000.0, DEPL2 = 10000.0;

int main()
{
    int meses;
    float dep, intereses, retorno, tasaMens;    
    cout << endl << "BIENVENIDO AL BANCO!" << endl;
    cout << "Ingrese el monto (pesos) a depositar: ";
    cin >> dep;
    if (dep <=0)
    {
        cout << endl << "*Deposito invalido*" << endl;
        return 10;
    }
    cout << "Ingrese los meses del plazo fijo (3, 6 o 12): ";
    cin >> meses;
    if (meses != 3 && meses !=6 && meses != 12)
    {
        cout << endl << "*Plazo invalido*" << endl;
        return 20;
    } 
    //Primer rango de depositos
    if      (dep <= DEPL1 && meses == 3)    tasaMens = 0.02; 
    else if (dep <= DEPL1 && meses == 6)    tasaMens = 0.03;
    else if (dep <= DEPL1 && meses == 12)   tasaMens = 0.04;
    //Segundo rango de depositos
    else if (dep <= DEPL2 && meses == 3)    tasaMens = 0.03;
    else if (dep <= DEPL2 && meses == 6)    tasaMens = 0.04;
    else if (dep <= DEPL2 && meses == 12)   tasaMens = 0.05;
    //Tercer rango de depositos
    else if (dep >  DEPL2 && meses == 3)    tasaMens = 0.04;
    else if (dep >  DEPL2 && meses == 6)    tasaMens = 0.05;
    else                                    tasaMens = 0.06;
    //Calculos finales
    intereses = dep*meses*tasaMens;
    retorno = dep + intereses;
    //Impresion
    cout << endl << "*Al final del plazo, su retorno sera: ";
    cout.precision(2);
    cout << fixed;
    cout << retorno << " pesos*" << endl;
    return 0;
}
