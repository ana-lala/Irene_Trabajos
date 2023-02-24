/*

Nombre: Área triángulo
Descripción: Programa que calcula el área de un triángulo
Autor: Ana Laura Chenoweth Galaz
Fecha: 26/01/23

*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{
    float area, base, altura;

        cout << "Calcular\202 el \240rea de un tri\240ngulo..." << endl << endl;

        cout << "Base: ";
        cin >> base;
        cout << "Altura: ";
        cin >> altura;

            area = (base*altura)/2.0f;

        cout << "\n \265rea del tri\240ngulo = " << area << "u^2 \n\n";



    system("pause");

    return 0;
}
