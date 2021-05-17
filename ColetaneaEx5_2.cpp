#include<iostream>
#include<cstring>
using namespace std;
string frase;
int main(){
	cout << "Insira uma frase ou palavra: ";
	cin >> frase;	
	cout << "Frase normal: \n" << frase << "\n";
	int tamanho_frase = frase.length();
	int i;
	cout << "Frase invertida: \n";
	for (i = tamanho_frase-1; i >= 0; i--){
		cout << frase[i];
	}
}
