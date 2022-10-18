#include <iostream>
#include "Robo.h"
using namespace std;

void ExecutaMovimento(Robo* robot){
    double x,y,z,t;
    x = rand();
    y = rand();
    z = rand();
    t = rand();
    cout<<"Velocidade X: "<<x<<endl;
    cout<<"Velocidade Y: "<<y<<endl;
    cout<<"Velocidade Z: "<<z<<endl;
    cout<<"Tempo: "<<t<<endl;
    robot->Move(x,y,z,t);
}

int main()
{
    Quadricopitero Q;
    RoboTerrestre T;

    ExecutaMovimento(&Q);
    ExecutaMovimento(&T);

    return 0;
}
