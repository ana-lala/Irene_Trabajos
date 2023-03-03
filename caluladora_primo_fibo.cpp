/*
Nombre: Ana Laura Chenoweth Galaz
Descripción: Programa que calcula el área de un

1)Triángulo
2)Círculo
3)Rectángulo

-Define una función de captura de números reales
-Define una función de captura de números enteros

-Define una función para presentar el menú de opciones con una opción de salida incluida, capturar la opción, validarla y devolverla.
-Define una función de gestión para el cálculo del  área de cada figura
-Defina una función de cálculo del área de cada figura
solicitud    __________
        ----|   main   |



Autor: Irene Rodríguez Castillo
Fecha:
*/

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;
#define PI 3.1416
#define MAXFACT 1754

enum {SALIR, PRIMO, FIBONACCI};


int CapturarEntero(const char solicitud[]);
int Menu();
int CapturarReal(const char solicitud[]);
long double Primo(int num);
long double Fibonacci(int num);
bool EsPrimo(int n);
void GestionPrimo();
void GestionFibonacci();

int main()
{
    int n, opcion;

    do{
        system("cls");
        cout << "Programa que calcula operaciones: " << endl;
        opcion = Menu();
        switch(opcion){
        case SALIR:
            cout << "Gracias por utilizar este programa" << endl;
            break;
        case PRIMO:
           GestionPrimo();
            break;
        case FIBONACCI:
            GestionFibonacci();

        }         // Fin de switch
        cout << "\n\n";
        system("pause");
    }while(opcion != SALIR);

    return 0;
}

//*************************************************
int Menu()
{
    int opcion;
    cout << SALIR << ") Salir del programa" << endl;
    cout << PRIMO  << ") Calcular si un n\243mero es primo" << endl;
    cout << FIBONACCI  << ") Calcular el t\202rmino de la sucesi\242n de Fibonacci" << endl;
    do{
        opcion = CapturarEntero("Elija una opci\242n: ");
        if(opcion < SALIR || opcion > FIBONACCI)
            cout << "Error: no existe esa opci\242n" << endl;
    }while(opcion < SALIR || opcion > FIBONACCI);
    return opcion;
}

//*************************************************
bool EsPrimo(int n)
{
    double raiz = sqrt(n);
    for(int i = 2; i<= raiz; i++){
        if(n%i==0) return false;
    }
    return true;
}
//*************************************************

long double TerminoFibonacci(int i)
{
    if(i == 0|| i ==1) return i;
    long double ant = 0, actual=1, nuevo;
    for(int j =2; j<=i; j++){
        nuevo = ant+actual;
        ant = actual;
        actual = nuevo;
    }
    return nuevo;
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

int CapturarReal(const char solicitud[])
{
    double x;
    cout << solicitud;
    cin >> x;
    while(cin.fail() || x != (double)x){
        cout << "Error: valor no v\240lido";
        if(cin.fail()){
            cout << ", se espera un n\243mero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<double>::max(),'\n');
        }
        cout << solicitud;
        cin >> x;
    }
    return x;
}

/********************************************/

void GestionPrimo()
{
    int num;
    cout << "Calcular si es PRIMO" << endl;
            do{
                num = CapturarReal("N\243mero: ");
                if(num < 0 || num > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(num < 0 || num > MAXFACT);

            if(EsPrimo(num)){
                cout << "Es PRIMO";
            }else{
                cout << "NO es PRIMO";
            }
            return;
}

void GestionFibonacci()
{
    int num;
    cout << "Calcular el t\202rmino de la sucesi\242n de Fibonacci" << endl;
            do{
                num = CapturarReal("T\202rmino: ");
                if(num < 0 || num > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(num < 0 || num > MAXFACT);

            cout << "El t\202rmino de la sucesi\242n de Fibonacci es: " << setprecision(0) << fixed << TerminoFibonacci(num);
            return;
}


