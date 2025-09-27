#include <iostream>

using namespace std;

int main()
{
    // Komparasi (Sebanding)
    int a = 2;
    int b = 4;

    bool hasil1, hasil2;

    cout << "A = " << a << " B = " << b << endl;
    // Sebanding (==)
    hasil1 = (a == b);
    cout << "True Or False (a == b) " << hasil1 << endl;

    // tidak sebanding
    hasil2 = (a != b);
    cout << "True Or False (a != b) " << hasil2 << endl;

    // lebih dari
    hasil1 = (a > b);
    cout << "True Or False (a > b) " << hasil1 << endl;

    // kurang dari
    hasil1 = (a < b);
    cout << "True Or False (a < b) " << hasil1 << endl;

    // lebih dari sama dengan
    hasil1 = (a >= b);
    cout << "True Or False (a >= b) " << hasil1 << endl;

    // kurang dari sama dengan
    hasil1 = (a <= b);
    cout << "True Or False (a <= b) " << hasil1 << endl;
    return 0;
}