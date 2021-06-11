#include <iostream>
using namespace std;
int op;
main () {
		cout<<"\n     MENU DE COMANDOS"<<"\n\n";
		cout<<"   0.   Sair \n";
		cout<<"   1.   Mostrar\n";
		cout<<"   2.   Apresentar\n\n";
		cout<<"   Escolha uma opcao: ";
		cin>>op;
	while ((op < 0) || (op >= 3)){
		system("cls");
		cout<<"\n     MENU DE COMANDOS"<<"\n\n";
		cout<<"   0.   Sair \n";
		cout<<"   1.   Mostrar\n";
		cout<<"   2.   Apresentar\n\n";
		cout<<"   Opcao invalida! Escolha uma opcao: ";
		cin>>op;
	}
}
