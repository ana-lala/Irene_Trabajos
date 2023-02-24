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
    
    for(int i=1; i<n; i++){
        cout << " ";
    }
    cout << "*";
    cout << endl;
   
     for(int i = 2; i<n; i++) {
         for(int j = n; j>i; j--){
             cout << " ";
         }
         cout << "*";
       for(int w=3; w<=2*i-1; w++){
           cout << " ";
       }
       cout << "*";
       cout << endl;
     }
   
    for(int i=0; i<(n*2-1); i++){
        cout << "*";
    }
    return 0;
}
