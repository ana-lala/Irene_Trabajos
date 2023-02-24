/*
*
**
* *
****

*
**
* *
*  *
*   *
******
*/

#include <iostream>
using namespace std;
#include <cstdlib>
#define MAXN 29
#define MINN 4
int main()
{
      int n;


  cout << "Programa que imprime medio rect\240ngulo vac\241o de asteriscos." << endl << endl;

 do{
    cout << "N\243mero de lineas (Tama\244o M\240ximo= 29 M\241nimo = 4): ";
    cin >> n;
    }while (n < MINN || n > MAXN);


    cout << endl << "*" << endl;


    for (int i = 2; i<n; i++){
        cout << "*";
        for(int j = 2; j<i; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    for(int i=0; i<n;i++){
        cout << "*";
    }
    cout << endl;
    system("pause");
    return 0;
}
