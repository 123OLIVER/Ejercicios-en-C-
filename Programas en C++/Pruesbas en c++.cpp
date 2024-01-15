#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	int numero1,numero2,
	suma=0, resta=0, multiplicacion=0, division=0;
	cout<<"---------------OPERADORES MATEMATICOS---------------"<<endl;
	cout<<"Digite un numero para la operaciones matematicas: ";	cin>>numero1;	cout<<"Digite un numero para la operaciones matematicas: ";	cin>>numero2;
	suma=numero1+numero2;	resta=numero1-numero2;	multiplicacion=numero1*numero2;	division=numero1/numero2;
	cout<<"\n-------------------RESULTADOS-------------------"<<endl;
	cout<<"La suma de "<<numero1<<" y de "<<numero2<<" es de: "<<suma<<endl;	cout<<"La resta de "<<numero1<<" y de "<<numero2<<" es de: "<<resta<<endl;
	cout<<"La multiplicacion de "<<numero1<<" y de "<<numero2<<" es de: "<<multiplicacion<<endl;	cout<<"La division de "<<numero1<<" y de "<<numero2<<" es de: "<<division<<endl;
	system("pause");
	return 0;
}
