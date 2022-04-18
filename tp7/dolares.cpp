/*Problema 4. Una persona tiene almacenada en un banco una cierta cantidad de 
dinero almacenada en una variable “saldo” y desea adquirir una cierta cantidad 
de dólares. El banco solo admite la operación entre las 9 y las 15 horas, y de 
poder hacerse si el cliente tiene suficiente cantidad de dinero en su cuenta 
(puede considerar una taza de cambio fija o ingresada por el usuario). Escriba 
un programa que produzca una de las siguientes salidas:
• No tiene fondos suficientes.
• No se encuentra en el horario de cambio del banco (9:00 a 15 horas)
• Transacción realizada. Ud. compró …. dólares a …. pesos c/u. 
    Su saldo remanente es: ……*/

#include <iostream>
#include <string>
using namespace std;

const float HMIN = 9, HMAX = 15;
const float TASA_ARS_USD = 120;

int main ()
{
    float hora;
    cout << endl << "BIENVENIDO AL BANCO!" << endl;
    cout << "Ingresar hora de la operacion (formato 24.00 Hs): ";
    cin >> hora; 
    if (hora < HMIN || hora > HMAX)
    {
        string Msj0 = "Fuera del horario de atencion del banco (9.00 - 15.00 Hs)"; 
        cout << endl << Msj0 << endl;
    }
    else
    {
        float saldoARS, compraUSD, maxUSD;
        cout << endl << "Ingrese su saldo en ARS: ";
        cin >> saldoARS;
        cout << "Ingrese el monto a comprar de USD: ";
        cin >> compraUSD;
        maxUSD = saldoARS / TASA_ARS_USD;
        if (compraUSD > maxUSD)
        {
            cout << endl << "No tiene fondos suficientes"; 
        }
        else
        {
            saldoARS = saldoARS - compraUSD*TASA_ARS_USD;
            string Msj1 = "Transaccion realizada. Ud compro ";
            string Msj2 = " dolares a ";
            string Msj3 = " pesos c/u. Su saldo remanente es: ";
            cout.precision(2);
            cout << fixed;
            cout << endl << Msj1 << compraUSD << Msj2 << TASA_ARS_USD; 
            cout << Msj3 << saldoARS << " ARS." << endl;
        }
    }
    cout << endl; 
    return 0;
}
