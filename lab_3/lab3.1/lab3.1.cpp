#include <iostream>
#include <string>

using namespace std;

class mang {
public:
    int tu[2];

    void nhap() {
        for (int i = 0; i < 2; i++) {
            cin >> tu[i];
        }
    }

    void xuat() {
        for (int i = 0; i < 2; i++) {
            cout << tu[i] << " ";
        }
    }
};

class PhanSo {
public:
    mang a[2], b[2];

    void nhap() {
        for (int i = 0; i < 2; i++) {
            a[i].nhap();
        }
    }

    void xuat() {
        for (int i = 0; i < 2; i++) {
            a[i].xuat(); // ? ?úng
        }
    }
};

int main() {
    PhanSo p;
    p.nhap();
    p.xuat();
    return 0;
}