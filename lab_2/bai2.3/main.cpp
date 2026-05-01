#include "SoPhuc.h"
#include <iostream>
using namespace std;

void main() {
	SoPhuc thu1, thu2;
	cout << "nhap so phuc thu nhat: " << endl;
	thu1.nhap();
	cout << "nhap so phuc thu hai: " << endl;
	thu2.nhap();
	SoPhuc tong = thu1.tong(thu2);
	cout << "tong hai so phuc: " << endl;
	tong.xuat();
	SoPhuc hieu = thu1.hieu(thu2);
	cout << "hieu hai so phuc: " << endl;
	hieu.xuat();
	SoPhuc tich = thu1.tich(thu2);
	cout << "tich hai so phuc: " << endl;
	tich.xuat();
	SoPhuc thuong = thu1.thuong(thu2);
	cout << "thuong hai so phuc: " << endl;
	thuong.xuat();
}