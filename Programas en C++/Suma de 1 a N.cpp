// Escriba un programa que calcule el valor de: 1+2+3+...+n
//generar la serie 1,2,3...  .n//1+2+3
#include<iostream>

using namespace std;

int main (){
	int n, suma=0;
	cout<<"Ingrese la cantidad para la serie y la sumatoria: ";
	cin>>n;
	
	for (int i=1; i<=n; i=i+1)
	{
		cout<<i<<", ";
		suma=suma+i;
	}
	cout<<"\nLa suma de "<<n<<" es: "<<suma<<endl;
 
return 0;
}
