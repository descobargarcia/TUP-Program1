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

int main()
{
    int meses;
    float deposito, intereses, retorno, tasa_mensual;    
    cout << endl << "BIENVENIDO AL BANCO!" << endl;
    cout << "Ingrese el monto (pesos) a depositar: ";
    cin >> deposito;
    if (deposito <=0)
    {
        cout << endl << "Deposito invalido" << endl;
    }
    else
    {
        cout << "Ingrese los meses del plazo (3, 6 o 12): ";
        cin >> meses;
        if ((meses != 3) && (meses !=6) && (meses != 12))
        {
            cout << endl << "Plazo invalido" << endl;
        }
        else 
        {   
            if (deposito <= 1000 && meses == 3)
            {
                tasa_mensual = 0.02;
            }
            else if (deposito <=1000 && meses !=3) 
            {
                tasa_mensual = (meses == 6) ? 0.03 : 0.04;
            }
            else if (deposito <= 10000 && meses == 3)
            {
                tasa_mensual = 0.03;
            }
            else if (deposito <= 10000 && meses !=3) 
            {
                tasa_mensual = (meses == 6) ? 0.04 : 0.05;
            }
            else if (deposito > 10000 && meses !=3)
            {
                tasa_mensual = 0.04;
            }
            else
            {
                tasa_mensual = (meses == 6) ? 0.05: 0.06;
            }
            intereses = deposito*meses*tasa_mensual;
            retorno = deposito + intereses;
            cout << endl << "Su retorno al final del plazo sera: ";
            cout.precision(2);
            cout << fixed;
            cout << retorno << " pesos" << endl;
        }
    }
    return 0;
}
