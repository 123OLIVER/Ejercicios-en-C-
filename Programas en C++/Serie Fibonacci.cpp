#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, x=0, y=1, z=1, suma=0;
	cout<<"Digite la cantidad para la serie Fibonacci: ";
	cin>>n;
	while (n<=0);
	{
		cout<<"1 ";
		for (int i=1; i<n; i++)
		{
			z = x+y;
			cout<<z<<" ";
			x = y;
			y = z;
		}
	}
		suma =z+x+y;
		cout<<"\nLa suma de la serie es: "<<suma-1<<endl;
		
	cout<<"\n";
	system ("Pause");
	
return 0;
}
