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

using namespace std;
#define PI 3.1416
#define MAXFACT 1754

enum {SALIR, TRIANGULO, CIRCULO, RECTANGULO};


int CapturarEntero(const char solicitud[]);
int Menu();
int CapturarReal(const char solicitud[]);
long double AreaTriangulo(int b, int h);
long double AreaCirculo(int r);
long double AreaRectangulo(int b, int h);
void GestionAreaTriangulo();
void GestionAreaCirculo();
void GestionAreaRectangulo();

int main()
{
    int b, h, r, opcion;

    do{
        system("cls");
        cout << "Programa que calcula el area de un: " << endl;
        opcion = Menu();
        switch(opcion){
        case SALIR:
            cout << "Gracias por utilizar este programa" << endl;
            break;
        case TRIANGULO:
           GestionAreaTriangulo();
            break;

        case CIRCULO:
            GestionAreaCirculo();
            break;

        case RECTANGULO:
            GestionAreaRectangulo();
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
    cout << TRIANGULO  << ") Calcular el area de un Triangulo" << endl;
    cout << CIRCULO  << ") Calcular el area de un Circulo" << endl;
    cout << RECTANGULO  << ") Calcular el area de un Rectangulo" << endl;
    do{
        opcion = CapturarEntero("Elija una opci\242n: ");
        if(opcion < SALIR || opcion > RECTANGULO)
            cout << "Error: no existe esa opci\242n" << endl;
    }while(opcion < SALIR || opcion > RECTANGULO);
    return opcion;
}

//*************************************************
long double AreaTriangulo(int b, int h)
{
    long double area = (b*h)/2;
    return area;
}

//*************************************************
long double AreaCirculo(int r)
{
    long double area = PI*(r*r);
    return area;
}
//*************************************************
long double AreaRectangulo(int b, int h)
{
    long double area = b*h;
    return area;
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

void GestionAreaTriangulo()
{
    int b, h;
    cout << "Area de un TRIANGULO" << endl;
            do{
                b = CapturarReal("Base: ");
                if(b < 0 || b > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(b < 0 || b > MAXFACT);

            do{
                h = CapturarReal("Altura: ");
                if(h < 0 || h > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(h < 0 || h > MAXFACT);

            cout << "El Area de tu triangulo es: " << AreaTriangulo(b, h);
            return;
}

void GestionAreaCirculo()
{
    int r;
    cout << "Area de un CIRCULO" << endl;
            do{
                r = CapturarReal("Radio: ");
                if(r < 0 || r > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(r < 0 || r > MAXFACT);
            cout << "El Area de tu Circulo es: " << AreaCirculo(r);
            return;
}

void GestionAreaRectangulo()
{
    int b, h;
    cout << "Area de un RECTANGULO" << endl;
            do{
                b = CapturarReal("Base: ");
                if(b < 0 || b > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(b < 0 || b > MAXFACT);

            do{
                h = CapturarReal("Altura: ");
                if(h < 0 || h > MAXFACT)
                    cout << "Error: no debe ser negativo ni mayor a " << MAXFACT << endl;
            }while(h < 0 || h > MAXFACT);

            cout << "El Area de tu Rectangulo es: " << AreaRectangulo(b, h);
            return;
}


