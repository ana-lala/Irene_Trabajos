/*
Nombre: Promedio Numeros Pares
Descripción: Promedio de numeros pares, segun n numeros

Energía 
IVA 16% 
DAP 
Total 

Autor: Ana Laura Chenoweth Galaz
Fecha: 11/02/23
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, inc, sumapares = 0, prom, num, pares=0;
    
    cout << "¿Cuantos numeros vas a ingresar?  ";
    
    cin >> n;
    
    inc = 0;
    
    while(inc<n){
        cout << "Numero: ";
        cin >> num;
        if(num%2==0){
            sumapares += num;
            pares++;
        }
        inc++;
    }
    if(pares>0){
    prom = sumapares/pares;
    cout << "Tu promedio de pares es: " << prom;
    }else{
        cout << "No ingresaste ningun par \nPor lo tanto el promedio es 0";
    }
    system("pause");
    return 0;
}