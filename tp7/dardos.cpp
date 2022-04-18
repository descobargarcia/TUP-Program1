/* Prob 2. En un juego de dardos muy básico, se le asigna 100 puntos si 
el dardo cae dentro de un circulo de radio 5 y 0 puntos si cae afuera. 
Simular el lanzamiento de un dardo ingresando los valores de x e y (que 
pueden ser positivos o negativos) del lugar de impacto del dardo. El 
programa debe indicar el puntaje que el dardo ha obtenido.*/

#include <iostream>
using namespace std;

const float R = 5.0;

int main()
{
    
    float x, y; 
    cout << endl;
    cout << "Ingrese las coordenadas (x, y) del dardo" << endl;
    cout << "X= " << endl;
    cin >> x; 
    cout << "Y= " << endl;
    cin >> y; 
    //Operador condicional terciario de C++ 
    int puntaje = ((x*x + y*y) <= R*R) ? 100 : 0;
    cout << endl;
    cout << "Puntaje obtenido: " << puntaje << endl; 
    cout << endl;
    return 0;
}
