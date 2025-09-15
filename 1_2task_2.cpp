#include <iostream>

int main()
{
    setlocale(0, "");
    int a;

    std::cin >> a;

    std::cout << (a - a%100) / 1000 << "\n";
    std::cout << a%10;

    return 0;

}