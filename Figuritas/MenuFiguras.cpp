/*
Nombre: Figuritas
Descripción: Elabore un programa en C++ que imprima las siguientes figuras rellenas y huecas:
    Un reloj de arena
    Un rombo
    Un moño
    Una copa
Con el símbolo y la dimensión impar indicada por el usuario, en el rango [5, 21].
Autor: Ana Laura Chenoweth Galaz
Fecha: 27/02/23
*/
#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;
#define MAXN 21
#define MINN 5
int main()
{
    int opc, n;
    char simbolo;
    cout<<"Este programa imprime las siguientes figuras rellenas y huecas \n \n";

    while(opc!=10){
    cout << "\n________________________________________________________________ \n";
    cout << "|                                                              |\n";
    cout << "|  Elige la opci\242n de la figura que quieres imprimir:          |\n";
    cout << "|   1: Reloj de arena Relleno                                  |\n";
    cout << "|   2: Reloj de arena Vacio                                    |\n";
    cout << "|   3: Rombo Relleno                                           |\n";
    cout << "|   4: Rombo Vacio                                             |\n";
    cout << "|   5: Mo\244o Relleno                                            |\n";
    cout << "|   6: Mo\244o Vacio                                              |\n";
    cout << "|   7: Una Copa Rellena                                        |\n";
    cout << "|   8: Una Copa Vacia                                          |\n";
    cout << "|   9: Todas las figuras                                       |\n";
    cout << "|   10: Salir                                                  |\n";
    cout << "|                                                              |\n";
    do{
        if(cin.fail() || opc!= (int)opc){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
        }
        cout << "|  Pon tu opci\242n: ";
        cin >> opc;
    }while(((opc!=1 && opc!=2 &&opc!=3 &&opc!=4 &&opc!=5 &&opc!=6 &&opc!=7 &&opc!=8 &&opc!=9 && opc!=10) || cin.fail())|| opc!= (int)opc);

    cout << "________________________________________________________________\n";

    //Caso en el que sea 1o (Salir)
    if(opc==10){
        cout << "\nGracias por usar el programa :D";
        continue;
    }

    //Validar n
     do{
     if(cin.fail()|| n!= (int)n){
         cin.clear();
         cin.ignore(numeric_limits<int>::max(), '\n');
     }
    cout << "\nN\243mero de lineas (Tiene que ser impar, en el rango [5, 21]): ";
    cin >> n;
    }while (n < MINN || n > MAXN|| cin.fail()|| n%2==0 ||n!= (int)n);

    //Poner el símbolo
    cout << "\nPon el s\241mbolo que quieres que se imprima en tu figura: ";
    cin >> simbolo;
    cout << "\n";
    //Calcular mitad
    int mitad = (n/2)+1;

    //ENUMERAR figuras

    switch(opc){
        case 9:
        case 1: //RELOJ DE ARENA RELLENO
            for(int i = mitad; i>1; i--) {
                 for(int j = mitad; j>i; j--){
                     cout << " ";
                 }
                 for(int j = (2*i-1); j>0; j--){
                     cout << simbolo;
                 }
               cout << endl;
             }

            for(int i = 1; i<=mitad; i++) {
                 for(int j = mitad; j>i; j--){
                     cout << " ";
                 }
               for(int w=2*i-1; w>=1; w--){
                   cout << simbolo;
               }
               cout << endl;
             }
             cout << endl;
            if(opc==1){
                break;
            }

        case 2: //RELOJ DE ARENA VACIO
                for(int i = 0; i<n; i++){
                    cout << simbolo;
                }
                cout << endl;

                 for(int i = mitad; i>2; i--) {
                     for(int j = mitad+1; j>i; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                     for(int j = (2*i-1); j>4; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                   cout << endl;
                 }
                for(int i = 1; i<mitad; i++){
                    cout << " ";
                }
                cout << simbolo << endl;
                for(int i = 2; i<mitad; i++) {
                     for(int j = mitad; j>i; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                   for(int w=2*i-1; w>2; w--){
                       cout << " ";
                   }
                   cout << simbolo;
                   cout << endl;
                 }
                for(int i = 0; i<n; i++){
                    cout << simbolo;
                }
                cout << endl;
                cout << endl;
            if(opc==2){
                break;
            }

        case 3: //Rombo Relleno
                for(int i = 1; i<mitad; i++) {
                     for(int j = mitad; j>i; j--){
                         cout << " ";
                     }
                   for(int w=2*i-1; w>=1; w--){
                       cout << simbolo;
                   }
                   cout << endl;
                 }


                 for(int i = mitad; i>0; i--) {
                     for(int j = mitad; j>i; j--){
                         cout << " ";
                     }
                     for(int j = (2*i-1); j>0; j--){
                         cout << simbolo;
                     }
                   cout << endl;
                 }
                 cout << endl;
            if(opc==3){
                break;
            }

        case 4: //Rombo Vacio
                for(int i = 1; i<mitad; i++){
                    cout << " ";
                }
                cout << simbolo << endl;

                for(int i = 2; i<mitad; i++) {
                     for(int j = mitad; j>i; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                   for(int w=2*i-1; w>2; w--){
                       cout << " ";
                   }
                   cout << simbolo;
                   cout << endl;
                 }
                cout << simbolo ;
                for(int i = 2; i<n; i++){
                    cout << " ";
                }
                cout << simbolo << endl;

                 for(int i = mitad; i>2; i--) {
                     for(int j = mitad+1; j>i; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                     for(int j = (2*i-1); j>4; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                   cout << endl;
                 }

                for(int i = 1; i<mitad; i++){
                    cout << " ";
                }
                cout << simbolo << endl;
                cout << endl;
            if(opc==4){
                break;
            }

        case 5: //Moño Relleno
                for(int i = 0; i<mitad; i++){
                     for(int j= 0; j<=i; j++){
                         cout << simbolo;
                     }
                     for(int j= mitad-1; j>i; j--){
                         cout << "  ";
                     }
                     for(int j= 0; j<=i; j++){
                         cout << simbolo;
                     }
                     cout << endl;
                 }

                 for(int i = mitad-1; i>0; i--){
                     for(int j= 0; j<i; j++){
                         cout << simbolo;
                     }
                     for(int j= mitad; j>i; j--){
                         cout << "  ";
                     }
                     for(int j= 0; j<i; j++){
                         cout << simbolo;
                     }
                     cout << endl;
                 }
                 cout << endl;
            if(opc==5){
                break;
            }

        case 6: //Moño Vacio
                        cout << simbolo;
                for(int j= 1; j<n; j++){
                         cout << " ";
                     }
                cout << simbolo << endl;

                 for(int i = 1; i<mitad; i++){
                     cout << simbolo;
                     for(int j= 2; j<=i; j++){
                         cout << " ";
                     }
                     cout << simbolo;

                     for(int j= mitad-2; j>=i; j--){
                         cout << "  ";
                     }
                     cout << simbolo;
                     for(int j= 2; j<=i; j++){
                         cout << " ";
                     }
                     cout << simbolo;
                     cout << endl;
                 }

                 for(int i = mitad-2; i>0; i--){
                    cout << simbolo;
                     for(int j= 2; j<=i; j++){
                         cout << " ";
                     }
                     cout << simbolo;
                     for(int j= mitad-2; j>=i; j--){
                         cout << "  ";
                     }
                     cout << simbolo;
                     for(int j= 2; j<=i; j++){
                         cout << " ";
                     }
                     cout << simbolo;
                     cout << endl;
                 }

                    cout << simbolo;
                    for(int j= 1; j<n; j++){
                             cout << " ";
                         }
                    cout << simbolo << endl;
                    cout << endl;
            if(opc==6){
                break;
            }

        case 7: //Copa Rellena
                for(int i = mitad; i>0; i--) {
                     for(int j = mitad; j>i; j--){
                         cout << " ";
                     }
                     for(int j = (2*i-1); j>0; j--){
                         cout << simbolo;
                     }
                   cout << endl;
                 }

                for(int i = (n/2); i>1; i--){
                    for(int i = (n/2); i>0; i--){
                    cout << " ";
                }
                     cout << simbolo;
                    cout << endl;
                }

                for(int j = (2*mitad-1); j>0; j--){
                         cout << simbolo;
                     }
                     cout << endl << endl;
            if(opc==7){
                break;
            }

        case 8: //Copa Vacia
                for(int i = 0; i<n; i++){
                    cout << simbolo;
                }
                cout << endl;

                for(int i = mitad; i>2; i--) {
                     for(int j = mitad; j>=i; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                     for(int j = (2*i-1); j>4; j--){
                         cout << " ";
                     }
                     cout << simbolo;
                   cout << endl;
                 }

                for(int i = (n/2); i>0; i--){
                    for(int i = (n/2); i>0; i--){
                    cout << " ";
                }
                     cout << simbolo;
                    cout << endl;
                }

                for(int j = (2*mitad-1); j>0; j--){
                         cout << simbolo;
                     }
                     cout << endl ;
            if(opc==8){
                break;
            }
    }

    }
     system("pause");
    return 0;
}
