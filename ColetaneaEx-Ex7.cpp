#include <iostream>
using namespace std;
int main(){
	int myNum[8] = {20,15,20,10,10,20,15,5};
	int desconto = 0;
	cout << "PRODUTOS DA SEMANA COM DESCONTOS \n\n";
	cout << "1 - Cereias Nestum, 2 - Sumo Tropical\n";
	cout << "3 - Geleia Morango, 4 - Massa Italiana\n";
	cout << "5 - Arroz Amarelo, 6 - Leite de Soja\n";
	cout << "6 - Coca Cola Zero, 7 - Couve de Bruxelas\n";
	do{
		cout << "Digite o numero do produto que deseja analisar: ";
		cin >> desconto;
	}
	while(desconto < 1 || desconto > 7);
	cout << "\n";
	cout << "Desconto - " << myNum[desconto-1] << " %";
}
