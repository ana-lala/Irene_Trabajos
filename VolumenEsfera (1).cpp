/*

Nombre: Digitos
Descripción: Elaborar un programa que calcule el volumen de una esfera dado su radio V=4/3*pi*r^3.
Autor: Ana Laura Chenoweth Galaz
Fecha: 27/01/23

*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#define pi 3.1416d

using namespace std;

int main ()
{

    double radio;
    cout << "Este programa calcula el volumen de una esfera: \n \n";
    cout << "Ingresa el radio de tu esfera: \n";

    cin >> radio;

    double formula = (4.0/3.0)*pi*(pow(radio,3));

    cout << "\nEl volumen de la Esfera es: \n " << formula << "\n \n";
    system("pause");

    return 0;
}
