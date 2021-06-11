#include <iostream>
#include <cstring>
using namespace std;
char frase[1000];
char frase2[1000];
main(){
	cout << "Introduza uma frase: ";
	gets (frase);
	cout << "Introduza outra frase: ";
	gets (frase2);
	cout <<strcat(strcat(frase, " "),frase2);
}
