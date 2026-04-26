#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
	double giaTri;
	cout << "da thuc thu nhat: " << endl;
	cDaThuc daThuc1;
	daThuc1.nhap();
	daThuc1.xuat();
	giaTri = daThuc1.giaTri();
	cout << "gia tri da thuc la: " << giaTri << endl;
	cout << "da thuc thu hai (tinh tong,hieu): " << endl;
	cDaThuc daThuc2;
	daThuc2.nhap();
	cDaThuc::tongHaiDaThuc(daThuc1, daThuc2);
	cDaThuc::hieuHaiDaThuc(daThuc1, daThuc2);
	return 0;
}