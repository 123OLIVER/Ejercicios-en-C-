#include<iostream>

using namespace std;

int main (){
	long long int numero;
	cout<<"Ingrese el numero para verificar si es positivo o negativo: ";
	cin>>numero;
	
	if (numero == 0)
	{
		cout<<"\nEl numero "<<numero<<" es neutro.";
	}
	else if (numero>=0)
	{
		cout<<"\nEl numero "<<numero<<" es positivo. ";
	}
	else
	{
		cout<<"\nEl numero "<<numero<<" es negativo.";
	}

return 0;
}
