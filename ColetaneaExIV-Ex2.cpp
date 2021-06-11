#include <iostream>
#include <math.h>
using namespace std;
main(){
	int num1,num2,num3;
	cout << "Insira o primeiro numero:";
	cin >> num1;
	cout << "Insira o segundo numero:";
	cin >> num2;
	cout << "Insira o terceiro numero:";
	cin >> num3;
	if(num1 > num2 & num1 > num3){
		cout << "O maior valor e: " << num1;
	}
	else if(num2 > num1 & num2 > num3){
		cout << "O maior valor e: " << num2;
	}
	else if (num3 > num1 & num3 > num2){
		cout << "O maior valor e: " << num3;
	}
	else{
		cout << "Ha dois ou mais valores maiores";
	}
}
