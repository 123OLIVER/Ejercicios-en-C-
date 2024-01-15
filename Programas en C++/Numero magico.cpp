//NUMERO MAGICO
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int num;
	int oculto=70;
			cout<<"Digite un numero: ";
		cin>>num;
	do{
		if (num>oculto)	
		{
			cout<<"Digite un numero menor: ";
		}
		else
		{
			cout<<"Digite un numero mayor: ";
		}
	}
	while
		(num!=oculto);
		
	cout<<"GOOD...FELICIDADES..";
	system ("pause");
	
return 0;
}
