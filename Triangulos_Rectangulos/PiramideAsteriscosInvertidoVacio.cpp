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
    
    for(int i= 0; i<2*n-1; i++){
        cout << "*";
    }
    cout << endl;
    
     for(int i = n; i>2; i--) {
         for(int j = n; j>=i; j--){
             cout << " ";
         }
         cout << "*";
         for(int j = 4; j<(2*i-1); j++){
             cout << " ";
         }
         cout << "*";
       cout << endl;
       
     }
   for(int i=1; i<n; i++){
        cout << " ";
    }
    cout << "*";
    return 0;
}
