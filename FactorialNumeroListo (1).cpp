/*
Nombre: Factorial de un numero
Descripción: Factorial de un numero n

Autor: Ana Laura Chenoweth Galaz
Fecha: 11/02/23
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    long double n, fact=1;
    cout << "Este programa calcula la factorial de un n\243mero \n";
    cout << "Dame un n\243mero: ";
    cin >> n;

    if(n<0){
        cout << "No se puede calcular el factorial de un n\243mero negativo";
    }  else{
        while(n>1){
            fact *= n;
            cout << n << " * ";
            n--;
        }
        cout << "1 \b \b Tu factorial es: " << fixed << setprecision(0) << fact << "\n";

    }

    system("pause");

    return 0;
}
