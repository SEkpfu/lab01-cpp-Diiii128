#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r, h, s, v;
    cin >> r >> h;

    v = M_PI * r * r * h;
    s = 2 * M_PI * r * r + 2 * M_PI * r * h;

    cout << v << endl;
    cout << s;

    return 0;

}