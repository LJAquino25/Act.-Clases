#include <iostream>
using namespace std;
int main(){
    double SALARY,ISSS,AFP,NETSALARY,RENT,TOTAL,TOTALDISCOUNT;
    int OPTION;
    cout<<"Enter your current salary: ";
    cin >> SALARY;
    
    //Menú de opciones
    cout <<"-----Menu-----" <<endl;
    cout <<"1.ISSS" <<endl;
    cout <<"2.AFP" <<endl;
    cout <<"3.Rent" <<endl;
    cout <<"4.Total" <<endl;
    cout <<"5.Finish" <<endl;
    cin >>OPTION;

    // Operaciones: con su orden de uso 
    ISSS = SALARY*0.3;
    AFP = SALARY*0.0725;
    NETSALARY = SALARY - ISSS - AFP;
    if(SALARY < 472.99){
    }else if (SALARY >= 473 && SALARY <=895.24 ){
        RENT = NETSALARY*0.10;
    }else if (SALARY >= 895.25 && SALARY <= 2038.10){
        RENT = NETSALARY*0.20;
    }else if (SALARY > 2039){
        RENT = NETSALARY*0.30;
    }
    TOTAL = AFP + ISSS + RENT;
    TOTALDISCOUNT = SALARY - TOTAL;

    //Switch del menu
        switch(OPTION){
        case 1:
            cout <<"Your salary: " <<SALARY <<endl;
            cout <<"Your discount: " << ISSS <<endl;
            if (ISSS <= 30){
                cout <<"if the discount applies";
            }else{
                cout <<"no discount applies";
            }
            break;
        case 2:
            cout <<"Your salary: " <<SALARY <<endl;
            cout <<"Your discount: " <<AFP <<endl;
            break;
        case 3:
            cout <<"Your salary: " <<SALARY <<endl;
            cout <<"Net salary: " <<NETSALARY <<endl;
            if(SALARY < 472.99){
                cout <<"no discount applies" <<endl;
            }else if (SALARY >= 473 && SALARY <=895.24 ){
                cout <<"Discount of 10%: " <<RENT <<endl;
            }else if (SALARY >= 895.25 && SALARY <= 2038.10){
                cout <<"Discount of 20%: " <<RENT <<endl;
            }else if (SALARY > 2039){
                cout <<"Discount of 30%: "<<RENT <<endl;
            }
            break;
        case 4:
            cout <<"current salary: " <<SALARY <<endl;
            cout <<"Total discount: "<<TOTALDISCOUNT <<endl;
            cout <<"ISSS: " <<ISSS <<endl;
            cout <<"AFP: " <<AFP << endl;
            cout <<"Rent: "<<RENT <<endl;
            cout <<"Total: "<<TOTAL <<endl;
            break;
        case 5:
            cout <<"Thanks for using this program";
            break;
        default:
        cout <<"Please enter a valid option, from 1 to 5" <<endl;
        return 1;
    }
    return 0;
}