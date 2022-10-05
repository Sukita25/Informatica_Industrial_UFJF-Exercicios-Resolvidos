#include "banco.h"
#include <iostream>
#include <string>

using namespace std;


Banco::Banco() //O construtor criara 4 contas
{
    this->contas = new Conta[4];
    this->contas[0] = Conta(1234, 1, "Joao", "Corrente", 300);
    this->contas[1] = Conta(4567, 2, "Jose", "Poupanca", 800);
    this->contas[2] = Conta(7890, 3, "Maria", "Corrente", 1000);
    this->contas[3] = Conta(8956, 4, "Madalena", "Poupanca", 2000);
    this->senhaF = 1234;
    this->Controle = 3;
    this->Controle2 = 4;
    this->Controle3 = 4;
}

Banco::~Banco()
{
    delete[] this->contas;
}

Conta *Banco::buscaConta(int numero)//Retorna o endereço da conta que possuir o mesmo numero informado
{
    for (int i = 0; i < this->Controle3; i++)
    {
        if (numero == this->contas[i].numero)
        {
            return &this->contas[i];
        }
    }

    return nullptr;
}

void Banco::atendimento() //Realiza o atendimento ao cliente(Função chamada na main)
{
    Conta *contaCliente;
    int numC = 0;
    int senhain;
    bool atendimento = true;
    bool atendimento2 = true;
    int op;

    cout << "Bem vindo ao sistema de atendimento do banco" << endl;
    while(atendimento2){
        atendimento = true;
        cout << "Digite o numero da sua conta(Digite 0 caso deseje entrar como funcionario): ";
        cin >> numC;
        if (numC == 0){
            cout << "Digite a senha de funcionario para realizar o Logging" << endl;
            cin >> senhain;

            if(senhain == this->senhaF){
                cout << "Senha de funcionario aceita, Digite 1) RegisterConta , 2) Excluir conta, 3) Sair"<<endl;
                cin >>op;
            }
            else{
                cout << "Senha de funcionario invalida"<<endl;
                op =3;
            }

            switch (op) {
                case 1:
                    this->RegisterConta();
                    break;
                
                case 2:
                    cout << "Digite o numero da conta que deseja excluir: " << endl;
                    cin >>op;
                    this->ExcluirConta(op);
                    break;
                default:
                    atendimento2 = false;
                    break;
            }
            }
        else{
            contaCliente = this->buscaConta(numC); //Chama o Metodo buscaConta() do banco para achar o objeto conta que possui o numero numC

            if (contaCliente == nullptr)//Se não achar nenhuma conta que corresponda entra nesse if
            {
                cout << "Conta invalida" << endl;
            }
            else
            {
                cout << "Digite a sua senha: ";
                cin >> senhain;

                if (contaCliente->validaSenha(senhain))
                {
                    cout << "Ola " << contaCliente->titular << endl;
                    while (atendimento) //Realiza o atendimento
                    {
                        double valor;
                        cout << "Qual operacao deseja fazer? (1 - Saque, 2 - Deposito, 3 - Ver Saldo, 4 - Tranferencia ,5 - Sair): ";
                        cin >> op;
                        switch (op)
                        {
                        case 1:
                            cout << "Digite o valor: ";
                            cin>>valor;
                            contaCliente->saque(senhain,valor);
                            break;
                        case 2:
                            cout << "Digite o valor: ";
                            cin>>valor;
                            contaCliente->deposito(valor);
                            break;
                        case 3:
                            cout << "Saldo: R$ "<<contaCliente->getSaldo(senhain)<<endl;
                            break;
                        case 4:
                            cout << "Digite o valor a ser tranferido: ";
                            cin>>valor;
                            cout << ""<< endl;
                            cout << "Digite o numero da conta de deposito: ";
                            cin >> numC;
                            cout << ""<< endl;
                            contaCliente->Tranferencia(senhain,valor,this->buscaConta(numC));
                            break;
                        case 5:
                            atendimento = false;
                            break;
                        }
                    }
                }
                else
                {
                    cout << "Senha invalida" << endl;
                }
            }
        }
    }
}

void Banco::RegisterConta(){
    int senha;
    int numero;
    string titular;
    string tipo;
    double saldo;

    cout << "Digite a senha da Nova conta: ";
    cin >> senha;
    cout << ""<< endl;

    numero = ++this->Controle2;

    cout << "Digite o titular da Conta: ";
    cin >> titular;
    cout << ""<< endl;

    cout << "Digite o tipo da Conta: ";
    cin >> tipo;
    cout << ""<< endl;

    cout << "Digite o saldo da Conta: ";
    cin >> saldo;
    cout << ""<< endl;

    if (this->IsFull()){
        this->Aumenta();
    }
    this->contas[++this->Controle] = Conta(senha,numero,titular,tipo,saldo); 
    cout << "Conta de numero: "<<numero<< " criada"<<endl;
}

void Banco::ExcluirConta(int num){
    for(int i = 0; i < this->Controle3; i++){
        if(this->contas[i].numero == num){
            this->contas[i].numero = 0;
            break;
        }
    }
    this->Arrange();
    cout << "Conta Excluida com sucesso"<<endl;
}
void Banco::Arrange(){
    int a =0;
    this->PiArrage = this->contas;
    this->contas = new Conta[this->Controle3];
    for(int i = 0; i < this->Controle3;i++){
        if(this->PiArrage[i].numero != 0){
            this->contas[a] = this->PiArrage[i];
            ++a;
        }
    }
    --this->Controle;
    --this->Controle3;
    delete[] this->PiArrage;
}

bool Banco::IsFull(){
    if(this->Controle+1 >= this->Controle3){
        return true;
    }
    else{
        return false;
    }
}

void Banco::Aumenta(){
    this->PiArrage = this->contas;
    this->contas = new Conta[this->Controle3+5];
    for(int i = 0; i < this->Controle3;i++){
        this->contas[i] = this->PiArrage[i];
    }

    this->Controle3=this->Controle3 +5;
    delete[] this->PiArrage;
}
