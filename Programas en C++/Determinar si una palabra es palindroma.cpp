//Hacer un programa que determine si una palabra es políndroma

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
 char palabra[20];
 char palabra2[20];
 
 cout<<"Digite una palabra: ";
 cin.getline(palabra,20,'\n'); 
 
 strcpy(palabra2,palabra); //copiar palabr a palabra2    
 
 strrev(palabra2); //(strrev)=invertir caracteres 
 
 if(strcmp(palabra,palabra2)==0){
  cout<<"\nEs una palabra polindroma";
 }
 else{
  cout<<"\nNo es una palabra polindroma";
 } 
 
 getch();
 return 0;
}
