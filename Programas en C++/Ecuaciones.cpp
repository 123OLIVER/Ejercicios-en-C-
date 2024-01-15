#include<iostream>

using namespace std;

int main (){
	float a,b,c,d,e,f, resultado=0;
	
	cout<<"Ingrese el valor para la A: ";
	cin>>a;
	cout<<"Ingrese el valor para la B: ";
	cin>>b;
	cout<<"Ingrese el valor para la C: ";
	cin>>c;
	cout<<"Ingrese el valor para la D: ";
	cin>>d;
	cout<<"Ingrese el valor para la E: ";
	cin>>e;
	cout<<"Ingrese el valor para la F: ";
	cin>>f;
	
	resultado=(a+(b/c))/(d+(e/f));
	cout.precision(5);
	
	cout<<"\nEl resultado de la ecuacion es: "<<resultado;
return 0;
}
