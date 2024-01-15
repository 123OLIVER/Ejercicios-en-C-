#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int dimenciones,elementos, suma=0, repetir;
	cout<<"Digite la cantidad del vector: ";
	cin>>dimenciones;
	int vector [dimenciones];
	
	cout<<"\nIntroduzca los elementos del vector: ";
	for (int i=0; i<dimenciones; i++)
	{	
		cin>>elementos;
		vector [i]=elementos;
	}
	//MOSTRAR TODOS LOS ELEMENTOS INTRODUCIDO
	cout<<"\nLos datos del vector son... "<<endl;
	for (int i=0; i<dimenciones; i++ )
	{
		suma=suma+vector[i];
		cout<<vector[i]<<endl;
	}
	cout<<"\nLa suma de los elementos del vector es: "<<suma<<endl;
	
	system ("pause");
return 0;
}

