#include<iostream>
#include<math.h>
using namespace std;
//JulioCesarPedrazaSaucedo
int main(){
float n;
int s=1;
cout<<"Digiteunnumero:";
cin>>n;
cout<<"Lasuma,resta,multiplicacionydivisionintercaladade"<<n<<",es:"<<endl;
int i=1;
while(i<=10){
if(s==1){
cout<<n<<"+"<<i<<"="<<n+i<<endl;
s=0;}
else if(s==0){
cout<<n<<"-"<<i<<"="<<n-i<<endl;
s=2;}
else if(s==2){

cout<<n<<"*"<<i<<"="<<n*i<<endl;
s=3;}
else if(s==3){
cout<<n<<"/"<<i<<"="<<n/i<<endl;
s=1;}
i++;}
return 0;

}
