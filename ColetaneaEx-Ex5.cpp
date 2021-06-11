#include <iostream>
using namespace std;
int main(){
	int nota1;
	int nota2;
	float media;
	cout<<"Digite o valor da primeira nota:";
	cin >> nota1;
	cout<<"Digite o valor da segunda nota:";
	cin >> nota2;
	media = ((nota1 + nota2)/2);
	if (media >= 9.5){
		cout << "Aluno aprovado com media: " << media;
	}
	else{
		cout << "Aluno reprovado com media: " << media;
	};
}
