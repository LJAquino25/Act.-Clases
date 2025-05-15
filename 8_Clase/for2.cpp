#include <iostream>
using namespace std;
int main(void){

    int n,factorial = 1;
    cin >>n;
    
    for (int i = n; i >1; i--)   
    {
        factorial *= i; 
    }
    cout <<"El resultado es: " <<factorial;
    return 0;
}