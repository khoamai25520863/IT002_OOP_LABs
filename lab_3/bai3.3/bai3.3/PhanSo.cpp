#include <iostream>
#include "PhanSo.h"
using namespace std;

void PhanSo::nhapTu() {
	cout << "nhap tu: ";
	cin >> tu;
};

void PhanSo::nhapMau() {
	cout << "nhap mau: ";
	cin >> mau;

	while (mau == 0) {
		cout << "nhap lai mau: ";
		cin >> mau;
	}
};

int PhanSo::xuatTu() {
	return tu;
};

int PhanSo::xuatMau() {
	return mau;
};
