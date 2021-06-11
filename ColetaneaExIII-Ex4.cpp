#include <iostream>
using namespace std;
int v[7] = {1,2,3,4,5,6,7};
int *p = v;

main (){
	int i;
	cout << *p++ <<"\n";
	cout << *(p+2) <<"\n";
	cout << *++p <<"\n";
	cout << *(p+4) <<"\n";
	*p++;
	
}
