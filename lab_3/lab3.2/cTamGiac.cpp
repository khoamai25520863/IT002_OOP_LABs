#include <iostream>
#include <cmath>
#include "cTamGiac.h"
using namespace std;

void cTamGiac::nhap() {
	bool isTamGiac = false;
	while (isTamGiac == false) {
		cout << "diem A:" << endl;
		A.nhap();
		cout << "diem B:" << endl;
		B.nhap();
		cout << "diem C:" << endl;
		C.nhap();
		// kiem tra co thang hang hay trung nhau
		if (abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2) == 0) {
			cout << "tam giac nhap sai, vui long nhap lai:" << endl;
		}
		else {
			isTamGiac = true;
		}
	}
}

double cTamGiac::chuVi() {
	double AB, AC, CB, chuVi;
	AB = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	AC = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
	CB = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
	return AB + AC + CB;
}

double cTamGiac::dienTich() {
	double dienTich;
	dienTich = abs((A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y))/2);
	return dienTich;
}

void cTamGiac::tinhTien(double heSox,double heSoy) {
	cout << "toa do x,y cua A: " << A.x + heSox << "," << A.y + heSoy << endl;
	cout << "toa do x,y cua B: " << B.x + heSox << "," << B.y + heSoy << endl;
	cout << "toa do x,y cua C: " << C.x + heSox << "," << C.y + heSoy << endl;
}

void cTamGiac::phongTo(double heSoNhan) {
	cout << "toa do x,y cua A: " << A.x * heSoNhan << "," << A.y * heSoNhan << endl;
	cout << "toa do x,y cua B: " << B.x * heSoNhan << "," << B.y * heSoNhan << endl;
	cout << "toa do x,y cua C: " << C.x * heSoNhan << "," << C.y * heSoNhan << endl;
}

void cTamGiac::thuNho(double heSoChia) {
	cout << "toa do x,y cua A: " << A.x / heSoChia << "," << A.y / heSoChia << endl;
	cout << "toa do x,y cua B: " << B.x / heSoChia << "," << B.y / heSoChia << endl;
	cout << "toa do x,y cua C: " << C.x / heSoChia << "," << C.y / heSoChia << endl;
}

void cTamGiac::loaiTamGiac() {
	double AB, AC, CB;
	AB = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	AC = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
	CB = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
	if (AB == AC && AC == CB) {
		cout << "la tam giac deu";
	}
	else if (AB == AC || AB == CB || AC == CB) {
		cout << "la tam giac can";
	}
	else if ((A.x - B.x) * (A.x - C.x) + (A.y - B.y) * (A.y - C.y) == 0 ||
		(A.x - B.x) * (C.x - B.x) + (A.y - B.y) * (C.y - B.y) == 0 ||
		(A.x - C.x) * (C.x - B.x) + (A.y - C.y) * (C.y - B.y) == 0) {
		cout << "la tam giac vuong";
	}
	else {
		cout << "la tam giac thuong";
	}
	cout << endl;
}

void cTamGiac::quay(double angle) {
	double rad = angle * 3.14 / 180;
	double sinGiaTri = sin(rad);
	double cosGiaTri = cos(rad);
	A.x = A.x * cosGiaTri - A.y * sinGiaTri;
	A.y = A.x * sinGiaTri + A.y * cosGiaTri;
	B.x = B.x * cosGiaTri - B.y * sinGiaTri;
	B.y = B.x * sinGiaTri + B.y * cosGiaTri;
	C.x = C.x * cosGiaTri - C.y * sinGiaTri;
	C.y = C.x * sinGiaTri + C.y * cosGiaTri;
	cout << "toa do dinh moi:" << endl;
	cout << " A: " << A.x << "," << A.y << endl;
	cout << " B: " << B.x << "," << B.y << endl;
	cout << " C: " << C.x << "," << C.y << endl;
}