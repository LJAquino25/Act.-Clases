//Conversión de Base
//Solicita un número decimal y convierte su representación a binario usando while.
#include <iostream>
using namespace std;
int main(){
    int N,residuo,bin,positivo;
    cout <<"Ingrese el numero a convertir: ";
    cin>>N;
    while (N!=0)
    {
        if(N>0){
            N == positivo;
        }else{
            positivo = N*(-1);
        }
        residuo = positivo%2;
        cout <<residuo;
    } 
    return 0;
}