#include<iostream>
using namespace std;

int funcao1(int a, int b){
	int divisao = a / b;
	return divisao;
}

int funcao2(int a, int b){
	int resto = a % b;
	return resto;
}

main(){
	int num1, num2;
	cout << "Introduza o numero 1: ";
	cin >> num1;
	cout << "Introduza o numero 2: ";
	cin >> num2;
	cout << "\n";
	while (num2<=0){
		cout << "O numero 2 nao pode ser 0, introduze outro: ";
		cin >> num2;
	}
	cout << "Resultado da divisao: " << funcao1(num1,num2);
	cout << "\nResto da divisao inteira: " << funcao2(num2,num2);
}
