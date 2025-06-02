#include <iostream>
using namespace std;

int temperature(int a)
{
    return (a * 9 / 5) + 32;
}

int main()
{
    int b;
    cout << "Ingrese la temperatura (Celsius): ";
    cin >> b;

    cout << "La conversion a fahrenheit: " << temperature(b) << endl;
    return 0;
}