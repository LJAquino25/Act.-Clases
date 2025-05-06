#include <iostream>
using namespace std;
int main(){
    int SALARY,OPTION,ISSS,AFP,RENT;
    cout<<"Enter your current salary: ";
    cin >> SALARY;
    cout <<"-----Menu-----" <<endl;
    cout <<"1.ISSS" <<endl;
    cout <<"2.AFP" <<endl;
    cout <<"3.Rent" <<endl;
    cout <<"4.Total" <<endl;
    cout <<"5.Finish" <<endl;
    cin >>OPTION;

    switch(OPTION){
        case 1:
            cout <<"" <<endl;
            cin >>;
            
            cout <<": " << <<endl;
            break;
        case 2:
            cout <<"" <<endl;
            cin >>;
            
            cout <<": " << <<endl;
            break;
        case 3:
            cout <<"" <<endl;
            cin >>;
            
            cout <<" " << <<endl;
            break;
        case 4:
            cout <<"current salary: ";
            cout <<"discount: ";
            cout <<"ISSS: ";
            cout <<"AFP: ";
            cout <<"Rent: ";
            cout <<"Total: ";
            break;
        case 5:

            break;
        default:
        cout <<"Please enter a valid option, from 1 to 5" <<endl;
        return 1;
    }

    return 0;
}