#include <iostream>
#include <cmath>
using namespace std;
int main(){
int y, x;
    cout <<"ingrese un numero";
    cin >> y;

   x=pow (y,y);

    if(x%2==0)
    {
        cout <<"el numero:" <<x<< "es par";
    }

    else{
        cout <<"el numero:" <<x<< "es impar";
    }

    if(y<0)
    {
        cout <<"el numero:" <<y<< "es negativo";
    }
     
    else {
        cout <<"el numero:" <<y<< "es positivo";
    }


    return 0;
}