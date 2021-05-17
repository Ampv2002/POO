#include <iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
using namespace std;

class pessoa{
	private:
		char nome[40];
		int num_aluno;
		float nota_esperada;
	get_numero(){
		set num_aluno;
	}
	setnumero(int n){
		num_aluno = n;
	}
}aluno1;

main(){
	cout << "Introduza o nome do aluno: "; gets(aluno1.nome);
	cout << "Introduza o numero do aluno: "; cin >> aluno1.num_aluno;
	cout << "Introduza a nota esperada: "; cin >> aluno1.nota_esperada;
	system("cls");
	cout << "Nome do aluno: " << aluno1.nome << "\n";
	cout << "Numero do aluno: " << aluno1.num_aluno << "\n";
	cout << "Nota esperada: " << aluno1.nota;
	system("pause");
}
