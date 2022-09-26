#include <iostream>
using namespace std;


void funca(char* nome,int &i){
for(nome;*nome != 0;nome++){
        i++;
    }
}


void invertenome(char* nome){
    int i=0;
    funca(nome,i);
    nome+=i;
    for(i;i > 0;i--){
        nome--;
        cout<<*nome;
    }
    cout<<"\n"<<endl;
}

int main(){
    char nome[30];
    cout<<"Digite seu nome"<<endl;
    cin >> nome;
    invertenome(nome);
   
return 0;
}