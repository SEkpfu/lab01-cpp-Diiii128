#include <iostream>

int main()
{
    double a1, a2, b1, b2, c1, c2, d, x, y;

    std::cin >> a1 >> a2 >> b1 >> c1 >> c2;

    d = a1*b2 - a2*b1;
    x = (c1*b2 - c2*b1)/d;
    y = (a1*c2 - a2*c1)/d;

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y;

    return 0;
}