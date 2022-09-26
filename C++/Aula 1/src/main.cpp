#include <iostream>
using namespace std;

int main(){
float peso, altura, IMC;

cout << "Digite seu peso em kg: ";
cin >> peso;
cout << ""<< endl;    
cout << "Digite sua altura em metros: ";
cin >> altura;
cout << ""<< endl;

IMC = peso/(altura*altura);
cout <<"Seu indice de massa corporal e: " <<IMC << endl;
cout << "Voce esta ";

if (IMC < 18.5){
    cout << "abaixo do peso"<< endl;
}
else if(IMC >= 18.5 && IMC <=24.9){
    cout << "com peso normal"<< endl;
}
else if(IMC >24.9 && IMC <= 30){
    cout << "acima do peso"<< endl;
}
else{
    cout << "obeso"<< endl;
}

system("pause");

return 0;
}