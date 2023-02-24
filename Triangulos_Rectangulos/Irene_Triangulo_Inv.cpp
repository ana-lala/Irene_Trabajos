#include <iostream>
using namespace std;
#include <cstdlib>
#define MAXN 29
#define MINN 2
int main()
{
      int n;


  cout << "Programa que imprime una piramide de asteriscos impar" << endl << endl;

 do{
    cout << "N\243mero de lineas (Tama\244o M\240ximo= 29 M\241nimo = 4): ";
    cin >> n;
    }while (n < MINN || n > MAXN );
    
    for(int i = n; i>=1; i-=2){
        for(int j = (n-i)/2; j>0; j--){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
   
    return 0;
}
