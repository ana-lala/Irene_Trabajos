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
    
    cout << "*";
    for(int j= 1; j<n; j++){
             cout << " ";
         }
    cout << "*" << endl;
    
     for(int i = 1; i<mitad; i++){
         cout << "*";
         for(int j= 2; j<=i; j++){
             cout << " ";
         }
         cout << "*";
         
         for(int j= mitad-2; j>=i; j--){
             cout << "  ";
         }
         cout << "*";
         for(int j= 2; j<=i; j++){
             cout << " ";
         }
         cout << "*";
         cout << endl;
     }
     
     for(int i = mitad-2; i>0; i--){
        cout << "*";
         for(int j= 2; j<=i; j++){
             cout << " ";
         }
         cout << "*";
         for(int j= mitad-2; j>=i; j--){
             cout << "  ";
         }
         cout << "*";
         for(int j= 2; j<=i; j++){
             cout << " ";
         }
         cout << "*";
         cout << endl;
     }
     
        cout << "*";
        for(int j= 1; j<n; j++){
                 cout << " ";
             }
        cout << "*" << endl;
       
    return 0;
}
