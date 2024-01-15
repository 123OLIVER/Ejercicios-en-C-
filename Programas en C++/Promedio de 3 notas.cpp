#include <iostream>

using namespace std;

int main(){
	int nota1, nota2, nota3, resultado;
	
	cout<<"introduzca la primera nota: ";
	cin>>nota1;
	
	cout<<"introduzca su segunda nota: ";
	cin>>nota2;
	
	cout<<"introduzca su tercera nota: ";
	cin>>nota3;
	
	resultado=(nota1+nota2+nota3)/3;
	
	cout<< "Su promedio de las tres nota es: "<< resultado;
	
	return 0;
}
