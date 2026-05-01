#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
	PhanSo thu1,thu2;
	cout << "nhap phan so thu nhat: " << endl;
	thu1.nhap();
	cout << "nhap phan so thu hai: " << endl;
	thu2.nhap();
	cout << endl;
	cout << "phan so thu nhat sau rut gon: " << endl;
	thu1.rutGon();
	thu1.xuat();
	cout << "phan so thu hai sau rut gon: " << endl;
	thu2.rutGon();
	thu2.xuat();
	cout << endl;
	cout << "tong hai phan so:" << endl;
	PhanSo tong = thu1.tong(thu2);
	tong.xuat();
	cout << "hieu hai phan so:" << endl;
	PhanSo hieu = thu1.hieu(thu2);
	hieu.xuat();
	cout << "tich hai phan so:" << endl;
	PhanSo tich = thu1.tich(thu2);
	tich.xuat();
	cout << "thuong hai phan so:" << endl;
	PhanSo thuong = thu1.thuong(thu2);
	thuong.xuat();
	cout << endl;
	cout << "so sanh hai phan so: " << endl;
	int kq = thu1.soSanh(thu2);
	if (kq == 1) {
		cout << "so thu nhat lon hon. " << endl;
	}
	else if (kq == -1) {
		cout << "so thu hai lon hon. " << endl;
	}
	else {
		cout << "hai so bang nhau. " << endl;
	}
	return 0;
}