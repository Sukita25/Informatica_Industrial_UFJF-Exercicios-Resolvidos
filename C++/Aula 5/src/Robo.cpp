#include "Robo.h"
#include <iostream>
using namespace std;

int Control = 0;

Robo::Robo(float Vx, float Vy){
    this->id = ++Control;
    this->pos[0] = 0;
    this->pos[1] = 0;
    this->speed[0] = Vx;
    this->speed[1] = Vy;
}


void Robo::showPos(){
    cout <<"Posicao de X: " <<this->pos[0] << "  Posicao de Y: " <<this->pos[1] << "  do Robo: "<<this->id<<endl;
}

void Robo::move(float t){
    this->pos[0] = this->pos[0] + this->speed[0]*t;
    this->pos[1] = this->pos[1] + this->speed[1]*t;
    cout<<"Movimento Realizado do Robo: "<<this->id<<endl;
    this->showPos();
    cout <<""<<endl;
}

void Robo::changeSpeed(float x, float y){
    this->speed[0] = x;
    this->speed[1] = y;
    cout <<"Velocidade foi trocada do Robo: "<<this->id<<endl;
    cout <<""<<endl;
}