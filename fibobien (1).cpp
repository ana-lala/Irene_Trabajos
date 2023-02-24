/*
Nombre: Fibonacci
Descripción: Elabore un programa que dado un indice(enetero no negativo),
indique el correspondiente término de la sucesión de Fibonacci

Autor: Ana Laura Chenoweth Galaz
Fecha: 11/02/23
*/
#include <iostream>
//#include <cstdlib>
using namespace std;

int main()
{
    int num;
    cout << "Este programa que dado un indice(enetero no negativo), indica el correspondiente término de la sucesión de Fibonacci\n";
    cout << "Dame un número: ";
    cin >> num;

    int a=1, b=0, c=0;

    
    if(num>=0){
         
         while(num>1){
            b=a;
            a=c;
            c= a+b;
            num--;
         }
         cout << c << "\n ";
     } else{
       cout << "El número tiene que ser mayor a 1";
    }

    //system("pause");

    return 0;
}
