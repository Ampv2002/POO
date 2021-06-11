#include <iostream>
using namespace std;
main () {
	int num1;
	int num2;
	cout<<"Digite um numero inteiro: ";
	cin>>num1;
	cout<<"Digite outro numero inteiro: ";
	cin>>num2;
	if (num1 > num2){
		cout << "Numeros entre " << num2 << " e " << num1 << ":\n";
		for(int i = num2; i<=num1; i++){
			cout << i << "\n";
		}
	}
	else if (num1 == num2){ 
		cout << "Os numeros sao iguais. Logo o unico numero entre os dois e: " << num1;
	}
	else{
		cout << "Numeros entre " << num1 << " e " << num2 << ":\n";
		for(int j = num1; j<=num2; j++){
			cout << j << "\n";
		}
	}

}
