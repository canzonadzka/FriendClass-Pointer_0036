#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 layang-layang : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 layang-layang : ";
        cin >> d2;
        cout << "Masukkan sisi pendek : ";
        cin >> s1;
        cout << "Masukkan sisi panjang : ";
        cin >> s2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

class BelahKetupat {
private:
    double d1, d2, s;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 belah ketupat : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 belah ketupat : ";
        cin >> d2;
        cout << "Masukkan sisi : ";
        cin >> s;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

void tampilkanKeliling(LayangLayang objectLayang, BelahKetupat objectBelah)
{
    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << 2 * (objectLayang.s1 + objectLayang.s2) << endl;
    cout << "Keliling Belah Ketupat : " << 4 * objectBelah.s << endl;
}

