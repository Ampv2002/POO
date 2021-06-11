#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	char op;
	int resultado;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Introduza a operacao a executar (+ , - ,* ou /): ";
	cin >> op;
	resultado = 0;
	if (op == '+'){
		resultado = num1 + num2;
		cout << num1 << " + " << num2 << " = "<< resultado;
	}
	else if (op=='-'){
		resultado = num1 - num2;
		cout << num1 << " - " << num2 << " = "<< resultado;
	}
	else if (op=='*'){
		resultado = num1 * num2;
		cout << num1 << " * " << num2 << " = "<< resultado;
	}
	else if (op=='/'){
		resultado = num1 / num2;
		cout << num1 << " / " << num2 << " = "<< resultado;
	}
	else{
		cout << "Operacao invalida";
	}
}
