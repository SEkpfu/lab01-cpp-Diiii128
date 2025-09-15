#include <iostream>

using namespace std;

int main(){
    setlocale(0, "");
    const double PI = 3.14159;
    double r;

    cout << "Введите радиус\n";
    cout << "r =";
    cin >> r;

    cout << "Объем шара равен " << 4.0/3.0 * PI * r*r*r;

    return 0;
}