/*Escriba un programa que lea dos números y determine cuál de ellos es 
el mayor*/
#include<iostream>

using namespace std;

int main (){
	int n1, n2;
	
	cout<<"Digite un numeros a comparar: "; 
 	cin>>n1;
	 cout<<"Digite un segundo numero a comparar: ";
	cin>>n2; //guarando los 2 numeros
 
 
	 if(n1==n2){
  		cout<<"\nAmbos numeros son iguales";
		 }
 	else if(n1>n2){
 		 cout<<"\nEl mayor es: "<<n1;
		 }
 	else{
  		cout<<"\nEl mayor es: "<<n2;
 		}
return 0;
}
