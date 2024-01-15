//GENERAR DEL 1 AL 40 Y SUMAR TODOS LOS PARES
#include <iostream>
#include <stdio.h>

using namespace std;
int main () {
	int suma=0,resultado;
	for (int i=1; i<=20; i++){
		cout<<i<<", ";
		resultado = (i%2);
		if (resultado==0){
			suma = suma+ i  ;
		}
	}
		cout<<"\n\nLa suma de los pares es: "<<suma<<endl;
	system ("pause");
return 0;
}
