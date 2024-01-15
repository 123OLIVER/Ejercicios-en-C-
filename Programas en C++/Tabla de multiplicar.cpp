/*Realice un programa que solicite de la entrada estándar un numero entero del 1 al 
10 y muestre en la salida su tabla de multiplicar.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int n,i;
		cout<<"    TABLA DE MULTIPLICAR "<<endl;
	cout<<"Ingrese un numero del [1-10]: ";
	cin>>n;
	for (int i=1; i<=20; i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
return 0;
}
