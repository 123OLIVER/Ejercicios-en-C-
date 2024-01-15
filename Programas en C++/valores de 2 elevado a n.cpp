//Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main (){
	int num, suma=0, terminos=0;
	cout<<"Ingrese los terminos a suma: ";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		terminos=pow(2,i);
		suma=suma+terminos;
	}
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system ("Pause");	
return 0;
}
