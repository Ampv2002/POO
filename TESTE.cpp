#include <iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
using namespace std;

class pessoa{
	public:
		char nome[40];
		int idade;
}p1;

main(){
	cout << "Introduza o seu nome: "; gets(p1.nome);
	cout << "Introduza a sua idade: "; cin >> p1.idade;
	system("cls");
	cout << "Nome: " << p1.nome << "\n";
	cout << "Idade: " << p1.idade << "\n";
	system("pause");
}
