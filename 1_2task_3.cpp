#include <cmath>
#include <iostream>

int main()
{
    double a, b, c, min, sum, prod;
    std::cin >> a >> b >> c;

    min = std::min(a, c);
    sum = a + b + c;
    prod = a * b * c;

    int (sum*sum) % 2 == 0 ? std::cout << min : std::cout << sum << ' ' << prod;

    return 0;

}