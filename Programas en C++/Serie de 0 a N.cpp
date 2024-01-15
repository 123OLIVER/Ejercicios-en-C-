//GENERAR SERIE DE 1 AL N
#include <iostream>

using namespace std;
int main () {
	int num=1, n;
	
	cout<<"Ingrese la cantidad de la serie: ";
	cin>>n;
	while (num<=n)
	{
		cout<<num<<", ";
		num=num+2;
	}
		
return 0;
}
