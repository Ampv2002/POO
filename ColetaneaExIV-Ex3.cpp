#include <iostream>
using namespace std;
main () {
char letra;

cout<<"Digite uma letra: ";
cin>>letra;

if ((letra >= 'A') && (letra <= 'Z'))
cout<<"Letra maiuscula."<< "\n";
else
if ((letra >= 'a') && (letra <= 'z'))
cout<<"Letra minuscula."<< "\n";
else
cout<<"Nao e uma letra!"<<"\n";
}
