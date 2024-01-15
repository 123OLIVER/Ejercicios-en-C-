#include <iostream>
using namespace std;
 
int main()
{
    int valida = 711;
    int clave;
 
    do
    {
        cout << "Introduzca su clave numerica: ";
        cin >> clave;
        if (clave != valida) 
            cout << "No valido!" << endl;
    }
    while (clave != valida);
 
    cout << "Aceptada." << endl;
    return 0;
}
