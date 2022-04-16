#include <iostream>     
#include <iomanip>      
using namespace std;
int main () 
{
  double float_value =3.14159;
  cout << setprecision(4) << float_value << '\n';
  cout << setprecision(9) << float_value << '\n';
  cout << fixed;
  cout << setprecision(5) << float_value << '\n';
  cout << setprecision(10) << float_value << '\n';
  return 0;
}
