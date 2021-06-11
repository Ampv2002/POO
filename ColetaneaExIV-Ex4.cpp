#include <iostream>
using namespace std;
main () {
	int num;
	cout<<"Digite um numero inteiro entre 0 e 3: ";
	cin>>num;	
	
	switch(num){
		case 0:
			cout <<"Numero introduzido: Zero";
			break;
		case 1:
			cout <<"Numero introduzido: Um";
			break;
		case 2:
			cout <<"Numero introduzido: Dois";
			break;
		case 3:
			cout <<"Numero introduzido: Tres";
			break;
		default:
			cout <<"Numero invalido!";
	}
}
