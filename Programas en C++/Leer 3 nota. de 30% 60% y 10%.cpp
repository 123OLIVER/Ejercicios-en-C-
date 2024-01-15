/*LA CALIFICACION FINAL DE UN ESTUDIANTE ES EL PROMEDIO DE TRES NOTA:
NOTA PRACTICA QUE CUENTA UN 30% DEL TOTAL, LA NOTA TEORICA QUE CUENTA
DE UN 60% Y LA NOTA DE PARTICIPACION QUE CUENTA DEL 10% RESTANTE.
ESCRIBA UN PROGRAMA QUE LEA LAS TRES NOTA DEL ALUMNO Y ESCRIBA SU NOTA FINAL*/
#include <iostream>

using namespace std;

int main (){
	float notaPractica, notaTeorica, notaParticipacion;
	int notaFinal;
	
	cout<<"Ingrese su nota de practica: ";
	cin>>notaPractica;
	cout<<"Ingrese su nota teorica: ";
	cin>>notaPractica;
	cout<<"Ingrese su nota de participacion: ";
	cin>>notaParticipacion;
	
	notaPractica=notaPractica *0.30;
	notaTeorica=notaTeorica *0.60;
	notaParticipacion=notaParticipacion *0.10;
	
	notaFinal=notaPractica+notaPractica+notaParticipacion;
	
	if (notaFinal>=51)
		cout<<"\nUsted aprobo con una nota de: "<<notaFinal;
	
	else
		cout<<"\nUsted reprobo la materia con una nota de: "<<notaFinal;
	
return 0;
}
