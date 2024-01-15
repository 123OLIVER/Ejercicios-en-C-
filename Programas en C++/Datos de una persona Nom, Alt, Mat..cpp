//Realizamos el siguiente ejercicio en c++: Solicitar y Mostrar los datos Nombre, altura y materia
#include<iostream>

using namespace std;

int main (){
	char nombre[20];
	float altura;
	char materia [15];
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese su altura: ";
	cin>>altura;
	cout<<"Ingrese su materia: ";
	cin>>materia;
	
	cout<<"\nSu nombre es: "<<nombre<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	cout<<"Su materia es: "<<materia<<endl;
	
return 0;
}
