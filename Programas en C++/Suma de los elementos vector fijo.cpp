/* Escribe un programa que defina un vector de números y calcule la suma de 
sus elementos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int numeros[5] ={5,8,3,7,5};
 int suma=0;
 
 for(int i=0;i<=4;i++){  
  suma += numeros[i]; //Utilizamos una suma iterativa
 }
 
 cout<<"La suma de los elementos del arreglo es: "<<suma<<endl; 
 
 getch();
 return 0;
}
