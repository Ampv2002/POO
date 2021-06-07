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

class troco{
	private:
		float ListaMoedas[8] = {2,1,0.5,0.20,0.10,0.05,0.02,0.01};
		int arrSize = sizeof(ListaMoedas)/sizeof(ListaMoedas[0]);
		int QtdMoedas[arrSize] = {5,5,5,5,5,5,5,5};
		int RetornaMoedas[arrSize] = {0,0,0,0,0,0,0,0};
	public:
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
	cout << "\t LISTA DE PRODUTOS";
	for (int i = 1; i <= a; i++){
		cout << "Nome do produto " << i << ": " << p[i].nome << "\n";
		cout << "Preco do produto " << i << ": " << p[i].getpreco() << "\n";
		cout << "Posicao: " << p[i].getposicao() << "\n";
		cout << "Stock do produto" << i << ": " << p[i].getquantidade() <<"\n";
	}
}

void troco(float troco){
	float ListaMoedas[8] = {2,1,0.5,0.20,0.10,0.05,0.02,0.01};
	int arrSize = sizeof(ListaMoedas)/sizeof(ListaMoedas[0]);
	int QtdMoedas[arrSize] = {5,5,5,5,5,5,5,5};
	int RetornaMoedas[arrSize] = {0,0,0,0,0,0,0,0};
	for (int i = 0; i < arrSize ; i++) {
		if (QtdMoedas[i] > 0){
			while (troco - ListaMoedas[i] >= 0){
				troco = troco - ListaMoedas[i];
				QtdMoedas[i] = QtdMoedas[i] - 1
				RetornaMoedas[i] = RetornaMoedas[i] + 1
	  		}
		}
	}
}

main(){
	int qtd;
	cout << "Insira a quantidade de produtos a inserir: ";
	cin >> qtd;
	stock(qtd);
	
	troco();
}
