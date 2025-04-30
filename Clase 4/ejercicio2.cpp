#include <iostream>
using namespace std;
int main(){
int notafinal;
    cout <<"ingrese su nota final";
    cin >>notafinal;

        if (notafinal >= 90 && notafinal <= 100) {
            cout << "la nota es: " << notafinal << " excelente" <<endl;
            cout <<"felicidades tu nota es excelente";
        } else if (notafinal >= 80 && notafinal <= 89) {
            cout << "la nota es: " << notafinal << "muy bueno" <<endl;
            cout <<"felicidades tu nota es muy buena";
        } else if (notafinal >= 70 && notafinal <= 79){
            cout << "la nota es: " << notafinal << "bueno" <<endl;
            cout <<"felicidades tu nota es buena";
        } else if (notafinal >= 60 && notafinal <= 69){
            cout << "la nota es: " << notafinal << "regular" <<endl;
            cout <<"felicidades tu nota es regular";
        } else if (notafinal >= 50 && notafinal <= 59){
            cout << "la nota es: " << notafinal << " insuficiente" <<endl;
            cout <<"Tu nota es insuficiente, esfuerzate mas" <<endl;
        } else if (notafinal >= 0 && notafinal <= 49){
            cout << "la nota es: " << notafinal << "reprobado" <<endl;
            cout<<"Has reprobado, esfuerzate y estudia mas";
    }
    
    cout <<"Gracias por usar el programa";

    return 0;
}