/* Escribir un programa que de la entrada estándar el precio de un producto y 
 muestre en la salida estándar el precio del producto al aplicarle el IVA.*/
#include<iostream>

using namespace std;

int main (){
	float precio, iva, precioFinal;
	cout<<"Ingrese el precio del producto:";
	cin>>precio;
	
	iva=precio*0.21;
	precioFinal=precio+iva;
	
	cout<<"\nEl precio con el IVA plicaado es: "<<precioFinal;
	
return 0;
}
