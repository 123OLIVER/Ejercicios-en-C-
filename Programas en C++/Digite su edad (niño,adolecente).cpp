#include<iostream>

using namespace std;
int main(){
 int edad;
 
 cout<<"Digite su edad: "; 
 cin>>edad;
 
 if((edad>=0)&&(edad<=12))
  cout<<"NI%cO";
  
  if((edad>=13)&&(edad<=17))
  cout<<"joven";
  
  if((edad>=18)&&(edad<=21))
  cout<<"adolecente";
  
  if((edad>=22)&&(edad<=35))
  cout<<"adulto";
  
  if((edad>=60)&&(edad<=90))
  cout <<"adulto mayor "; 
     
 return 0;
 }
