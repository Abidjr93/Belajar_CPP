#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    bool nilai, hasil, tahun;

    // TUGAS PERTAMA
    //  Logika Operasi
    cout << "Input Nilai" << endl;
    cin >> a;

    nilai = (a % 5 == 0) && (a > 10);
    cout << nilai << endl;

    // TUGAS KEDUA
    cout << endl;
    cout << "Masukkan Nilai a,b,c Yang Memenuhi Teorema Pythagoras" << endl;
    cin >> a >> b >> c;
    hasil = (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
    cout << hasil << endl;

    // TUGAS KETIGA
    cout << endl;
    cout << "INI ADALAH PENENTU TAHUN KABISAT ATAU BUKAN" << endl;
    cout << "Masukkan Tahun" << endl;
    cin >> a;

    tahun = (a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0);
    cout << "Tahun " << a << " = " << tahun << endl;
    return 0;
}