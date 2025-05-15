#include <iostream>
#include <windows.h>
#include <winuser.h>
using namespace std;
int main(){

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

    return 0;
}