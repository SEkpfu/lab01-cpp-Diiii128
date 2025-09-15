#include <iostream>

using namespace std;

int main(){
    setlocale(0, "");
    double t;

    cout << "Введите температуру в градусах Цельсия\n";
    cout << "t =";
    cin >> t;

    cout << "Температура в градусах Фаренгейта равна " << 9.0/5.0 * t + 32.0 << endl;
    cout << "Температура в градусах Кельвина равна " << t + 273.0 << endl;
    
    return 0;
}