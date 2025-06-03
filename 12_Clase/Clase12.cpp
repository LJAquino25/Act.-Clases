//Tarifa de Luz Eléctrica
//Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.
#include <iostream>
using namespace std;
int main(){
    int precio, tarifa;
    cout<<"Ingrese su tarifa: ";
    cin >>tarifa;
    if (tarifa<100){
        cout<<"Tarifa baja"<<endl;
        precio = tarifa *0.184249; 
        cout <<"Factura: $" <<precio;
    }else if(tarifa >=100 && tarifa <=200){
        cout <<"Tarifa media"<<endl;
        precio = tarifa *0.183496 ; 
        cout <<"Factura: $" <<precio;
    }else{
        cout<<"tarifa alta"<<endl;
        precio = tarifa *0.182482; 
        cout <<"Factura: $" <<precio;
    }
    return 0;
}