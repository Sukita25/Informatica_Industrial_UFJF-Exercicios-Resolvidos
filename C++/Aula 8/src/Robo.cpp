#include "Robo.h"
#include <iostream>

using namespace std;

Robo::~Robo(){}

double Robo::getPosicaoAtual(char cordenada){
    cout<<"Posicao em "<<cordenada<<": ";
    switch (cordenada)
    {
    case 'x':
        cout << this->PosicaoAtual[0]<<endl;
        break;
    case 'X':
        cout << this->PosicaoAtual[0]<<endl;
        break;
    case 'y':
        cout << this->PosicaoAtual[1]<<endl;
        break;
    case 'Y':
        cout << this->PosicaoAtual[1]<<endl;
        break;
    case 'z':
        cout << this->PosicaoAtual[2]<<endl;
        break;
    case 'Z':
        cout << this->PosicaoAtual[2]<<endl;
        break;
    default:
        cout << "Posicao invalida" << endl;
        break;
    }
}

void Robo::setPosicaoAtual(double x, double y, double z){
    this->PosicaoAtual[0] = x;
    this->PosicaoAtual[1] = y;
    this->PosicaoAtual[2] = z;
}

RoboTerrestre::RoboTerrestre(){
    this->setPosicaoAtual(0,0,0);
}

RoboTerrestre::~RoboTerrestre(){}

void RoboTerrestre::Move(double Xvel, double Yvel, double Zvel, double tempo){
    cout <<"Posicao do RoboTerrestre antes do Movimeto:"<< endl;
    this->getPosicaoAtual('x');
    this->getPosicaoAtual('y');
    this->getPosicaoAtual('z');
    this->PosicaoAtual[0] = PosicaoAtual[0] + Xvel * tempo;
    this->PosicaoAtual[1] = PosicaoAtual[1] + Yvel * tempo;
    cout <<"Posicao do RoboTerrestre depois do Movimeto:"<< endl;
    this->getPosicaoAtual('x');
    this->getPosicaoAtual('y');
    this->getPosicaoAtual('z');
    cout <<"\n";
    //return true;
}

Quadricopitero::Quadricopitero(){
    this->setPosicaoAtual(0,0,0);
}

Quadricopitero::~Quadricopitero(){}

void Quadricopitero::Move(double Xvel, double Yvel, double Zvel, double tempo){
    cout <<"Posicao do Quadricopitero antes do Movimeto:"<< endl;
    this->getPosicaoAtual('x');
    this->getPosicaoAtual('y');
    this->getPosicaoAtual('z');
    this->PosicaoAtual[0] = PosicaoAtual[0] + Xvel * tempo;
    this->PosicaoAtual[1] = PosicaoAtual[1] + Yvel * tempo;
    this->PosicaoAtual[2] = PosicaoAtual[2] + Zvel * tempo;
    cout <<"Posicao do Quadricopitero depois do Movimeto:"<< endl;
    this->getPosicaoAtual('x');
    this->getPosicaoAtual('y');
    this->getPosicaoAtual('z');
    cout <<"\n";
    //return true;
}