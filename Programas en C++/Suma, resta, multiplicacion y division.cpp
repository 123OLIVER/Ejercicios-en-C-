/*Ejercicio 1: Escribe un programa que lea de la entrada est�ndar dos 
n�meros y muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.*/
#include<iostream>

using namespace std;

int main (){
	int numero1, numero2, suma, resta, multiplicacion, division;
	cout<<"Ingrese el numero para casos matematicos: ";
	cin>>numero1;
	cout<<"Ingrese un segundo numero: ";
	cin>>numero2;
	suma=numero1+numero2;
	resta=numero1-numero2;
	multiplicacion=numero1*numero2;
	division=numero1/numero2;
	
	cout<<"\n       RESULTADO     "<<endl;
	cout<<"La suma de "<<numero1<<" + "<<numero2<<" es de: "<<suma<<endl;
	cout<<"La resta de "<<numero1<<" - "<<numero2<<" es de: "<<resta<<endl;
	cout<<"La multiplicacion de "<<numero1<<" x "<<numero2<<" es de: "<<multiplicacion<<endl;
	cout<<"La division de "<<numero1<<" / "<<numero2<<" es de: "<<division<<endl;
	
return 0;
}

