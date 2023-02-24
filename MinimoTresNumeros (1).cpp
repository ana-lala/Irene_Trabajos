/******************************************************************************

Nombre: Minimo de Tres Numeros
Descripción: Elaborar un programa que dados 3 números indique el menor de todos.
Autor: Ana Laura Chenoweth Galaz
Fecha: 27/01/23

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{
    double A;
    double B;
    double C;
    double Menor;

    cout<<"Dame valor de A: ";
    cin>>A;
    cout<<"Dame valor de B: ";
    cin >>B;
    cout<<"Dame valor de C: ";
    cin >>C;

    Menor= A;
    if (Menor<=B){
        if (Menor<=C) {
        Menor=A;
        } else {Menor=C;
        }
    }
    else{
            if (Menor<=C) {
        Menor=B;
        } else {Menor=C;
        }
    }

    cout << "El menor es " << Menor;


    return 0;
}