//FACTORIAL DE UN NUMERO
#include<iostream>

using namespace std;

int main (){
	int n, i, factorial=1;
	
	cout<<"Ingrese la cantida para hacer el factorial: ";
	cin>>n;
	cout<<"\nLA SERIE DEL "<<n<<" ES... "<<endl;
	for (i=1; i<=n; i++)
	{
		cout<<i<<", ";
		factorial=factorial*i;
	}
	cout<<"\n\nEl factorial de "<<i-1<<" es de: "<<factorial<<endl;
	
	system ("Pause");
return 0;
}
