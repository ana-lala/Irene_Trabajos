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
    
    while(opc!=10){
    cout << "________________________________________________________________ \n";
    cout << "|                                                              |\n";
    cout << "|  Elige la opci\242n de la figura que quieres imprimir:          |\n";                                                     
    cout << "|   1: Reloj de arena Relleno                                  |\n";
    cout << "|   2: Reloj de arena Vacio                                    |\n";
    cout << "|   3: Rombo Relleno                                           |\n";
    cout << "|   4: Rombo Vacio                                             |\n";
    cout << "|   5: Mo\244o Relleno                                            |\n";
    cout << "|   6: Mo\244o Vacio                                              |\n";
    cout << "|   7: Una Copa Rellena                                        |\n";
    cout << "|   8: Una Copa Vacio                                          |\n";
    cout << "|   9: Todas las figuras                                       |\n";
    cout << "|   10: Salir                                                  |\n";
    cout << "|                                                              |\n";
    do{
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }
        cout << "|  Pon tu opci\242: ";
        cin >> opc;
    }while((opc!=1 && opc!=2 &&opc!=3 &&opc!=4 &&opc!=5 &&opc!=6 &&opc!=7 &&opc!=8 &&opc!=9 && opc!=10) || cin.fail());
    
    cout << "________________________________________________________________\n";
    
    if(opc==10){
        cout << "\nGracias por usar el programa :D";
        continue;
    }
    }
    return 0;
}
