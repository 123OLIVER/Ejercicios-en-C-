//EXPRESIONES DE C++

#include<iostream>

using namespace std;

int main (){
	float a,b,c,d,resultado=0;
	
	cout<<"Ingrese el valor para A: ";
	cin>>a;
	cout<<"Ingrese el valor para B: ";
	cin>>b;
	cout<<"Ingrese el valor para C: ";
	cin>>c;
	cout<<"Ingrese el valor para D: ";
	cin>>d;
	
	resultado=(a+(b)/(c-d));
	
	cout<<"\nEl resultado de los valores es: "<<resultado<<endl;
	
	system ("Pause");
return 0;
}
