#include "PhanSo.h"
#include "cDSPhanSo.h"
#include <iostream>
#include <string>
using namespace std;

cDSPhanSo::cDSPhanSo() {
	cout << "nhap so phan tu: ";
	cin >> soPhanTu;
}

void cDSPhanSo::nhapDSPhanSo() {
	int mauQuyDong = 1;
	daySo = new PhanSo[soPhanTu];
	for (int i = 0; i < soPhanTu; i++) {
		 daySo[i].nhapTu();
		 daySo[i].nhapMau();
		 mauQuyDong = mauQuyDong * daySo[i].xuatMau();
	}
	this->quyDongMau = mauQuyDong;
};


void cDSPhanSo::xuatDSPhanSo() {
	cout << "danh sach phan so: " << endl;
	for (int i = 0; i < soPhanTu; i++) {
		cout << daySo[i].xuatTu() << "/";
		cout << daySo[i].xuatMau() << endl;
	}
};

void cDSPhanSo::sumDSPhanSo() {
	int tong = 0;
	for (int i = 0; i < soPhanTu; i++) {
		tong = tong + (daySo[i].xuatTu() * quyDongMau)/daySo[i].xuatMau();
	}
	cout << "tong cac phan so: " << tong << "/" << quyDongMau << endl;
}

void cDSPhanSo::findPhanSoLonNhat() {
	int tuLonNhat = daySo[0].xuatTu();
	int mauLonNhat = daySo[0].xuatMau();
	if (mauLonNhat < 0) {
		tuLonNhat = -tuLonNhat;
		mauLonNhat = -mauLonNhat;
	}
	for (int i = 1; i < soPhanTu; i++) {
		int tu = daySo[i].xuatTu();
		int mau = daySo[i].xuatMau();
		if (mau < 0) {
			tu = -tu;
			mau = -mau;
		}
		if (tuLonNhat * mau < tu * mauLonNhat) {
			tuLonNhat = tu;
			mauLonNhat = mau;
		}
	}
	cout << "phan so lon nhat la: " << tuLonNhat << "/" << mauLonNhat << endl;
}

void cDSPhanSo::findPhanSoBeNhat() {
	int tuBeNhat = daySo[0].xuatTu();
	int mauBeNhat = daySo[0].xuatMau();
	if (mauBeNhat < 0) {
		tuBeNhat = -tuBeNhat;
		mauBeNhat = -mauBeNhat;
	}
	for (int i = 1; i < soPhanTu; i++) {
		int tu = daySo[i].xuatTu();
		int mau = daySo[i].xuatMau();
		if (mau < 0) {
			tu = -tu;
			mau = -mau;
		}
		if (tuBeNhat * mau > tu * mauBeNhat) {
			tuBeNhat = tu;
			mauBeNhat = mau;
		}
	}
	cout << "phan so be nhat la: " << tuBeNhat << "/" << mauBeNhat << endl;
}

int cDSPhanSo::findTuLonNhat() {
	int tuLonNhat = daySo[0].xuatTu();
	for (int i = 1; i < soPhanTu; i++) {
		if (tuLonNhat < daySo[i].xuatTu()) {
			tuLonNhat = daySo[i].xuatTu();
		}
	}
	return tuLonNhat;
}

void cDSPhanSo::dayPSTangDan() {
	cout << "day PS tang dan: " << endl;
	for (int i = 0; i < soPhanTu; i++) {
		for (int k = i; k < soPhanTu; k++) {
			int tuBiSoSanh = daySo[i].xuatTu();
			int mauBiSoSanh = daySo[i].xuatMau();
			if (mauBiSoSanh < 0) {
				tuBiSoSanh = -tuBiSoSanh;
				mauBiSoSanh = -mauBiSoSanh;
			}
			int tuDiSoSanh = daySo[k].xuatTu();
			int mauDiSoSanh = daySo[k].xuatMau();
			if (mauDiSoSanh < 0) {
				tuDiSoSanh = -tuDiSoSanh;
				mauDiSoSanh = -mauDiSoSanh;
			}
			if (tuBiSoSanh * mauDiSoSanh > tuDiSoSanh * mauBiSoSanh) {
				int tempTu = tuBiSoSanh;
				int tempMau = mauBiSoSanh;
				daySo[i].tu = daySo[k].xuatTu();
				daySo[i].mau = daySo[k].xuatMau();

				daySo[k].tu = tempTu;
				daySo[k].mau = tempMau;
			}
 		}
	}
	xuatDSPhanSo();
} 

void cDSPhanSo::dayPSGiamDan() {
	cout << "day PS Giam dan: " << endl;
	for (int i = 0; i < soPhanTu; i++) {
		int tuBiSoSanh = daySo[i].xuatTu();
		int mauBiSoSanh = daySo[i].xuatMau();
		if (mauBiSoSanh < 0) {
			tuBiSoSanh = -tuBiSoSanh;
			mauBiSoSanh = -mauBiSoSanh;
		}
		for (int k = i; k < soPhanTu; k++) {
			int tuDiSoSanh = daySo[k].xuatTu();
			int mauDiSoSanh = daySo[k].xuatMau();
			if (mauDiSoSanh < 0) {
				tuDiSoSanh = -tuDiSoSanh;
				mauDiSoSanh = -mauDiSoSanh;
			}
			if (tuBiSoSanh * mauDiSoSanh < tuDiSoSanh * mauBiSoSanh) {
				int tempTu = tuBiSoSanh;
				int tempMau = mauBiSoSanh;

				daySo[i].tu = daySo[k].xuatTu();
				daySo[i].mau = daySo[k].xuatMau();

				daySo[k].mau = tempTu;
				daySo[k].tu = tempMau;

				tuBiSoSanh = daySo[i].xuatTu();
				mauBiSoSanh = daySo[i].xuatMau();
			}
		}
	}
	xuatDSPhanSo();
}