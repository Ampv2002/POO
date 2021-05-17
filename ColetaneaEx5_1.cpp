#include<iostream>
#include<cstring>
using namespace std;
string frase;
int main(){
	cout << "Digite a palavra: ";
	cin>> frase;
	int tamanho_frase = frase.length();
	if (tamanho_frase <= 4){
		cout << "Palavra pequena!";
	}
	else if (tamanho_frase > 4 || tamanho_frase <=8){
		cout << "Palavra de tamanho medio!";
		cout <<"\n";

	}
	else{
		cout <<"Palavra grande!";
		cout <<"\n";

	}
}
