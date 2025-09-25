#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // Macam - Macam Tipe Data Fundamental
    // Pada Integer kita bisa menghilangkan tanda bilangan +/- dengan menambahkan unsigned
    // Bilangan Bulat
    int a;
    long b;
    short c;
    unsigned int h;

    // Bilangan Desimal
    float d;
    double e;

    // Character
    char f;

    // Boolean
    bool g;

    a = 1;
    b = 2;
    c = 3;
    h = 4;
    d = 12.8;
    e = 11.6;
    f = 'A';
    g = true;

    // Tipe Data int
    cout << "Nilai dari a (int) = " << a << endl;
    cout << "Ukuran Dari Int = " << sizeof(a) << " byte" << endl;
    cout << "Batas Nilai Maximal Int = " << numeric_limits<int>::max() << endl;
    cout << "Batas Nilai Minimum Int = " << numeric_limits<int>::min() << endl;
    cout << endl;

    // Tipe Data long
    cout << "Nilai dari b (long) = " << b << endl;
    cout << "Ukuran Dari Long = " << sizeof(b) << " byte" << endl;
    cout << "Batas Nilai Maximal Long = " << numeric_limits<long>::max() << endl;
    cout << "Batas Nilai Minimum Long = " << numeric_limits<long>::min() << endl;
    cout << endl;

    // Tipe Data short
    cout << "Nilai dari c (short) = " << c << endl;
    cout << "Ukuran Dari Short = " << sizeof(c) << " byte" << endl;
    cout << "Batas Nilai Maximal Short = " << numeric_limits<short>::max() << endl;
    cout << "Batas Nilai Minimum Short = " << numeric_limits<short>::min() << endl;
    cout << endl;

    // Tipe Data unsigned int
    cout << "Nilai dari h (unsigned int) = " << h << endl;
    cout << "Ukuran Dari Unsigned Int = " << sizeof(h) << " byte" << endl;
    cout << "Batas Nilai Maximal Unsigned Int = " << numeric_limits<unsigned int>::max() << endl;
    cout << "Batas Nilai Minimum Unsigned Int = " << numeric_limits<unsigned int>::min() << endl;
    cout << endl;

    // Tipe Data float
    cout << "Nilai dari d (float) = " << d << endl;
    cout << "Ukuran Dari Float = " << sizeof(d) << " byte" << endl;
    cout << "Batas Nilai Maximal Float = " << numeric_limits<float>::max() << endl;
    cout << "Batas Nilai Minimum Float = " << numeric_limits<float>::min() << endl;
    cout << endl;

    // Tipe Data double
    cout << "Nilai dari e (double) = " << e << endl;
    cout << "Ukuran Dari Double = " << sizeof(e) << " byte" << endl;
    cout << "Batas Nilai Maximal Double = " << numeric_limits<double>::max() << endl;
    cout << "Batas Nilai Minimum Double = " << numeric_limits<double>::min() << endl;
    cout << endl;

    // Tipe Data char
    cout << "Nilai dari f (char) = " << f << endl;
    cout << "Ukuran Dari Char = " << sizeof(f) << " byte" << endl;
    cout << "Batas Nilai Maximal Char = " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "Batas Nilai Minimum Char = " << static_cast<int>(numeric_limits<char>::min()) << endl;
    cout << endl;

    // Tipe Data bool
    cout << "Nilai dari g (bool) = " << g << endl;
    cout << "Ukuran Dari Boolean = " << sizeof(g) << " byte" << endl;
    cout << "Batas Nilai Maximal Boolean = " << numeric_limits<bool>::max() << endl;
    cout << "Batas Nilai Minimum Boolean = " << numeric_limits<bool>::min() << endl;

    return 0;
}