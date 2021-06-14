#include <iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
using namespace std;
int qtd;
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

class troco_class{
	public:
		float ListaMoedas[8] = {2,1,0.5,0.20,0.10,0.05,0.02,0.01};
		int arrSize = 8;
		int QtdMoedas[8] = {5,5,5,5,5,5,5,5};
		int RetornaMoedas[8] = {0,0,0,0,0,0,0,0};
};

void stock (int a,int o){
	int quantidade, escolha, escolha2;
	int stock_inicial = 2;
	float preco_introduzido;
	int isStock;
	isStock = o;
	produto p[a];
	if(isStock==0){
		for (int k = 1; k <= a; k++){
				p[k].setposicao(k);
				cout << "Nome do produto numero " << k << ": ";
				cin >> p[k].nome;
				p[k].setquantidade(stock_inicial);
				cout << "Defina o preco: ";
				cin >> preco_introduzido;
				p[k].setpreco(preco_introduzido);
		}
	}
	system("cls");
	escolha = 1000000000;
	while (escolha != 0){
			cout << "\t LISTA DE PRODUTOS \t\n\n";
			for (int i = 1; i <= a; i++){
				cout << "Nome do produto " << i << ": " << p[i].nome << "\n";
				cout << "Preco do produto " << i << ": " << p[i].getpreco() << "\n";
				cout << "Posicao: " << p[i].getposicao() << "\n";
				cout << "Stock do produto" << i << ": " << p[i].getquantidade() <<"\n";
				cout << "\n";
			}
			cout << "Insire a sua escolha (Para sair, prima 0):";
			cin >> escolha; 
			while (escolha > a || escolha < 0){
				cout << "Opcao invalida, insire outra: ";
				cin >> escolha;
			}
		system("cls");
		if(escolha > 0){
			cout << "Posicao: " << p[escolha].getposicao() << "\n";
			cout << "Nome do produto: " << p[escolha].nome << "\n";
			cout << "Preco do produto: " << p[escolha].getpreco() << "\n";
			cout << "Quantidade: " << p[escolha].getquantidade() << "\n";
			cout << "Deseja comprar produto?\n";
			cout << "1- Sim\n";
			cout << "2- Nao\n"; 
			cout << "Insira: ";
			cin >> escolha2;
			system("cls");
			if (escolha2 == 1){
				if (p[escolha].getquantidade() == 0){
					cout << "Produto indisponível";
				}
				else{
					float dinheiro_introdutizo, troco;
					cout << "Produto Disponivel!\n\n";
					cout << "Quantidade inserida: ";
					cin >> dinheiro_introdutizo;
					troco = dinheiro_introdutizo - p[escolha].getpreco();
					if (troco > 0){
						troco_class t1;
						for (int i = 0; i < t1.arrSize ; i++) {
							if (t1.QtdMoedas[i] > 0){
								while (troco - t1.ListaMoedas[i] >= 0){
									troco = troco - t1.ListaMoedas[i];
									t1.QtdMoedas[i] = t1.QtdMoedas[i] - 1;
									t1.RetornaMoedas[i] = t1.RetornaMoedas[i] + 1;
						  		}
							}
						}
						for (int j = 0; j < t1.arrSize; j++) {
							if (t1.RetornaMoedas[j] != 0){
								cout << "Devolvendo " << t1.RetornaMoedas[j] << " moedas de " << t1.ListaMoedas[j] << " euros!\n";	
							}
							t1.RetornaMoedas[j] == 0;
						}
					}
					p[escolha].setquantidade(p[escolha].getquantidade() - 1);
				}
			}
		}	
	}	
}

main(){
	cout << "Insira a quantidade de produtos a inserir: ";
	cin >> qtd;
	stock(qtd,0);
}
