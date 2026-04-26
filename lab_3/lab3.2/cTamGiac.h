#pragma once
#include"Diem.h"
class cTamGiac {
private:
	Diem A, B, C;
public:
	void nhap();
	double chuVi();
	double dienTich();
	void tinhTien(double heSox,double heSoy);
	void phongTo(double heSoNhan);
	void thuNho(double heSoChia);
	void loaiTamGiac();
	void quay(double angle);
};