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
    double horas_semana, horas_extra, horas_norm;
    double impuestos, salario_bruto, salario_neto;
    cout << endl; 
    cout << "Ingrese las horas semanales trabajadas: " << endl;
    cin >> horas_semana; 
    cout << endl; 
    if (horas_semana < 0)
    {
        cout << "ERROR: la cantidad de horas no puede ser negativa" << endl;
    }
    else 
    {
        if (horas_semana < 38)
        {
            horas_norm = horas_semana;
            horas_extra = 0;
        }
        else
        {
            horas_norm = 38;
            horas_extra = horas_semana - horas_norm;
        }
        salario_bruto = horas_norm*100 + horas_extra*100*1.50;
        if (salario_bruto <= 3000)
        {
            impuestos = 0;
        }
        else
        {
            impuestos = 0.10*salario_bruto;
        }
        salario_neto = salario_bruto - impuestos;
        cout.precision(2);
        cout << fixed;
        cout << "Horas normales: " << horas_norm << endl;
        cout << "Horas extra: " << horas_extra << endl;
        cout << "Impuestos semanales (pesos): " << impuestos << endl;
        cout << "Salario neto semanal (pesos): " << salario_neto << endl;
    }
    cout << endl;
    return 0; 
}
