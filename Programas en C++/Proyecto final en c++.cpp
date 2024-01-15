//PROYECTO FINAL DE TODOS LOS PROGRAMAS c++
//Oliver Arancibia Quispe
//Programacion I
#include<iostream>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<stdio.h>
using namespace std;

int main (){
	int opc1, opc2, opc3, opc4;   //Opciones 
	int a,resultado=0;
	float form, s;
	int CM1=3, CM2=0, CM3=0, CM4=0;
	setlocale(LC_CTYPE, "Spanish"); //ayuda a poner acentos y tilde (locale.h)
	while (CM1==3){
		
		cout<<"\n ------------------------MENÚ PRINCIPAL-------------------------"<<endl;
		cout<<"\n 1.- Estructura Secuencial. "<<endl; cout<<"       -Asignación."<<endl; cout<<"       -Entrada."<<endl;cout<<"       -Salida."<<endl;
		cout<<"\n 2.- Estructura Condicional. "<<endl; cout<<"       -Simple."<<endl;  cout<<"       -Doble."<<endl;  cout<<"       -Simple."<<endl;cout<<"       -Multiple."<<endl;
		cout<<"\n 3.- Estructura Cíclica. "<<endl; cout<<"       -Para (FOR)"<<endl; cout<<"       -Mientras (WHILE)"<<endl; cout<<"       -Hacer Mientras (DO WHILE)"<<endl;
		cout<<"\n 4.- Salir. "<<endl;cout<<"\n Elija una de las opciones dentro del menú: "; cin>>opc1;
		switch (opc1){
		 	case 1: {
		 		cout<<"\n ------------------------Estructa Secuencial-------------------------"<<endl;
		 		cout<<" 1.-Convertir de grados centigrados a Farenheit."<<endl; cout<<" 2.-convertir de Bs a dolares."<<endl; cout<<" 3.-Convertir de Milla a Metro."<<endl; cout<<" 4.-Convertir de Metro a Milla"<<endl;
		 		cout<<" 5.-Sacar el cubo de un cuadrado."<<endl; cout<<"\n Elija una de las opciones dentro de las opciones: "; cin>>opc2; 
		 		switch (opc2){
		 			case 1 : 
					{
						cout<<"\n ------------------------Centigrados a Farenheit-------------------------"<<endl;
						cout<<"\n Deme los grados centigrados a convertir: "; cin>>a;
						form=(a*6/5)+32;
						cout<<"\n La conversióna de "<<a<<" a Farenheit es: "<<form<<endl;
						system ("Pause");
						break;
			     	}
			     	case 2 :
			     	{
			     		double bs, dolares, cambio;
			     		cout<<"\n ------------------------Convertir Bs a Dolares-------------------------"<<endl;
			     		cout<<"Introduzca el monto a convertir: ";	cin>>a;
						resultado = a*6.96;
						cout<<"En dolores es: "<<resultado;
						system ("Pause");
						break;		
				 	}
				 	case 3 :
				 	{
				 		cout<<"\n ------------------------Convertir Milla a Metro------------------------"<<endl;
				 		float milla,metro;
				 		cout<<"\n Ingrese la milla a convertir: "; cin>>milla;
				 		metro=milla * 1852;
				 		cout<<" A metros es : "<<metro<<endl;
				 		system ("Pause");
						break;	
					}
					case 4 : 
					{
						cout<<"\n ------------------------Convertir Metro a Milla------------------------"<<endl;
				 		float milla,metro;
				 		cout<<"\n Ingrese la metro a convertir: "; cin>>milla;
				 		milla = metro * 1000;
				 		cout<<" A milla es : "<<milla<<endl;
				 		system ("Pause");
						break;
					}
					case 5 :
					{
						cout<<"\n ------------------------Cubo de un cuadrado------------------------"<<endl;
						int a,b,c,resultado=0;
						cout<<" 1.-Introduzca un valor: "; cin>>a;
						cout<<" 2.-Introduzca un valor: "; cin>>b;
						cout<<" 3.-Introduzca un valor: "; cin>>c;
						resultado = (a*b*c)/3;
						cout<<"\n El cubo de un cuadrado es: "<<resultado<<endl;
						system ("Pause");
						break;
					}
		 		}	
			}
		}
	}
	getch ();
	return 0;
}
