#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, ans1, ans2;
    cin >> x >> y;

    ans1 = exp(x) - (y*y + 12.0*x*y - 3.0*x*x)/(18.0*y - 1.0);
    ans2 = 2.0*(1/tan(3.0*x)) - 1/(12.0*x*x + 7.0*x - 5.0);

    ans1 < 0 ? cout << fixed << setprecision(5) << ans1 << endl : cout << fixed << setprecision(5) << "+" << ans1 << endl;
    ans2 < 0 ? cout << uppercase << scientific << ans2 << endl : cout << uppercase << scientific << "+" << ans2 << endl;
}