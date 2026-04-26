#include <iostream>
using namespace std;
void getPhanSo(int& tu, int& mau) {
    cout << "nhap tu: ";
    cin >> tu;
    cout << "nhap mau: ";
    cin >> mau;
    while (mau == 0) {
        cout << "nhap lai mau: ";
        cin >> mau;
    }
}
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
void tinhTong(int tu1, int mau1, int tu2, int mau2) {
    int quyDongTu1 = tu1 * mau2;
    int quyDongTu2 = tu2 * mau1;
    int quyDongMau = mau1 * mau2;
    int tongTu = quyDongTu1 + quyDongTu2;
    int UCLN = getUCLN(tongTu, quyDongMau);
    tongTu = tongTu / UCLN;
    quyDongMau = quyDongMau / UCLN;
    cout << "tong hai phan so: " << tongTu << "/" << quyDongMau << endl;
}
void tinhHieu(int tu1, int mau1, int tu2, int mau2) {
    int quyDongTu1 = tu1 * mau2;
    int quyDongTu2 = tu2 * mau1;
    int quyDongMau = mau1 * mau2;
    int hieuTu = quyDongTu1 - quyDongTu2;
    int UCLN = getUCLN(hieuTu, quyDongMau);
    hieuTu = hieuTu / UCLN;
    quyDongMau = quyDongMau / UCLN;
    cout << "hieu hai phan so: " << hieuTu << "/" << quyDongMau << endl;
}
void tinhTich(int tu1, int mau1, int tu2, int mau2) {
    int tichTu = tu1 * tu2;
    int tichMau = mau1 * mau2;
    int UCLN = getUCLN(tichTu, tichMau);
    tichTu = tichTu / UCLN;
    tichMau = tichMau / UCLN;
    cout << "tich hai phan so: " << tichTu << "/" << tichMau << endl;
}
void tinhThuong(int tu1, int mau1, int tu2, int mau2) {
    int tichTu = tu1 * mau2;
    int tichMau = mau1 * tu2;
    int UCLN = getUCLN(tichTu, tichMau);
    tichTu = tichTu / UCLN;
    tichMau = tichMau / UCLN;
    cout << "thuong hai phan so: " << tichTu << "/" << tichMau << endl;
}
int main() {
    int tu1, mau1, tu2, mau2;
    cout << "phan so thu nhat: " << endl;
    getPhanSo(tu1, mau1);
    cout << "phan so thu hai: " << endl;
    getPhanSo(tu2, mau2);
    tinhTong(tu1, mau1, tu2, mau2);
    tinhHieu(tu1, mau1, tu2, mau2);
    tinhTich(tu1, mau1, tu2, mau2);
    tinhThuong(tu1, mau1, tu2, mau2);
    return 0;
}