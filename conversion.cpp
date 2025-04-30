#include <iostream>
using namespace std;
int main(){
    int USD, EUR, JPY, GBP, conversion;
    int opcion;
    cout<<"seleccionar una conversion" <<endl;
    cout <<"1. USD a EUR" <<endl;
    cout <<"2. USD a JPY" <<endl;
    cout <<"3. USD a GBP" <<endl;
    cin >> opcion;
    
    switch(opcion){
        case 1:
            cout <<"ingrese cantidad de dolares" <<endl;
            cin >>USD;
            EUR = 9.9560;
            conversion = USD / EUR;
            cout <<"La conversion es: " <<conversion <<endl;
            break;
        case 2:
            cout <<"ingrese cantidad de dolares" <<endl;
            cin >>USD;
            JPY = 0.0615;
            conversion = USD / JPY;
            cout <<"La conversion es: " <<conversion <<endl;
            break;
        case 3:
            cout <<"ingrese cantidad de dolares" <<endl;
            cin >>USD;
            GBP = 11.7097;
            conversion = USD / GBP;
            cout <<"La conversion es: " <<conversion <<endl;
            break;
        default:
        cout <<"Opcion no valida. porfavor elija una opcion del 1 al 3" <<endl;
        return 1;
    }
       
    return 0;
}