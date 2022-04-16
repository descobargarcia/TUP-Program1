#include <iostream>     
#include <iomanip>      
using namespace std;
int main () 

{
    cout << "The number printed with width 10"<<endl;
    cout << setw(10);
    cout << 77 << endl;

    cout << "The number printed with width 2"<<endl;
    cout << setw(2);
    cout << 10 << endl;

    cout << "The number printed with width 5"<<endl;
    cout << setw(5);
    cout << 25 << endl;
    return 0;
}