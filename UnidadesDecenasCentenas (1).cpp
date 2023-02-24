/*

Nombre: Digitos
Descripción: Elaborar un programa que dada una cantidad de 3 digitos se separe en unidades, decenas y centenas.
Autor: Ana Laura Chenoweth Galaz
Fecha: 26/01/23

*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{
		int numero;
		cout << "Ingresa un numero para separarlo en unidades, decenas y centenas: \n";
		cin >> numero;
		
    	int U = numero % 10;
        numero /= 10;
        int D = numero % 10;
        numero /= 10;
        int C = numero;
    		
        cout << "\nCentenas: " << C << "\n";
        cout << "\nDecenas: " << D << "\n";
        cout << "\nUnidades: " << U << "\n";


    system("pause");

    return 0;
}
