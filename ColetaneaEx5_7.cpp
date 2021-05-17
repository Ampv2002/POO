#include<iostream>
using namespace std;

float calcular_area(float a, float b){
	float area = a * b;
	return area;
}

main(){
	float larg, comp;
	cout << "Introduza a largura: ";
	cin >> larg;
	cout << "Introduza o comprimento: ";
	cin >> comp;
	cout << "\n A area do retangulo e: " << calcular_area(larg,comp);
}


