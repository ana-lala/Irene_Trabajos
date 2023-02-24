/*
Nombre: Primo
Descripción: Elabore un programa que indique si un entero mayor o igual a 2, 
dado por el usuario, es primo o no

Autor: Ana Laura Chenoweth Galaz
Fecha: 11/02/23
*/
#include <iostream>
//#include <cstdlib>
using namespace std;

int main()
{
    int num;
    cout << "Este programa indique si un entero mayor o igual a 2, dado por el usuario, es primo o no \n";
    cout << "Dame un número: ";
    cin >> num;
    
    bool ciclo= true;
    int divi =2;
    
     if(num>2){
         while(ciclo){
             if(divi>7|| num==3 ||num==5|| num==7){
                 cout << "El número es primo";
                 ciclo = false;
             }
             if(num%divi==0){
                 cout << "El número NO es primo";
                ciclo = false;
             }
             divi++;
         }
    } else{
       cout << "El número tiene que ser mayor a 2";
    }
    
    //system("pause");

    return 0;
}
