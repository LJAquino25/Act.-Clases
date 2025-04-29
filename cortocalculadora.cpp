#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float num1, num2, resultados;
    int opcion;

    cout <<"ingrese el primer numero: ";
    cin >> num1;
    cout <<"ingrese el segundo numero: ";
    cin >> num2;

    cout <<"seleccionar una operacion: " <<endl;
    cout << "1.Suma" <<endl;
    cout << "2.resta" <<endl;
    cout << "3.multiplicacion" <<endl;
    cout << "4.division" <<endl;
    cout << "opcion" <<endl;
    cin >> opcion;

    switch(opcion){
    case 1:
        resultados = num1 + num2;
        cout <<"el resultado de la suma: " <<resultados <<endl;
        break;
    case 2:
        resultados = num1 - num2;
        cout <<"el resultado de la resta: " <<resultados <<endl;
        break;
    case 3:
        resultados = num1 * num2;
        cout <<"el resultado de la multiplicacion: " <<resultados <<endl;
        break;
    case 4:
        if (num2 != 0){
            resultados = num1 /num2;
            cout <<"el resultado de la division: " <<resultados <<endl;
        }else {
            cout <<"Error: Division por cero no permitida" <<endl;
        }
        break;
    default: 
        cout <<"Opcion no valida. porfavorm elija una opcion del 1 al 4" <<endl;
        return 1;
    }

    if (resultados >0){
        cout<<"el resultado es positivo"<<endl;
    } else if (resultados <0){
        cout<<"el resultado es negativo"<<endl;
    } else{
        cout <<"el resultado es cero"<<endl;
    }

    return 0;
}