#include <iostream>
#include <string>
#include "cNhanVienSX.h"
using namespace std;

void cNhanVienSX::setSoNhanVien() {
	cout << "so nhan vien muon dien: ";
	cin >> SoNhanVien;
}

cNhanVienSX::cNhanVienSX() {
	setSoNhanVien();
	DSNhanVien = new NhanVien[SoNhanVien];
}

void cNhanVienSX::nhapDS() {
	for (int i = 0; i < SoNhanVien; i++) {
		cout << "nhap thong tin nhan vien thu " << i + 1 << " : " << endl;
		DSNhanVien[i].nhap();
	}
}

void cNhanVienSX::xuatDS() {
	for (int i = 0; i < SoNhanVien; i++) {
		cout << " thong tin nhan vien thu " << i + 1 << " : " << endl;
		DSNhanVien[i].xuat();
	}
}

void cNhanVienSX::luongThapNhat() {
	double luongThap = DSNhanVien[0].getLuong();
	string MaSo = DSNhanVien[0].MSNV;
	string Ten = DSNhanVien[0].hoTen;

	for (int i = 1; i < SoNhanVien; i++) {
		if (luongThap > DSNhanVien[i].getLuong()) {
			luongThap = DSNhanVien[i].getLuong();
			MaSo = DSNhanVien[i].MSNV;
			Ten = DSNhanVien[i].hoTen;
		}
		else if (luongThap = DSNhanVien[i].getLuong()) {
			MaSo = MaSo + "," + DSNhanVien[i].MSNV;
			Ten = Ten + "," + DSNhanVien[i].hoTen;
		}
	}
	cout << "Nhan vien san xuat luong thap nhat: " << endl;
	cout << "MSNV: " << MaSo << endl;
	cout << "Ho ten: " << Ten << endl;
	cout << "muc luong: " << luongThap << endl;
}

double cNhanVienSX::tongLuong() {
	double tong = 0;
	for (int i = 0; i < SoNhanVien; i++) {
		tong = tong + DSNhanVien[i].getLuong();
	}
	return tong;
}

void cNhanVienSX::DSLuongTangDan() {
	cout << "danh sach nhan vien theo luong giam dan la:" << endl;
	for (int i = 1; i < SoNhanVien; i++) {
		for (int k = i; k < SoNhanVien; k++) {
			if (DSNhanVien[i].getLuong() < DSNhanVien[k].getLuong()) {
				 NhanVien temp  = DSNhanVien[i];
				 DSNhanVien[i] = DSNhanVien[k];
				 DSNhanVien[k] = temp;
			}
		}
	}
	xuatDS();
}

void cNhanVienSX::nhanVienCaoTuoi() {
	int ngayLon, thangLon, namLon;
	string ten;
	ngayLon = DSNhanVien[0].ngay;
	thangLon = DSNhanVien[0].thang;
	namLon = DSNhanVien[0].nam;
	ten = DSNhanVien[0].hoTen;
	for (int i = 0; i < SoNhanVien; i++) {
		if (namLon > DSNhanVien[i].nam) {
			ngayLon = DSNhanVien[i].ngay;
			thangLon = DSNhanVien[i].thang;
			namLon = DSNhanVien[i].nam;
			ten = DSNhanVien[i].hoTen;
		}
		else if (namLon = DSNhanVien[i].nam) {
			if (thangLon > DSNhanVien[i].thang) {
				ngayLon = DSNhanVien[i].ngay;
				thangLon = DSNhanVien[i].thang;
				namLon = DSNhanVien[i].nam;
				ten = DSNhanVien[i].hoTen;
			}
			else if (thangLon = DSNhanVien[i].thang) {
				if (ngayLon > DSNhanVien[i].ngay) {
					ngayLon = DSNhanVien[i].ngay;
					thangLon = DSNhanVien[i].thang;
					namLon = DSNhanVien[i].nam;
					ten = DSNhanVien[i].hoTen;
				}
				else if (ngayLon = DSNhanVien[i].ngay) {
					ten = ten + "," + DSNhanVien[i].hoTen;
				}
			}
		}
	}
	cout << "nhan vien lon tuoi nhat: " << ten << endl;
}