#include <iostream>
#include "Robo.h"
using namespace std;

int main(){

Robo R1(2,2);
Robo R2(4,4);

R1.showPos();
R2.showPos();

R1.move(3);
R2.move(3);

R1.changeSpeed(1,1);
R2.changeSpeed(7,5);

R1.move(5);
R2.move(5);
   
return 0;
}