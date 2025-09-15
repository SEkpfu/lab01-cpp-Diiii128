#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    double a, b;
    cout << "Введите два действительных числа\n";
    cout << "a =";
    cin >> a;

    cout << "b =";
    cin >> b;

    cout << "Сумма чисел равна " << a + b << endl;
    cout << "Разность чисео равна " << a - b << endl;
    cout << "Произведение чисел равно " << a * b << endl;

    return 0;
}