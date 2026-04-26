#include <iostream>
using namespace std;

void nhapPhanSo(int& tu, int& mau) {
    cout << "nhap tu phan so:";
    cin >> tu;
    cout << "nhap mau phan so:";
    cin >> mau;
    while (mau == 0) {
        cout << "vui long nhap lai mau:";
        cin >> mau;
    }
}
int soSanhHaiPhanSo(int tu1, int mau1, int tu2, int mau2) {
    int soLonHon;
    if (mau1 < 0) {
        mau1 = -mau1;
        tu1 = -tu1;
    }
    if (mau2 < 0) {
        mau2 = -mau2;
        tu2 = -tu2;
    }
    int quyDongTu1 = tu1 * mau2;
    int quyDongTu2 = tu2 * mau1;
    if (quyDongTu1 == quyDongTu2) {
        return 0;
    }
    else if (quyDongTu1 > quyDongTu2) {
        return 1;
    }
    else {
        return 2;
    }
}
int main() {
    int tu1, mau1;
    int tu2, mau2;
    int soLonHon;
    cout << "phan so thu nhat:" << endl;
    nhapPhanSo(tu1, mau1);
    cout << "nhap phan so thu hai:" << endl;
    nhapPhanSo(tu2, mau2);
    soLonHon = soSanhHaiPhanSo(tu1, mau1, tu2, mau2);
    if (soLonHon == 0) {
        cout << "hai so bang nhau";
    }
    else if (soLonHon == 1) {
        cout << tu1 << "/" << mau1 << " lon hon";
    }
    else {
        cout << tu2 << "/" << mau2 << " lon hon";
    }
    return 0;
}