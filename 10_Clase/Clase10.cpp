#include <iostream>
using namespace std;
int main(){
    int contador;
    cin >> contador;
    while(contador <=5){ // entre parentesis la condicion de cuantos ciclos seran
        cout <<"Contador en while: " << contador <<endl; // imprime cada valor 
        contador++; //incrementa el contador en 1
    }


    return 0;
}