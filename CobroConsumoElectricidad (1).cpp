/*
Nombre: Cobro por consumo de electricidad
Descripción: Elabore un programa en C++ que, dada la lectura actual,
la lectura anterior y el mes a facturar (julio o agosto), calcule y presente los siguientes cargos: 

Energía 
IVA 16% 
DAP 
Total 

Autor: Ana Laura Chenoweth Galaz
Fecha: 06/02/23
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double lecant, lecact, kh, resd, kh300, kh1200, energia = 0, iva= 0; 
    int mes = 0;
    cout<<"Hola, este es un programa en C++ que, dada la lectura actual, \nla lectura anterior y el mes a facturar (julio o agosto)\n";
    
    cout << "\nIngresa tu lectura actual: ";
    cin >> lecact;
    cout << "Ahora ingresa tu lectura anterior: ";
    cin >> lecant;
    cout << "Pon el mes a facturar (1 para Julio y 2 para Agosto):  ";
    cin >> mes;
    
    if((lecant>0 && lecact>0) && (lecact>=lecant)){
        kh = lecact-lecant;
        
        switch(mes){
            case 1:
                    if(kh<300){
                        energia = kh*0.727;
                    }else if(kh<1200){
                        energia = (300)*(0.727);
                        kh -= 300;
                        energia += (0.910)*(kh);
                    } else if(kh<2500){
                        energia = (300)*(0.727)+(900)*(0.910);
                        kh -= 1200;
                        energia += (2.212)*(kh);
                    }else{
                        energia = (300)*(0.727)+(900)*(0.910)+(1300)*(2.212);
                        kh -= 2500;
                        energia += (3.496)*(kh);
                    }
                break;
            case 2:
                    if(kh<300){
                        energia = kh*0.732;
                    }else if(kh<1200){
                        energia = (300)*(0.732);
                        kh -= 300;
                        energia += (0.916)*(kh);
                    } else if(kh<2500){
                        energia = (300)*(0.732)+(900)*(0.916);
                        kh -= 1200;
                        energia += (2.226)*(kh);
                    }else{
                        energia = (300)*(0.732)+(900)*(0.916)+(1300)*(2.226);
                        kh -= 2500;
                        energia += (3.518)*(kh);
                    }
                
                break;
            default: cout << "Este n\243mero no pertenece a Julio(1) o Agosto(2)";
            
        }}else{
        cout << "Alguna de las lecturas no es correcta, vuelva a intentar por favor.";
    }
        cout << "\n";
        iva = energia * 0.16;
        cout << "Energ\241a         " << energia << "\n";
        cout << "IVA 16%         " << iva << "\n";
        cout << "DAP             " << "60.00" << "\n";
        cout << "TOTAL           " << energia+iva+60.00 << "\n";
    
    system("pause");

    return 0;
}
