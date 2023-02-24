/*

Nombre: DiasSemana.cpp
Descripcion: Este programa imprime los días de la semana seg\243n el numero (del 1 al 7) que ingreses
Fecha:01/02/2023
Autor: Ana Laura Chenoweth Galaz

*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa imprime los d\241as de la semana seg\243n el numero (del 1 al 7) que ingreses: \n";

    int diasemana = 0;
    cin >> diasemana;



    switch(diasemana){
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Lunes";
            break;
        case 3:
            cout << "Martes";
            break;
        case 4:
            cout << "Mi\202rcoles";
            break;
        case 5:
            cout << "Jueves";
            break;
        case 6:
            cout << "Viernes";
            break;
        case 7:
            cout << "Sabado";
            break;
        default:
            cout << "Ese número NO esta en el rango";
    }

    return 0;
}
