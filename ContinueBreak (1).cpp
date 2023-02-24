/*
Nombre: Ana Laura Chenoweth Galaz
Descripcion:  BREAK Y CONTINUE
Fecha: 15/02/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while(i <=20){
        ++i;
        if(i % 2 == 0) continue;
        cout << i << endl;
    }
     return 0;
}
   