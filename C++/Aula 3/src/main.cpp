#include <iostream>
#include <iomanip>
#define M 999999
#define Espace 12
using namespace std;

int main(){
int VetRandom[10];
int Vet[10]={M,M,M,M,M,M,M,M,M,M};
int Control = 0;

cout<<"Vetor Aleatorio"<<endl;

for(int i=0;i<10;i++){
    VetRandom[i]=rand();
    cout<<setw(Espace)<<i<<setw(Espace)<<VetRandom[i]<<endl;
}

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if (VetRandom[j]<Vet[i]){
            Vet[i] = VetRandom[j];
            Control = j;
        }
    }
    VetRandom[Control] = M;
}

cout<<"Segundo vetor organizado"<<endl;

for(int i=0;i<10;i++){
    cout<<setw(Espace)<<i<<setw(Espace)<<Vet[i]<<endl;
}


system("pause");
return 0;
}