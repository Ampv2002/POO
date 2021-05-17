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

int main(){
	int i;
	cout << "Quantos alunos: ";
	cin >> i;
	inscricao(i);
}
