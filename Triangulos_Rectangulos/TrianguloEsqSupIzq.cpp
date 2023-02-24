

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
    
    int aux = 1;
    
    for (int i = 0; i<n; i++){
        for(int j = 1; j<=aux; j++){
            cout << "*";
        }
        aux++;
        cout << endl;
    }
    return 0;
}
