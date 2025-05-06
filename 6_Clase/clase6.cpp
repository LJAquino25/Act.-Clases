#include <iostream>
using namespace std;
int main(){
    float SALARY,ISSS,AFP,RENT,NETSALARY;
    char OPTION;
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
            cout <<"Your salary: " <<SALARY <<endl;
            ISSS = SALARY * 0.3;
            cout <<"Your discount: " << ISSS <<endl;
            if (ISSS <= 30){
                cout <<"if the discount applies"
            }else{
                cout <<"no sicount applies"
            }
            break;
        case 2:
            cout <<"Your salary" <<SALARY <<endl;
            AFP = SALARY * 0.0725;
            cout <<"Your discount: " <<AFP <<endl;
            break;
        case 3:
            cout <<"Your salary: " <<SALARY <<endl;
            cout <<"Net salary: " <<NETSALARY <<endl;
            ISSS = SALARY * 0.3;
            AFP = SALARY * 0.0725;
            NETSALARY = ISSS - AFP;
            if(NETSALARY < 472.99){
                cout <<"no discount applies" <<endl;
            }else if (NETSALARY >= 473 && NETSALARY <=895.24 ){
                cout <<"Discount of 10%: " <<RENT <<endl;
                RENT = NETSALARY*0.1
            }else if (NETSALARY >= 895.25 && NETSALARY <= 2038.10){
                cout <<"Discount of 20%: " <<RENT <<endl;
                RENT = NETSALARY*0.2
            }else if (NETSALARY > 2039){
                cout <<"Discount of 30%: "<<RENT <<endl;
                RENT = NETSALARY*0.3
            }
            break;
        case 4:
            cout <<"current salary: " <<SALARY <<endl;
            cout <<"Total discount: ";
            cout <<"ISSS: " <<ISSS <<endl;
            ISSS = SALARY * 0.3;
            cout <<"AFP: " <<AFP << endl;
            AFP = SALARY * 0.0725;
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