#include <iostream>
using namespace std;
int main(){

    int numeros[5]; //5 espacios 
    cout <<"--Ingrese 5 numeros: --" <<endl;
    for (int i = 0; i < 5; i++){  //ir de posicion en posicion para ir llenando de numeros
        cout <<"Numero " <<i+1 <<": ";
        cin >> numeros[i];
    }   
    cout <<"--Numeros ingresados: --" <<endl;
    for (int i = 0; i < 5; i++){
        cout <<"Numero ingresados " <<i+1 <<": " <<numeros[i] <<endl;
    }


    return 0;
}