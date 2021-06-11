#include <iostream>
#include <cstring>
using namespace std;
char palavra[1000];
char palavra2[1000];
main(){
	cout << "Introduza uma frase: ";
	gets (palavra);
	cout << "Introduza outra frase: ";
	gets (palavra2);
	if (strcmp(palavra,palavra2) == 0){
		cout << "As palavras sao iguais!\n";
	}
	else{
		cout << "As palavras sao diferentes!\n";
			if (strlen(palavra) > strlen(palavra2)){
				cout << palavra << " e maior que: " << palavra2;
			}
			else if (strlen(palavra) < strlen(palavra2)) {
				cout << palavra2 << " e maior que: " << palavra;
			}
			else{
				cout << "As frases tem o mesmo tamanho mas nao sao iguais";
			}
	}
}
