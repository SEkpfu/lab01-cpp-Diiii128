//task 9

#include <iostream>

using namespace std;

int main()
{
    int n, o, h, m, s;
    cin >> n;

    h = n / 3600;
    m = (n - h * 3600) / 60;
    s = (n % 3600) % 60;

    cout << h << " часов, " << m << " минут, " << s << " секунд.";

    return 0;

}