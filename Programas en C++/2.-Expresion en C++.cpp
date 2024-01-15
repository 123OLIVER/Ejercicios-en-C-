//EXPRESIONES DE (A+B)/(C+D) EN C++

#include<iostream>

using namespace std;

int main (){
	float a, b, c, d, resultado;
	
	cout<<"Ingrese el valor para la A: ";
	cin>>a;
	cout<<"Ingrese el valor para la B: ";
	cin>>b;
	cout<<"Ingrese el valor para la C: ";
	cin>>c;
	cout<<"Ingrese el valor para la D: ";
	cin>>d;
	
	resultado=((a+b)/(c+d));
	
	cout<<"\nEl resultado de las variables es: "<<resultado<<endl;	
	
	system("Pause");
	
return 0;
}
