//Escriba un programa que lea tres números y determine cuál de ellos es el mayor. 
#include<iostream>

using namespace std;

int main(){;
	int a,b,c;
	cout<<"MAYOR Y MENOR DE 3 NUMEROS  "<<endl;
	cout<<"\nIngrese un numero: ";
	cin>>a;
	cout<<"Ingrese otro numero: ";
	cin>>b;
	cout<<"Ingrese ultimo numero: ";
	cin>>c;
	
	if (a>=b>=c)
	{
		cout<<"\nEl "<<a<<" es meyor...";
	}
	else 
	{
		if (b>c)
		cout<<"\nEl "<<b<<" es el mayor...";
		
		else 
			cout<<"\nEl "<<c<<" es el mayor...";
	}
	
return 0;
}
