#include <iostream>
#include "mymath.h"

using namespace std;

int main(){
cout << "y(25) = "<<Y(25) << endl;
cout << "y(7!) = "<<Y(Factorial(7)) << endl;
cout << "y(2.5^3) = "<<Y(potencia(2.5,3)) << endl;

system("pause");
return 0;
}