#include <iostream>
using namespace std;

int main()
{
    int x, y, z, a, b;

    x = 10;
    y = 5;
    z = x + y;
    a = z - x;
    x = y * a;
    b = x - z;

    cout << z << endl;
    cout << a << endl;
    cout << x << endl;
    cout << b << endl;

    return 0;
}