#include <iostream>
using namespace std;
main(){
	int num;
	cout << "Insira um numero entre 1 e 10: ";
	cin >> num;
	while (num < 1 || num > 10){
		cout << "O numero nao cumpre os requesitos!\nInsira um numero entre 1 e 10: ";
		cin >> num;
	}
	cout << "Numero inserido: " << num;
}
