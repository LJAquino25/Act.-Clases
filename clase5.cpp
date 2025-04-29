#include <iostream>
using namespace std;
int main(){
    int res, n;
    cout <<"ingresar un numero entero";
    cin >>n;

    res = n%2;
    switch (res)
    {
    case 1:
        cout <<n<<"es un numero impar";
        break;
    case 2:
        cout <<n<<"es un numero par";
        break;
    default:
        cout<<"datos incorrectos";
        break;
    }

    return 0;
}