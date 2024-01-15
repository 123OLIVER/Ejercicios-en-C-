/* Hacer un menú que considere las siguientes opciones:
 Caso 1: Cubo de un numero
 Caso 2: Numero par o impar
 Case 3: salir.
*/
#include<iostream>
#include<math.h>

using namespace std;

int main (){
	int opc, cubo, numero;
	cout<<"-------------MENU-------------\n";
	cout<<"Numero 1.- Cubo de un numero"<<endl;
    cout<<"Numero 2.- Numero es par o impar"<<endl;
    cout<<"Numero 3.- Salir"<<endl;
    cout<<"Que numero desea?: ";
    cin>>opc;
    
    switch (opc){
    	case 1:
    		cout<<"\nIngrese un numero para sacar el cubo: ";
    		cin>>numero;
    		cubo = pow (numero,3);
    		cout<<"\nEl cubo de "<<numero<<" es: "<<cubo;
    		break;
    		
    	case 2:
    		cout<<"\nIngrese el numero para ver si es Par o Impar: ";
    		cin>>numero;
    		if (numero%2==0){
    			cout<<"\nEl "<<numero<<" es un numero Par...";
    			}
    			else{
    				cout<<"\nEl "<<numero<<" es un numero impar...";
				}
				break;
				
				case 3:
					cout<<"\nGRACIAS HASTA LUEGO...";
					break;
					
					default:
						cout<<"\nEL NUMERO "<<opc<< " NO ESTA DENTRO DE LAS OPCIONES DEL MENU...";
	}
return 0;
}
