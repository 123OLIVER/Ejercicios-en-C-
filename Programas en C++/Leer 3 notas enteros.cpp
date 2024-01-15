/*Ejercicio 10: Escriba un programa que lea las tres notas de un alumno y
calcule la nota final media de dicho alumno*/

#include<iostream>

using namespace std;

int main (){
	int nota1,nota2,nota3,notaFinal;
	
	cout<<"Ingrese su primera nota: ";
	cin>>nota1;
	cout<<"Ingrese su segunda nota: ";
	cin>>nota2;
	cout<<"Ingrese su tercera nota: ";
	cin>>nota3;
	
	notaFinal=(nota1+nota2+nota3)/3;
	
	cout<<"\nSu nota final es de: "<<notaFinal<<endl;
return 0;
}
