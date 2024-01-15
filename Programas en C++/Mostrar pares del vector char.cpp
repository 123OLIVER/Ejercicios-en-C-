//MOSTRAR LAS POSICIONES PARES DEL VECTOR DE TIPO CHAR
#include<iostream>

using namespace std;

int main (){
	char letra [8]={'w','i','l','f','r','e','d','o'};
	int numero ;
	cout<<"VECTOR DE TIPO CHAR \n"<<endl;
	
	cout<<"Ingrese si quiere mostrar los pares o impares: ";
	cin>>numero;
	
	for (int i=0; i<8; i++)  
	{		
		if (numero%2==0){
			cout<<letra[numero];
		}
		else 
		{
			cout<<letra[numero];
		}
	}
	cout<<"\n"<<endl;
	system ("pause");
return 0;
}
