#include <iostream>

int main()
{
    double x, x2, x3, x5, x7, x4, x14;
    std::cin >> x;
    x2 = x * x;
    x3 = x * x2;
    x5 = x2 * x3;
    x7 = x5 * x2;
    x14 = x7 * x7;

    std::cout << x14 - x5 + x3 - 2;

    return 0;
}