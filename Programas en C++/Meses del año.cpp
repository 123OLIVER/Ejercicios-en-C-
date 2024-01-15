/* Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde. */
#include<iostream>

using namespace std;

int main (){
	int meses;
	
	cout <<"Ingrese un numero de [1-12]: ";
	cin>>meses;
	
	switch (meses)
	{
		case 1: cout<<"\nEnero";
		break;
		case 2: cout<<"\nFebrero";
		break;
		case 3: cout<<"\nMarzo";
		break;
		case 4: cout<<"\nAbril";
		break;
		case 5: cout<<"\nMayo";
		break;
		case 6: cout<<"\nJunio";
		break;
		case 7: cout<<"\nJulio";
		break;
		case 8: cout<<"\nAgosto";
		break;
		case 9: cout<<"\nSeptiembre";
		break;
		case 10: cout<<"\nOctubre";
		break;
		case 11: cout<<"\nNoviembre";
		break;
		case 12: cout<<"\nDiciembre";
		break;
		default:cout<<"\nERROR:Mes no encontrado";
		break;
	}
return 0;
}
