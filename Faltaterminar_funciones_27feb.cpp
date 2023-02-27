/*
Función Factorial de un número.
*/
#include <iostream>
#include <limits>
using namespace std;

long double Factorial(int n){
    long double fact = 1;
    for(int i = 2; i<=n ; i++){
        fact*=i;
    }
    return fact;
}

long double Combinaciones(int n, int r){
    return Factorial(n) / (Factorial(r)*Factorial(n-r));
}

int CapturarEntero(const char solicitud[]){
     float x;
    cout << "Solicitud";
    cin >> solicitud;
    while(cin.fail() || x <= 0 || x != (int)x){
        cout << "Error: valor no v\240lido";
        if(cin.fail()){
            cout << ", se espera un n\243mero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }else{
            if(x <= 0) cout << ", se espera un n\243mero positivo" << endl;
            else cout << ", se espera un n\243mero entero" << endl;
        }
        cout << "Solicitud";
        cin >> solicitud;
    }
}

int main()
{
    int n;
    long double facto;
    cout<<"Pon la n del numero que quieres calcular: ";
    cin >> n;
    
    facto = Factorial(n);
    cout << "Tu factorial es: " << facto;
    
    return 0;
}
