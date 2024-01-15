//UNA MATRIZ DE 3*3 QUE MUESTRE LA DIAGONAL DE LA MATRIZ
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeros [3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"Mostrando la matriz completa\n";
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<numeros[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}
	cout<<"\n\nMostrando la matriz diagonal principal de la matriz\n"  ;
	
	for (int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j){
				cout<<numeros [i][j]<<"  ";
			}
		}
	}
	
	getch (); //pause
	return 0;
}
