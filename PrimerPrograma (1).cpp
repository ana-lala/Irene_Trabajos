/*

Nombre: PrimerPrograma.cpp
Descripcion: Programa para capturar datos personales del usuario y los imprime juntos
Fecha:21/01/2023
Autor: Ana Laura Chenoweth Galaz

*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int edad;
    float peso;
    char nombre [100];

    cout << "Programa que captura los datos personales  del usuario y los imprime juntos\n \n";
    cout << "Dime tu nombre: ";
    cin.getline(nombre, 100);
    cout<<endl;
    cout << "Dime tu edad: ";
    cin >> edad;
     
    cout << "Dime tu peso en kg: ";
    cin >> peso;
     
    cout << nombre << ", tienes " << edad << " a\xA4os  y pesas " << fixed << setprecision(2) << peso << " kg. \n";

    system("pause");
    return 0;
}
