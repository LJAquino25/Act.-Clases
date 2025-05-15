#include <iostream>
#include <cmath>
#include <windows.h>
#include <winuser.h>
using namespace std;
int main(){
    float DATA1,DATA2;
    long long ANSWER;
    char OPCION;
    
    cout <<"----Calculadora Avanzada-----" <<endl;
    cout <<"-----------------------------" <<endl;
    cout <<"-  7   -  8   -   9  -   *  -" <<endl;
    cout <<"-----------------------------" <<endl;
    cout <<"-  4   -  5   -   6  -   -  -" <<endl;
    cout <<"-----------------------------" <<endl;
    cout <<"-  1   -  2   -   3  -   +  -" <<endl;
    cout <<"-----------------------------" <<endl;

    int x,y;
    while(1)
    {
        Sleep(1000);
        POINT cursor;
        GetCursorPos(&cursor);
        x = cursor .x;
        y = cursor .y;
        printf("*\r x = %i, y = %i", x ,y);
    }


    if((x >=206 && x <=306) && (y >=629 && y <=647)){
        DATA1 = 1;
    }

     cout <<" " <<DATA1;



    switch(OPCION)
    {
    case '+' :
        ANSWER = DATA1 + DATA2;
        cout << "= "<<ANSWER;
    break;
    case '-' :
        ANSWER = DATA1 - DATA2;
        cout  << "= "<<ANSWER;
    break;
    case '*' :
        ANSWER = DATA1 * DATA2;
        cout << "= "<<ANSWER;
    break;
    case '/' :
    if(DATA2 <=0){
        cout <<"It cannot be divided between zero";
    break;
    }else
        ANSWER = DATA1 / DATA2;
        cout << "= "<<ANSWER;
    break;
    case '^':
        ANSWER = pow(DATA1,DATA2);
        cout << "= "<<ANSWER;
    break;
    case '%':
        int REDONDEO = round(DATA1);
        int REDONDEO2 = round(DATA2);
        ANSWER = REDONDEO % REDONDEO2;
        cout << "= "<<ANSWER;
    break;
    } 
    return 0;
}

    