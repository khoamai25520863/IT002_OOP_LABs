#include"PhanSo.h"
#include <iostream>
using namespace std;
int getUCLN(int tu, int mau) {
	if (tu == 0) return mau;
	while (mau != 0) {
		int uoc = tu % mau;
		tu = mau;
		mau = uoc;
	}
	return tu;
}

void PhanSo::nhap() {
	iTu = 0;
	iMau = 0;
	cout << "nhap tu: ";
	cin >> iTu;
	while (iMau == 0) {
		cout << "nhap mau: ";
		cin >> iMau;
	}
}

void PhanSo::rutGon() {
	if (iMau < 0) {
		this->iMau = -iMau;
		this->iTu = -iTu;
	}
	int UCLN = getUCLN(iTu, iMau);
	this->iMau = iMau / UCLN;
	this->iTu = iTu / UCLN;
}

void PhanSo::xuat() {
	cout << iTu << "/" << iMau << endl;
}

PhanSo PhanSo::tong(PhanSo a) {
	PhanSo kq;
	kq.iTu = iTu * a.iMau + a.iTu*iMau;
	kq.iMau = iMau * a.iMau;
	kq.rutGon();
	return kq;
}

PhanSo PhanSo::hieu(PhanSo a) {
	PhanSo kq;
	kq.iTu = iTu * a.iMau - a.iTu * iMau;
	kq.iMau = iMau * a.iMau;
	kq.rutGon();
	return kq;
}

PhanSo PhanSo::tich(PhanSo a) {
	PhanSo kq;
	kq.iTu = iTu * a.iTu;
	kq.iMau = iMau * a.iMau;
	kq.rutGon();
	return kq;
}

PhanSo PhanSo::thuong(PhanSo a) {
	PhanSo kq;
	kq.iTu = iTu * a.iMau;
	kq.iMau = iMau * a.iTu;
	kq.rutGon();
	return kq;
}

int PhanSo::soSanh(PhanSo a) {
	int kq = iTu * a.iMau - a.iTu * iMau;
	if (kq > 0) {
		return 1;
	}
	else if (kq < 0) {
		return -1;
		}
}