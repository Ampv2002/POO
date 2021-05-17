#include <iostream>
using namespace std;

class produto{
	char *nome; 
	float preco;
public:
	produto (float p){preco = p;}
	friend class venda;
};

class venda{
	float valor; int quantidade;
public:
	venda (int q){quantidade = q;} //construtor
	float valor_venda(produto p){
		valor = p.preco * quantidade;
		return valor;
	}
};

main(){
	produto p1 (1.5);
	venda v1(10);
	cout << "Valor da venda: " << v1.valor_venda(p1) << "\n";
	system("pause"); 
}
