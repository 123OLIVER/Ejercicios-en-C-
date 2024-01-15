/*Crear un algoritmo para contar cuantos dígitos pares tiene un numero,
siguiendo los  tres pasos descritos en la clase*/

#include <iostream>

using namespace std;
int main () {
	
   int a,b,c;
   cout <<"CONTAR NUMEROS PARES..\n"<<endl;
   cout <<"Introduzca un numero : " ;
   cin >> a;
   c = 0;
   while (a > 0){
      b = a % 10;
      if (b % 2 == 0){
         c++;}
      	a/= 10;
   }
   cout <<"\nLos digitos Pares son: "<<c<<endl;
   return 0;
}

