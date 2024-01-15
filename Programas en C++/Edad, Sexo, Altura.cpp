/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona: 
Edad: dato de tipo entero. 
Sexo: dato de tipo carácter. 
Altura en metros: dato de tipo real. 
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>

using namespace std;

int main (){
	int edad;
	char sexo [12];
	double altura;
	
	cout <<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su sexo: ";
	cin>>sexo;
	cout<<"Ingrese su altura: ";
	cin>>altura;
	
	cout<<"\n    SUS DATOS   "<<endl;
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	
	system ("Pause");
	
return 0;
}
