/*Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la 
salida est�ndar si el car�cter es una vocal min�scula o no. */

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
