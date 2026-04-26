#include <iostream>
#include "cTamGiac.h"
using namespace std;

int main() {
	double heSox,heSoy,heSoNhan,heSoChia,angle;
	cTamGiac tamGiac;
	tamGiac.nhap();
	cout << "chu vi tam giac: " << tamGiac.chuVi() << endl;
	cout << "dien tich tam giac: " << tamGiac.dienTich() << endl;
	cout << "nhap he so tinh tien x: ";
	cin >> heSox;
	cout << "nhap he so tinh tien y: ";
	cin >> heSoy;
	tamGiac.tinhTien(heSox, heSoy);
	cout << "nhap he so phong to: ";
	cin >> heSoNhan;
	tamGiac.phongTo(heSoNhan);
	cout << "nhap he so thu nho: ";
	cin >> heSoChia;
	tamGiac.thuNho(heSoChia);
	tamGiac.loaiTamGiac();
	cout << "nhap goc quay: ";
	cin >> angle;
	tamGiac.quay(angle);
	return 0;

}