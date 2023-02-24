/*
Nombre:
Descripción:
Autor:
Fecha:
*/

#include <iostream>
#include <cstdlib>
#include <limits>
#define MAXB 50
#define MAXA 20

using namespace std;

int main()
{
  int base, altura;

  cout << "Programa que imprime un rect\240ngulo relleno de asteriscos." << endl << endl;
  
  
 do{
    cout << "N\243mero de s\241mbolos:  ";
    cin >> base;
    }while (base < 1 || base > MAXB);

    do{
    cout << "N\243mero de l\241neas:  ";
    cin >> altura;
    }while (altura < 1 || altura > MAXA);

    for(int i = 1; i<=base; i++) cout << "*";  
      cout << endl;

    int i, j;
    for(int j=2 ; j< altura ; ++j){
        cout << "*";
    for (i = 2; i < base ; i++) cout << ' ';
    cout << "*" << endl;
    }
    for(int i = 1; i<=base; i++){
        cout << "*";  
      }
      cout << endl;
    // for (int i = 1 ; i<=b ; cout << '*', ++i);
    // cout << "\n\n\n";

  return 0;
}
