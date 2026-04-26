#include <iostream>
#include <string>
using namespace std;

void nhap(string& tenHocSinh, float& diemToan, float& diemVan) {
    diemToan = -1;
    diemVan = -1;
    cout << "nhap ten hoc sinh:";
    getline(cin, tenHocSinh);
    while (diemToan < 0) {
        cout << "nhap diem toan:";
        cin >> diemToan;
    }
    while (diemVan < 0) {
        cout << "nhap diem van:";
        cin >> diemVan;
    }
}
void xuat(string tenHocSinh, float diemTrungBinh) {
    cout << "ho va ten: " << tenHocSinh << endl;
    cout << "diem trung binh: " << diemTrungBinh;
}
int main() {
    string tenHocSinh;
    float diemToan, diemVan, diemTrungBinh;
    nhap(tenHocSinh, diemToan, diemVan);
    diemTrungBinh = (diemToan + diemVan) / 2;
    xuat(tenHocSinh, diemTrungBinh);
}