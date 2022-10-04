#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

#define NUMCONTAS 100 //Define que a palavar NUMCONTAS passa a valer como escrever 100

class Banco
{
private:
    Conta * contas;
    Conta * PiArrage;
    int senhaF;
    int Controle;
    int Controle2;
    int Controle3;
    void RegisterConta();
    void ExcluirConta(int Num);
    void Arrange();
    bool IsFull();
    void Aumenta();
public:
    Banco();
    ~Banco();
    Conta* buscaConta(int numero); //Metodo que retorna o endereço do objeto conta que possui o mesmo numero informado
    void atendimento();
};


#endif
