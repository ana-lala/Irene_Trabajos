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
    
    for(int i = 0; i<n; i++){
        cout << "*";
    }
    cout << endl;
    
    for(int i = mitad; i>2; i--) {
         for(int j = mitad; j>=i; j--){
             cout << " ";
         }
         cout << "*";
         for(int j = (2*i-1); j>4; j--){
             cout << " ";
         }
         cout << "*";
       cout << endl;
     }
    
    for(int i = (n/2); i>0; i--){
        for(int i = (n/2); i>0; i--){
        cout << " ";
    }
         cout << "*";
        cout << endl;
    }
  
    for(int j = (2*mitad-1); j>0; j--){
             cout << "*";
         }
         
     
    
    return 0;
}
