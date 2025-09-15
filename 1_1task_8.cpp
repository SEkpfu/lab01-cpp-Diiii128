// task 8

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (a - a%1000)/1000 << endl;
    cout << a%10;

    return 0;
}