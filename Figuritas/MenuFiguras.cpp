/*
PONERLE LAS COSAS
*/
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int opc;
    cout<<"Este programa imprime las siguientes figuras rellenas y huecas \n \n";
    
    cout << "________________________________________________________________ \n";
    cout << "|                                                              |\n";
    cout << "|  Elige la opci\242n de la figura que quieres imprimir:          |\n";                                                     
    cout << "|   1: Reloj de arena                                          |\n";
    cout << "|   2: Rombo                                                   |\n";
    cout << "|   3: Mo\244o                                                    |\n";
    cout << "|   4: Una Copa                                                |\n";
    cout << "|                                                              |\n";
    do{
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }
        cout << "|  Pon tu opci\242: ";
        cin >> opc;
    }while((opc!=1 && opc!=2 &&opc!=3 &&opc!=4) || cin.fail());
    
    cout << "________________________________________________________________";
    return 0;
}
