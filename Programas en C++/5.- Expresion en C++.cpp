#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float x,y,resultado;
	
	cout<<"Ingrese el valor para la base X: ";
	cin>>x;
	cout<<"Ingrese el segundo valor de la base Y: ";
	cin>>y;
	
	resultado=(sqrt(x)/(pow(y,2)-1));
	
	cout<<"\nEl resultado de la ecuacion con base "<<x<<" y "<<y<<" es: "<<resultado<<endl;
	
	system ("Pause");
	
return 0;
}
