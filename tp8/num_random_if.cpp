#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int num1, num2, num3, num4, nMax;
    srand(time(0));
    //Al dividir por 1000, el modulo será un entero entre 0 y 999
    num1 = rand() % 1000; 
    num2 = rand() % 1000; 
    num3 = rand() % 1000; 
    num4 = rand() % 1000;
    if (num1 >= num2 && num1 >= num3 && num1 >= num4) nMax = num1;
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4) nMax = num2;
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4) nMax = num3;
    else nMax = num4;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "nMax = " << nMax << endl;
    return 0;
}
