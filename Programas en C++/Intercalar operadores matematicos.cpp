/*Rea*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int n;
	bool estado;
		cout<<"INTERCALAR VALORES (+) (-)"<<endl;
	cout<<"Ingrese un numero del [1-10]: ";
	cin>>n;
	for (int i=1; i<=10; i++)
	{
		if (estado == false )
		{
			cout<<n<<" + "<<i<<" = "<<n+i<<endl;
			estado=true;	
		}
		else 
		{
			cout<<n<<" - "<<i<<" = "<<n-i<<endl;
			estado=false;
		}
	}
return 0;
}
