/******************************************************************************

Nombre: Ordenar Numeros en Orden Ascendente
Descripción: Elaborar un programa que dada una cantidad de 3 números los ordene en orden ascendente.
Autor: Ana Laura Chenoweth Galaz
Fecha: 30/01/23

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{
    double a,b,c;
    cout<<"Ingresa numero 1:"<<endl;
 cin>>a;
 
 cout<<"Ingresa numero 2:"<<endl;
 cin>>b;
 
 cout<<"Ingresa numero 3:"<<endl;
 cin>>c;
 
 if(a>b && b>c)
 cout<<a<<", "<<b<<", "<<c;
 else{
     if(a>c && c>b)
     cout<<a<<", "<<c<<", "<<b;
     else{
         if(b>a && a>c)
         cout<<b<<", "<<a<<", "<<c;
         else{
             if(b>c && c>a)
             cout<<b<<", "<<c<<", "<<a;
             else{
                 if(c>a && a>b)
                 cout<<c<<", "<<a<<", "<<b;
                 else{
                 if(c>b && b>a)
                 cout<<c<<", "<<b<<", "<<a;
                }
            }
        }
    }
}

    return 0;
}