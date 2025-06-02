#include <iostream>
using namespace std;
int main(){

    int numero[] = {5, 10, 15, 20, 25, 6};
    int tamanio = sizeof(numero) / sizeof(numero[0]);
    int suma = 0;

    for(int i=0; i < tamanio; i++){
        suma =+ numero[1];
        cout <<suma;
    }

     float promedio = static_cast<float>(suma)/tamanio;
    return 0;
}