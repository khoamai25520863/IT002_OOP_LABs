#include <iostream>
#include <string>
#include "NhanVien.h"
using namespace std;

void NhanVien::getLucSinh() {
    do {
        cout << "Nhap ngay: ";
        cin >> ngay;
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;

        bool hopLe = true;

        if (nam <= 0) hopLe = false;
        if (thang < 1 || thang > 12) hopLe = false;

        int soNgay;

        if (thang == 2) {
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                soNgay = 29;
            else
                soNgay = 28;
        }
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            soNgay = 30;
        else
            soNgay = 31;

        if (ngay < 1 || ngay > soNgay) hopLe = false;

        if (!hopLe) {
            cout << "Ngay khong hop le, nhap lai!\n";
        }
        else {
            break;
        }

    } while (true);
}

void NhanVien::nhap() {
	cout << "nhap ma so nhan vien: ";
    cin.ignore();
	getline(cin, MSNV);
	cout << "nhap ho ten: ";
	getline(cin, hoTen);
	cout << "nhap ngay thang nam sinh: " << endl;
	getLucSinh();
	cout << "so san pham: ";
	cin >> soSP;
	cout << "gia san pham: ";
	cin >> giaSP;
	}

void NhanVien::xuat() {
    cout << "ma so nhan vien: " << MSNV << endl;
    cout << "ho ten: " << hoTen << endl;
    cout << "ngay thang nam sinh: " << ngay << "/" << thang << "/" << nam << endl;
    cout << "so san phan: " << soSP << endl;
    cout << "gia san pham: " << giaSP << endl;
}

double NhanVien::getLuong() {
    return soSP*giaSP;
}