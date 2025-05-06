#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double sum, subtraction, multiplication, division, power;
    int data1;
    cout <<"enter data 1" <<endl;
    cin >> data1;
    sum= data1 + 10;
    cout <<"the result of the sum is:" <<sum <<endl;
    subtraction= data1 - 5;
    cout <<"the result of the subtraction is:" <<subtraction <<endl;
    multiplication= data1*2;
    cout <<"the result of the multiplication is:" <<multiplication <<endl;
    division= data1/4;
    cout <<"the result of the division is:" <<division <<endl;
    power= pow(data1, 1500);
    cout <<"the result of the power is:" <<power <<endl;


    bool mayor= data1>0 && data1%2==0;
    cout <<"the result is pair:" <<mayor <<endl;
    
   
    return 0;
}
