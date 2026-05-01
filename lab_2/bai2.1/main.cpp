#include"date.h"
#include <iostream>
using namespace std;

int main() {
	date a;
	a.Nhap();
	cout << "ngay hien tai:" << endl;
	a.xuat();
	cout << "ngay thang nam tiep theo: " << endl;
	date nextDate = a.NgayThangNamTiepTheo();
	nextDate.xuat();
	return 0;
}
