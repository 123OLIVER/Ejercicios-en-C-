//Realice un programa que lea un valor entero y determine si se trata de un número par o impar.
#include<iostream>

using namespace std;

int main (){
	int a,resultado;
	cout<<"     PAR O IMPAR"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	resultado=(a%2);
	
	if (resultado==0)
	{
		cout<<"\nEl numero "<<a<<" es Par..."<<endl;	
	}
	else
	{
		cout<<"\nEl numero "<<a<<" es Impar..."<<endl;
	}
	system ("Pause");
	
return 0;
}
