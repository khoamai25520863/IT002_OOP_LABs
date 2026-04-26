#pragma once
#include "NhanVien.h"
using namespace std;

class cNhanVienSX {
private:
	NhanVien* DSNhanVien;
	int SoNhanVien;
public:
	cNhanVienSX();
	void setSoNhanVien();
	void nhapDS();
	void xuatDS();
	void luongThapNhat();
	double tongLuong();
	void DSLuongTangDan();
	void nhanVienCaoTuoi();
};
