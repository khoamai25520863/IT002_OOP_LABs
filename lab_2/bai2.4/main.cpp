#include "Time.h"
#include <iostream>
using namespace std;

int main() {
	cout << "nhap thoi gian: " << endl;
	Time a;
	a.Nhap();
	cout << "mot giay tiep theo va sau quy doi: " << endl;
	Time kq = a.TinhCongThemMotGiay();
	kq.Xuat();
	return 0;
}