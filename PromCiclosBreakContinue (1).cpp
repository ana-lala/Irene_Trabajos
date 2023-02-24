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
    double cal, n, prom, suma=0, bien = true, i;
    char nombre[40];

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre, 40);
    cout << "\n" << nombre << " Cuantas calificaciones quieres calcular? ";
    cin >> n;
    
    i = 1;

    while(i <= n){
        cout << "Pon " << i << " calificación: ";
        cin >> cal;
         if(cal<=100 && cal>=0){
        suma += cal;
    }else{
        cout << "\nHas puesto alguna calificación que es invalida. \n El rango debe ser de 0 a 100";
        break;
        bien = false;;
    }
    i++;
    }
   
   prom = suma/n;
    if(bien){
    cout << "Tu promedio es: " << prom;
        if(prom<60){
            cout << "\nREPROBASTE :c";
        }else{
            cout << "\nAPROBASTE :D Felicidades \n";
        }}else{
            cout << "\n Verifica los datos que ingresaste ";
        }
        
    return 0;
}
