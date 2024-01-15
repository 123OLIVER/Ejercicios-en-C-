/*Escriba un programa que lea de la entrada estándar un carácter e indique en la 
salida estándar si el carácter es una vocal minúscula o no. */

#include<iostream>

using namespace std;

int main (){
	char vocal;
	cout<<" MAYUSCULA Y MINUSCULA "<<endl;
	cout<<"Ingrese una vocal: ";
	cin>>vocal;
	
	switch (vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"\nEs una vocal MINUSCULA..."<<endl;
		break ;
		default : cout<<"\nNO ES UNA VOCAL..."<<endl;
	}
	system ("Pause");
	
return 0;
}
