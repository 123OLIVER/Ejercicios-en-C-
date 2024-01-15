/*DESAROLLE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR UN VECTOR DE ENTRADA Y DETERMINE 
EL MAYOR ELEMENTO DEL VECTOR*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int n,mayor=0;
	
	cout<<"Digite los elementos del vector: ";
	cin>>n;
	
	int numero [n];
	
	for (int i =0; i<n; i++)
	{
		cout<<i+1<<".-Digite un numero: ";
		cin>>numero [i]; //GUARDAR LOS ELEMENTOS DEL ARREGLO
		
			if (numero [i]>mayor)
			{
				mayor=numero[i];	
			}	
	}
	cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;	
	getch (); //pause
	return 0;
}
