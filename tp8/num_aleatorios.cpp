#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int num1, num2, num3, num4, nMayor12, nMayor34, nMax;
    srand(time(0));
    //Al dividir por 6, el modulo será un entero entre 0 y 5
    num1 = rand() % 1000; 
    num2 = rand() % 1000; 
    num3 = rand() % 1000; 
    num4 = rand() % 1000;
    nMayor12 = max (num1, num2);
    nMayor34 = max (num3, num4);
    nMax = max (nMayor12, nMayor34);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "nMax = " << nMax << endl;
    return 0;
}
