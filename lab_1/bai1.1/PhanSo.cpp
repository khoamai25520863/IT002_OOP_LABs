#include <iostream>
using namespace std;
int getUCLN(int tuSo, int mauSo) {
    if (tuSo < 0) {
        tuSo = -tuSo;
    };
    if (mauSo < 0) {
        mauSo = -mauSo;
    };
    while (mauSo != 0) {
        int uoc = tuSo % mauSo;
        tuSo = mauSo;
        mauSo = uoc;
    }
    return tuSo;
}
int main() {
    int tu;
    int mau;
    int UCLN;
    cout << "nhap tu:";
    cin >> tu;
    cout << "nhap mau:";
    cin >> mau;
    while (mau == 0) {
        cout << "nhap lai mau:";
        cin >> mau;
    }
    UCLN = getUCLN(tu, mau);
    tu = tu / UCLN;
    mau = mau / UCLN;
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    cout << "phan so toi gian: " << tu << "/" << mau;
}