/*


*/
#include <iostream>

using namespace std;

int main()
{
    int mes, anio;

    cout << "Enero: 1, Febrero: 2, Marzo: 3, Abril: 4, Mayo: 5, Junio: 6, \nJulio: 7, Agosto: 8, Septiembre: 9, Octubre: 10, Noviembre: 11, Diciembre: 12";
    cout << "\n\nIngresa el mes: ";
    cin >> mes;
    cout << "Ingresa el a\244o: ";
    cin >> anio;

    if(anio>1582){
    cout << "\nEse mes tiene ";
    switch(mes){
        case 1:
            cout << "31";
            break;
        case 2:
            if(anio%400==0){
                cout << "29";
            }else if(anio%4==0 && anio%100!=0){
                cout << "29";
            }else{
                cout << "28";
            }
            break;
        case 3:
            cout << "31";
            break;
        case 4:
            cout << "30";
            break;
        case 5:
            cout << "31";
            break;
        case 6:
            cout << "30";
            break;
        case 7:
            cout << "31";
            break;
        case 8:
            cout << "30";
            break;
        case 9:
            cout << "31";
            break;
        case 10:
            cout << "30";
            break;
        case 12:
            cout << "31";
            break;
        default:
            cout << "Ese número no es un mes";
    }

    cout << " d\241as";
    }else{
        cout << "El año que ingresaste es incorrecto";
    }

    return 0;
}
