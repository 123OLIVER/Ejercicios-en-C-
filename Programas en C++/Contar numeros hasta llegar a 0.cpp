/*Realice un programa que lea de la entrada est�ndar n�meros hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la 
salida est�ndar el n�mero de valores mayores que cero leidos*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int num, contador=0;
	while (num!=0){
	cout<<"Ingrese un numero: ";
	cin>>num;
	contador++;
}
	cout<<"\nEl numero de veces ingresado fueron: "<<contador-1<<endl;
return 0;
}
