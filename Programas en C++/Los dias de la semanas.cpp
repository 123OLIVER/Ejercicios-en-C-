//CONVERTIR SEMANA A LITERAL
#include <iostream>

using namespace std;
int main () {
	char dia;
	
	cout<< "Ingrese un numero del 1 al 7: ";
	cin>>dia;
	
	switch (dia)
	{
		case '1': cout<<"\nLunes";
		break; 
		case '2': cout<<"\nMartes";
		break; 
		case '3': cout<<"\nMiercoles";
		break; 
		case '4': cout<<"\nJueves";
		break; 
		case '5': cout<<"\nViernes";
		break; 
		case '6': cout<<"\nSabado";
		break; 
		case '7': cout<<"\nDomingo";
		break; 
		default: cout<<"Eran numeros de 1 al 7";
		break;
	}
return 0;
}
