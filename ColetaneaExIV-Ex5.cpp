#include <iostream>
using namespace std;
int num;

ordem_crescente(){
	cout << "Ordem crescente: \n";
	for(int i = 0; i<=num; i++){
		cout << i << "\n";
	}
}

ordem_decrescente(){
	cout << "Ordem decrescente: \n";
	for(int j = num; j>=0; j--){
		cout << j << "\n";
	}
}

main () {
	cout<<"Digite um numero inteiro: ";
	cin>>num;
	ordem_crescente();
	cout <<"\n";
	ordem_decrescente();
}
