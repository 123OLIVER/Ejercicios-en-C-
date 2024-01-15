//UN VECTOR con 8 posiciones de tipo char
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int numeroW [5]={78,78,45,12,52};
	char letra [8]={'M','I','C','H','E','L','L','E'};
	bool FV [10]={false,false,false,true,true,true,false,false};
	cout<<"     VECTORES  "<<endl;
	cout<<"PRIMER VECTOR ENTERO ";
	 cout<<"\n[ "<<numeroW[0];
	 cout<<", "<<numeroW[1];
	 cout<<", "<<numeroW[2];
	 cout<<", "<<numeroW[3];
	 cout<<", "<<numeroW[4];
	 cout<<" ]\n"<<endl;
	 
	cout<<"\nCARGAR LOS VECTORES CHAR";
	 cout<<"\n[ "<<letra[0];
	 cout<<", "<<letra[1];
	 cout<<", "<<letra[2];
	 cout<<", "<<letra[3];
	 cout<<", "<<letra[4];
	 cout<<", "<<letra[5];
	 cout<<", "<<letra[6];
	 cout<<", "<<letra[7];
	 cout<<" ]\n"<<endl;

	cout<<"CARGAR LOS VECTORES BOOL";
	 cout<<"\n[ "<<FV[0];
	 cout<<", "<<FV[1];
	 cout<<", "<<FV[2];
	 cout<<", "<<FV[3];
	 cout<<", "<<FV[4];
	 cout<<", "<<FV[5];
	 cout<<", "<<FV[6];
	 cout<<", "<<FV[7];
	 cout<<", "<<FV[8];
	 cout<<", "<<FV[9];
	 cout<<" ]\n"<<endl;
	 
	system ("Pause");
return 0;
}
