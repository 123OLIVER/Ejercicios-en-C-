//Escribir un programa que defina un vector de numeros,carga estatica y mostrar los elementos FOR

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeroW[5]={1,4,6,7,3}; //cargar vector
   
  
  for(int i=0; i<=4; i++)
  {
     cout<< numeroW [i] <<", "<<endl; //mostrar con iteracion el  vector
  }	
	system ("Pause");
return 0;
}
