/******************************************************************************

Nombre: Minimo de Dos Numeros
Descripción: Elaborar un programa que dados 2 números indique el menor de todos.
Autor: Ana Laura Chenoweth Galaz
Fecha: 27/01/23

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{
    double A;
    double B;
    
    double Menor;

    cout<<"Dame valor de A: ";
    cin>>A;
    cout<<"Dame valor de B: ";
    cin >>B;
    

    Menor= A;
    if (Menor>=B){
        Menor=B;
    }
    
    cout << "El menor es " << Menor;


    return 0;
}