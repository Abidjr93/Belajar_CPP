#include <iostream>
using namespace std;

int main()
{

    // Operasi Aritmatika (+,-,*,/,%)

    int a = 10;
    int b = 5;

    int hasil;

    // Penjumlahan(+)
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan(-)
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Perkalian(*)
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Pembagian (/)
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // Modulus (%)
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    return 0;
}