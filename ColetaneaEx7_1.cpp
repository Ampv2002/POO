#include <iostream>
using namespace std;

class aluguer{
	float preco_diario, valor;
	int qtd_dias;
public:
	aluguer (float p, int q){preco_diario = p, qtd_dias = q;}
	friend class valor_venda;
	float valor_venda (aluguer v){
		v.valor = v.preco_diario * v.qtd_dias;
		return v.valor;
	}
};


main(){
	aluguer v1(26.50,7);
	cout << "Valor da venda: " << v1.valor_venda(v1) << "\n";
	system("pause"); 
}
