#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, x, y;
    float x1, x2;
    cout <<"program resolve ax^2+bx+cx=0" <<endl;
    cout <<"enter the values a:";
    cin >>a;
    cout <<"enter the values b:";
    cin >>b;
    cout <<"enter the values c:";
    cin >>c;

    y= pow(b,2);
    
    if(a!=0){

        if(y-4*a*c>0){
        x1= (-b+pow(b*2-4*a*c,0.5))/2/a;
        x2= (-b-pow(b*2-4*a*c,0.5))/2/a;
        cout <<"the square roots are:" <<endl;
        cout <<"X1:" <<x1 <<endl;
        cout <<"X2:" <<x2 <<endl;
    } 
    else{
        cout <<"The roots are complex cant resolve";
    }
    } else if(b!=0){

        cout <<"The ecuation is linear";
        x=-c/b;
        cout <<"The root is:"<<x;

    } else {
        cout <<"error when entering data";
    }
   
    return 0;
}