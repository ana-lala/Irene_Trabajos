

#include <iostream>

using namespace std;
#define MAXN 50
int main()
{
      int n;
      

  cout << "Programa que imprime medio rect\240ngulo relleno de asteriscos." << endl << endl;
 
 do{
    cout << "N\243mero de lineas:  ";
    cin >> n;
    }while (n < 1 || n > MAXN);
    
    
    
    for (int i = n; i>0; i--){
        for(int j = 0; j<i; j++){
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}
