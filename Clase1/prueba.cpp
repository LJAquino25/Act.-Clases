#include <iostream>
using namespace std;
    int main(){
        int a, b;
        cout <<"Digite un numero entero" <<endl;
        cin >> a;
        cout <<"Digite un numero entero" <<endl;
        cin >> b;
        int c = a + b;
        cout <<"Resultados de la suma es:" << c << endl;
        int d = a - b;
        cout <<"Resultados de la resta es:" << d << endl;
        int e = a * b;
        cout <<"Resultados de la multiplicacion es:" << e << endl;
        int f = a / b;
        cout <<"Resultados de la division es:" << f << endl;

        
        bool ambosPositivos = a > 0 && b > 0; 
        bool algunoMayor100 = a > 100 || b > 100;
        bool sonIguales = a == b;
        bool noDiferentes = !(a!=b);
        
        cout <<"Ambos positivos:" <<ambosPositivos <<endl; 
        cout <<"Alguno es mayor a 100:" <<algunoMayor100 <<endl;
        cout <<"Los dos son iguales:" << sonIguales <<endl;
        cout <<"No son diferentes:" <<noDiferentes <<endl;

        return 0;
    }