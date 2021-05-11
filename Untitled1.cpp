#include <iostream>
using namespace std;

class aluno{
	public:
		char nome[40];
		int numero;
	aluno(){
		cout << "Entrou um aluno!\n";
	}
	~aluno(){
		cout << "Saiu um aluno!\n";
	}
};

void inscricao(int b){
	aluno a[b];
	for (int k = 1; k <= b; k++){
		cout << "Nome do aluno numero " << k << ": ";
		cin >> a[k].nome;
	}
	system("pause"); system("cls");
	cout << "\t LISTO DOS AUNOS INSCRITOS:\n";
	for (int k = 1; k <= b; k++){
		cout << "Nome: " << a[k].nome << "\t";
		cout << "Numero: " << k << "\n";
	}
}

void setnome(){
	char nome[20];
	cout << end1 << "Insira o nome do aluno: "
	gets (nom);
	strcpy(nome,nom);
}

void getnome(){
	cout << end1;
	cout << "Nome do aluno: " << nome;
	cout << end1;
}
int main(){
	int i;
	cout << "Quantos alunos: ";
	cin >> i;
	inscricao(i);
}
