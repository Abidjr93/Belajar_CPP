#include <iostream>
using namespace std;

int main()
{

    // Operator Logika Sederhana Biasanya Ada 3 Yaitu Not(!), And (&&), dan Or (||)
    int a = 2;
    int b = 5;

    bool hasil;

    cout << "Logika Or" << endl;
    // Operator Not
    hasil = !(a == b);
    cout << hasil << endl;
    cout << "Logika And" << endl;
    // Operator And
    hasil = (a == 2) && (b == 5);
    cout << hasil << endl;
    hasil = (a == 5) && (b == 5);
    cout << hasil << endl;
    cout << "Logika Or" << endl;
    // Operator Or
    hasil = (a == 2) || (b == 5);
    cout << hasil << endl;
    hasil = (a == 2) || (b == 2);
    cout << hasil << endl;

    return 0;
}