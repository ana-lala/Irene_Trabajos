/******************************************************************************

Nombre: Ordenar Numeros en Orden Ascendente
Descripción: Elaborar un programa que captura nombre del estudiante con 3 calificaiones hacer su promedio e indicar si aprobó o reprobó con un rango de 0 a 100
Autor: Ana Laura Chenoweth Galaz
Fecha: 31/01/23

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{
    double cal1, cal2, cal3, prom;
    char nombre[40];

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre, 40);
    cout << "\n" << nombre << " este programa es para calcular si aprobaste o reprobaste las calificaciones que debes ingresar \nson con un rango de 0 a 100 \n";

    cout << "\n" << nombre << " pon tu primera calificaci\242n: ";
    cin >> cal1;
    cout << "Pon tu segunda calificaci\242n: ";
    cin >> cal2;
    cout << "Pon tu tercera calificaci\242n: ";
    cin >> cal3;

    if((cal1<=100 && cal1>=0)&&(cal2<=100 && cal2>=0)&&(cal3<=100 && cal3>=0) ){
        prom = cal1+cal2+cal3;
        prom = prom/3;
        cout << "Tu promedio es: " << prom;
        if(prom<60){
            cout << "\nREPROBASTE :c";
        }else{
            cout << "\nAPROBASTE :D Felicidades \n";
        }
    }else{
        cout << "\nHas puesto alguna calificación que es invalida. \n El rango debe ser de 0 a 100";
    }

    return 0;
}
