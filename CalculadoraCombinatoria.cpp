/*
Nombre:
Descripción:
Autor: Irene Rodríguez Castillo
Fecha:
*/

#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

#define MAXFACT 1754

enum {SALIR, FACT, PERM, COMB};


int CapturarEntero(const char solicitud[]);
int Menu();
long double Factorial(int n);
long double Permutaciones(int n, int r);
long double Combinaciones(int n, int r);
void GestionFactorial();
void GestionPermutaciones();
void GestionCombinaciones();

int main()
{
    int n, r, opcion;

    do{
        system("cls");
        cout << "Programa que ..." << endl;
        opcion = Menu();
        switch(opcion){
        case SALIR:
            cout << "Gracias por utilizar este programa" << endl;
            break;
        case FACT:
            cout << "FACTORIAL" << endl;
           GestionFactorial();
            break;
        case PERM:
            GestionPermutaciones();
            break;
        case COMB:
            GestionCombinaciones();
             // Fin de switch
        cout << "\n\n";
        system("pause");
    }}while(opcion != SALIR);

    return 0;
}

//*************************************************
int Menu()
{
    int opcion;
    cout << SALIR << ") Salir del programa" << endl;
    cout << FACT  << ") Calcular el factorial de n" << endl;
    cout << PERM  << ") Calcular las permutaciones de n en r" << endl;
    cout << COMB  << ") Calcular las combinaciones de n en r" << endl;
    do{
        opcion = CapturarEntero("Elija una opci\242n: ");
        if(opcion < SALIR || opcion > COMB)
            cout << "Error: no existe esa opci\242n" << endl;
    }while(opcion < SALIR || opcion > COMB);
    return opcion;
}

//*************************************************
long double Permutaciones(int n, int r)
{
    return Factorial(n) / Factorial(n-r);
}

//*************************************************
long double Combinaciones(int n, int r)
{
    return Factorial(n) / (Factorial(r)*Factorial(n-r));
}
//*************************************************
long double Factorial(int n)
{
    long double fact = 1;
    for(int i = 2 ; i <= n ; ++i) fact *= i;
    return fact;
}
//*************************************************
int CapturarEntero(const char solicitud[])
{
    float x;
    cout << solicitud;
    cin >> x;
    while(cin.fail() || x != (int)x){
        cout << "Error: valor no v\240lido";
        if(cin.fail()){
            cout << ", se espera un n\243mero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }else{
            cout << ", se espera un n\243mero entero" << endl;
        }
        cout << solicitud;
        cin >> x;
    }
    return x;
}
/****************************************/

void GestionFactorial()
{
    int n;
    cout << "FACTORIAL" << endl;
            do{
                n = CapturarEntero("n: ");
                if(n < 0 || n > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(n < 0 || n > MAXFACT);
            cout << n << "! = " << Factorial(n) << endl;
            return;
}

void GestionPermutaciones()
{
    int n, r;
     cout << "PERMUTACIONES" << endl;
            do{
                n = CapturarEntero("n: ");
                if(n < 0 || n > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(n < 0 || n > MAXFACT);
            do{
                r = CapturarEntero("r: ");
                if(r < 0 || r > n)
                    cout << "Error: no debe ser negativo ni mayor a " << n << endl;
            }while(r < 0 || r > n);
            cout << "P(" << n << "," << r << ") = " << Permutaciones(n,r) << endl;
            return;
}


void GestionCombinaciones()
{
    cout << "COMBINACIONES" << endl;
    int n, r;
            do{
                n = CapturarEntero("n: ");
                if(n < 0 || n > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(n < 0 || n > MAXFACT);
            do{
                r = CapturarEntero("r: ");
                if(r < 0 || r > n)
                    cout << "Error: no debe ser negativo ni mayor a " << n << endl;
            }while(r < 0 || r > n);
            cout << "C(" << n << "," << r << ") = " << Combinaciones(n,r) << endl;
        }

