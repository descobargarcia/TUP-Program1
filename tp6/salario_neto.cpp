/*4. Se desea calcular el salario neto semanal de los trabajadores 
de una empresa de acuerdo con las siguientes normas:
• Horas semanales trabajadas < 38 a una tasa 100$/hora (tasa base)
• Horas extras a una tasa 50% superior (horas trabajadas a partir 
de las 38 horas base)
• Impuestos 0%, si el salario bruto es menor o igual a 3000 pesos.
• Impuestos del 10%, si el salario bruto es mayor a 3000 pesos.

Ingresar la cantidad de horas trabajadas por la persona, calcular 
horas normales y extras, y luego restar los impuestos 
correspondientes (si corresponden).*/

#include <iostream>
using namespace std;
int main()
{
    int hSem;
    cout << endl; 
    cout << "Ingrese las horas semanales trabajadas: " << endl;
    cin >> hSem; 
    cout << endl; 
    if (hSem < 0)
    {
        cout << "ERROR: la cantidad de horas no puede ser negativa" << endl;
    }
    else 
    {
        const int HMAX = 38;
        const double TASE_BASE = 100, SAL_LIM = 3000;
        const double FACTOR_EXTRA = 1.5, PORC_IMP = 0.1;
        int hNorm = min (hSem, HMAX);
        // Operador condicional ternario
        int hExtra = (hSem > HMAX) ? (hSem - hNorm) : 0;
        double salarioBruto = TASE_BASE*(hNorm + hExtra*FACTOR_EXTRA);
        double impuestos = (salarioBruto > SAL_LIM) ? PORC_IMP*salarioBruto : 0;
        double salarioNeto = salarioBruto - impuestos;
        cout.precision(2);
        cout << fixed;
        cout << "Horas normales: " << hNorm << endl;
        cout << "Horas extra: " << hExtra << endl;
        cout << "Impuestos semanales (pesos): " << impuestos << endl;
        cout << "Salario neto semanal (pesos): " << salarioNeto << endl;
    }
    cout << endl;
    return 0; 
}
