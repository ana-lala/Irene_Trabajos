#include <iostream>
using namespace std;
#include <cstdlib>
#include <limits>
#define MAXN 21
#define MINN 5

int main()
{
      int n;
  cout << "Programa que imprime una piramide de asteriscos impar" << endl << endl;

 do{
     if(cin.fail()){
         cin.clear();
         cin.ignore(numeric_limits<int>::max(), '\n');
     }
    cout << "N\243mero de lineas (Tama\244o M\240ximo= 29 M\241nimo = 4): ";
    cin >> n;
    }while (n < MINN || n > MAXN|| cin.fail()|| n%2==0 );

    int mitad = (n/2)+1;
    
    
     for(int i = mitad; i>1; i--) {
         for(int j = mitad; j>i; j--){
             cout << " ";
         }
         for(int j = (2*i-1); j>0; j--){
             cout << "*";
         }
       cout << endl;
     }
    
    for(int i = 1; i<=mitad; i++) {
         for(int j = mitad; j>i; j--){
             cout << " ";
         }
       for(int w=2*i-1; w>=1; w--){
           cout << "*";
       }
       cout << endl;
     }
   
    return 0;
}
