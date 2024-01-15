//EXPRESIONES EN C++

#include<iostream>

using namespace std;

int main (){
	float a,b,c,d,e,f,resultado=0;
	
	cout<<"Ingrese el valor para A: ";
	cin>>a;
	cout<<"Ingrese el valor para B: ";
	cin>>b;
	cout<<"Ingrese el valor para C: ";
	cin>>c;
	cout<<"Ingrese el valor para D: ";
	cin>>d;
	cout<<"Ingrese el valor para E: ";
	cin>>e;
	cout<<"Ingrese el valor para F: ";
	cin>>f;
	
	resultado=((a+(b/c)/(d+(e/f))));
	
	cout<<"\nEl resultado de los valores son: "<<resultado<<endl;
	
	system ("Pause");
	
return 0;
}
