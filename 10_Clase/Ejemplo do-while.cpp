#include <iostream>
using namespace std;
int main(){
    string USER,PASSWORD;
    cout <<"Enter your password: ";
    cin >>PASSWORD;
    while(PASSWORD != "007"){
        cout <<"Invalid login";
        system("pause");
            system ("cls");
        cout <<"Enter your password: ";
        cin >>PASSWORD;
    }
    cout <<"Valid login";
    return 0;
}