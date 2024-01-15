//VECTOR DINAMICO QUE PIDA AL USUARIO LAS DIMECIONES Y EN SU SALIDA ESTANDAR MUESTRE
//LOS ELEMENTOS DEL VECTOR Y HAGA LA MULTIPLICACION 

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int dimencion, elementos , multiplicacion =0; 
	
	//PEDIMOS AL USUARIO QUE DIJITE LAS DIMENCIONES DEL VECTOR
	cout<<"Introduzca la dimencion del vector: ";
	cin>>dimencion;
	int vector[dimencion];
	
	//PEDIR AL USUARIO QUE DIJITE LOS ELEMENTOS DEL VECTOR
	cout<<"\nIntroduzca los elementos del vector: "; 
	for (int i=0; i<dimencion; i++)
	{
		cin>>elementos;
		vector[i]=elementos;
	}
	//MOSTRAR LOS ELEMENTOS DEL VECTOR
	cout<<"\nLos datos del vector son..."<<endl;
	for (int i=0; i<dimencion; i++)
	{
		cout<<vector[i]<<endl;	
		multiplicacion= multiplicacion - vector [i];
	}
	
	cout<<"\nLa multiplicacion de los elementos del vector es: "<<multiplicacion<<endl;
	system ("Pause");
	return 0;
}
