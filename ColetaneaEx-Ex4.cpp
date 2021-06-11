#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	int cat1;
	int cat2;
	float hipotenusa;
	printf("Digite o valor do primeiro cateto: ");
	scanf("%d",&cat1);	
	printf("Digite o valor do segundo cateto: ");
	scanf("%d",&cat2);	
	hipotenusa = sqrt(cat1^2+cat2^2);
	printf("A hipotenusa do triangulo e: %.2f", hipotenusa);
}
