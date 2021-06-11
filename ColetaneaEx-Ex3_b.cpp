#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	for (int i=1;i<=5;i++){
		int doubro = 0;
		doubro = pow(i,2);
		printf("Dobro de %d = %d ",i,doubro);
		printf("\n");
		doubro = 0;
	}
}
