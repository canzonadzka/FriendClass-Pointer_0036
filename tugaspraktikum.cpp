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
