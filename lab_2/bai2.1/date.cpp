#include"date.h"
#include<iostream>
using namespace std;

int ngayCuoiThang(int thang, int nam) {
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (nam % 4 == 0) {
            return 29;
        }
        else {
            return 28;
        }
    }
}

void date::Nhap() {
    iNgay = -1;
    iThang = -1;
    iNam = -1;
    bool ngayHopLe = false;
    while (ngayHopLe == false) {
        while (iNgay <= 0 || 32 <= iNgay) {
            cout << "nhap ngay:";
            cin >> iNgay;
        }
        while (iThang <= 0 || 13 <= iThang) {
            cout << "nhap thang:";
            cin >> iThang;
        }
        while (iNam < 0) {
            cout << "nhap nam:";
            cin >> iNam;
        }
        if (ngayCuoiThang(iThang, iNam) >= iNgay) {
            ngayHopLe = true;
        }
    }
}

void date::xuat() {
    cout << "ngay: " << iNgay << endl;
    cout << "thang: " << iThang << endl;
    cout << "nam: " << iNam << endl;
}

date date::NgayThangNamTiepTheo() {
    date tiepTheo;
    if (iNgay + 1 > ngayCuoiThang(iThang, iNam)) {
        tiepTheo.iNgay = 1;
        tiepTheo.iThang = iThang + 1;
        tiepTheo.iNam = iNam;
    }
    else {
        tiepTheo.iNgay = iNgay + 1;
        tiepTheo.iThang = iThang;
        tiepTheo.iNam = iNam;
    }
    if (tiepTheo.iThang == 13) {
        tiepTheo.iThang = 1;
        tiepTheo.iNam = iNam + 1;
    }
    return tiepTheo;
}