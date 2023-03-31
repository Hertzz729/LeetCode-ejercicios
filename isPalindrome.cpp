#include <iostream>

using namespace std;

/*
Dando un entero x, devuelve verdadero si x es un palindromo y falso
en caso contrario
*/
bool isPalindrome(int x){
	long int x2=x, Xaux=0;
	if(x<0){
		return false;
	}
	while(1){
		if(x2<10){
			Xaux+=x2;
			break;
		}
		Xaux+=x2%10;
		x2/=10;
		Xaux*=10;

	}
	
	if(Xaux==x){
		return true;
	}
	else{
		return false;
	}
	cout<<Xaux;
}

int main(){
	cout<<isPalindrome(1234567899);
	return 0;
}
