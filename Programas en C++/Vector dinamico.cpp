/*CARGAR EL VECTOR SOLICITANDO DATOS AL USUARIO
DATOS: CANTIDAD DE ELMENTOS, Y LOS ELEMENTOS
CANTIDAD= N
ELEMENTO= el usurio introduce el elemento
Vector hecho por el usuario
respetando el tipo de dato*/

#include<iostream>

using namespace std;

int main (){
	int dimencion, elementos, suma =0;
	
	//PEDIT AL USUARIO LA CANTIDAD DEL VECTOR
	cout<<"Introduzca la dimencion del vector: ";
	cin>>dimencion;
	
	//CREANDOR EL VECTOR
	int vector [dimencion];
	
	//PERDIR AL USUARIO QUE DIJITE SUS ELEMENTOS DESIADOS
	cout<<"\nIntroduzca datos numericos para el vector: ";	
	for (int i=0; i<dimencion; i++)
	{
		cin>>elementos;
		vector[i]=elementos; 
	}
	
	//MOSTRAR LOS ELEMENTOS DEL VECTOR UNA VEZ CARGADO
	cout<<"\nLos elementos del vector son..."<<endl;
	for (int i=0; i<dimencion; i++)
	{
		cout<< vector [i]<<endl;
	}
	
	system ("pause");
return 0;
}
