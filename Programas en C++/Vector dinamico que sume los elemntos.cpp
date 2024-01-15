	/*VECTOR DINAMICO DE TIPO NUMERICO QUE SUMA*/
	
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
/*VECTOR DINAMICO DE TIPO NUMERICO QUE SUMA*/
  int dim;//para obtener la cantidad 
  int e; // para obtener los elementos o valores del vector
  
  
  cout << "Ingresa la dimension del vector" << endl;
  
  cin >> dim; // Supongamos que ingrese 10
  
  //ahora creamos el vector, con esta dimension
  int vector[dim]; // mi vector es de tamanyo 10
  
 cout<<"INTRODUZCA DATOS NUMERICOS PARA  VECTOR"<<endl;
 // EL USUARIO CARGARA LOS ELEMENTOS UNO A UNO
 

  for(int i = 0; i < dim; i++){ //RECORREMOS LA S POSICIONES DEL VECTOR CARGANDO
   cin >> e; //AQUI PEDIMOS ELEMENTOS AL USUARIO
    vector[i] = e;
    
  }
 cout<<"LOS DATOS DEL VECTOR SON: "<<endl; //MOSTRAR EL VECTOR
 int suma=0;
  for(int J = 0; J < dim; J++){ //RECORREMOS TODO EL VECTOR
   cout << vector[J] << endl;  //MOSTRANDO ELEMENTOS
   suma=suma+vector[J] ;
  }
  
   cout<<"la suma de los elementos del vector es: "<<suma<<endl;
		
	system ("Pause");
return 0;
}
