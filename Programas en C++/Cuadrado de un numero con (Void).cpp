#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void al_cuadrado(float n);
float numero;


int main ()
{
	pedirDatos ();
	al_cuadrado(numero);
	getch();
	return 0;
}

void pedirDatos ()
{
	cout<<"Digite un numero: ";
	cin>>numero;
}

void pedirDatos(float n)
{
	float cuadrado=0;
	cuadrado=n*n;
	cout<<"\nEl cuadrado del numero es: "<<numero<<endl;
}
