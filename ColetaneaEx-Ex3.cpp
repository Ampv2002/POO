#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	int i = 1;
	while (i<=5){
		int doubro = 0;
		doubro = pow(i,2);
		printf("Dobro de %d = %d ",i,doubro);
		printf("\n");
		doubro = 0;
		i++;
	}
}
