#include "SoPhuc.h"
#include <iostream>
using namespace std;

void SoPhuc::nhap() {
	cout << "nhap phan thuc: ";
	cin >> iThuc;
	cout << "nhap phan ao: ";
	cin >> iAo;
}

void SoPhuc::xuat() {
	if (iAo >= 0) {
		cout << iThuc << " + i" << iAo << endl;
	}
	else {
		cout << iThuc << " - i" << abs(iAo) << endl;
	}
}

SoPhuc SoPhuc::tong(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = iThuc + a.iThuc;
	kq.iAo = iAo + a.iAo;
	return kq;
}

SoPhuc SoPhuc::hieu(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = iThuc - a.iThuc;
	kq.iAo = iAo - a.iAo;
	return kq;
}

SoPhuc SoPhuc::tich(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = (iThuc * a.iThuc) - (iAo * a.iAo);
	kq.iAo = iThuc * a.iAo + a.iThuc * iAo;
	return kq;
}

SoPhuc SoPhuc::thuong(SoPhuc a) {
	SoPhuc kq;
	double mau = (a.iThuc * a.iThuc + a.iAo * a.iAo);
	kq.iThuc = ((iThuc * a.iThuc) + (iAo * a.iAo))/mau;
	kq.iAo =  ((a.iThuc * iAo) - (iThuc * a.iAo))/mau;
	return kq;
}