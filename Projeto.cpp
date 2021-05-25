#include <iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
using namespace std;

class produto{
	private:
		float preco;
		int quantidade;
		int posicao;
	public:
		char nome[40];
		void setpreco (float p) {
			preco = p;
		}
		float getpreco(){
			return preco;
		}
		void setquantidade (int q){
			quantidade = q;
		}
		int getquantidade() {
			return quantidade;
		}
		void setposicao(int po){
			posicao = po;
		}
		int getposicao(){
			return posicao;
		}
};

void stock (int a){
	int stock_inicial = 2;
	float preco_introduzido;
	produto p[a];
	for (int k = 1; k <= a; k++){
		p[k].setposicao(k);
		cout << "Nome do produto numero " << k << ": ";
		cin >> p[k].nome;
		p[k].setquantidade(stock_inicial);
		cout << "Defina o preco: ";
		cin >> preco_introduzido;
		p[k].setpreco(preco_introduzido);
	}
	for (int i = 1; i <= a; i++){
		cout << "Nome do produto " << i << ": " << p[i].nome << "\n";
		cout << "Preco do produto " << i << ": " << p[i].getpreco() << "\n";
		cout << "Posicao: " << p[i].getposicao() << "\n";
		cout << "Stock do produto" << i << ": " << p[i].getquantidade() <<"\n";
	}
}

main(){
	int qtd;
	cout << "Insira a quantidade de produtos a inserir: ";
	cin >> qtd;
	stock(qtd);
}
