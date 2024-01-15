/*ejercicio: Realizar la verificación según el rango de 0 a 12 años de edad 
es niñ@, si tiene de entre 13 y 17 es adolescente, si tiene entre 17 y 21
 es joven, si tiene entre 21 y 35 es adulto jove*/
 #include<iostream>

using namespace std;

int main (){
	int edad;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	 if ((edad>=0)&&(edad<=12))	
		cout<<"\nUsted es niño...";
    if ((edad>=13)&&(edad<=17))
		cout<<"\nUsted de adolecente...";
	if ((edad>=17)&&(edad<=21))
		cout<<"\nUsted es joven...";
	if ((edad>=22)&&(edad<=35))
		cout<<"\nUsted es adulto joven...";
	if ((edad>=36)&&(edad<=1000))		
		cout<<"\nFUERA DE RANGO...";
		
return 0;
}
