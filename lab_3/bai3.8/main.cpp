#include <iostream>
#include "cNhanVienSX.h"
#include "NhanVien.h"
using namespace std;

int main() {
	cNhanVienSX dsNhanVien;
	dsNhanVien.nhapDS();
	cout << endl;
	dsNhanVien.xuatDS();
	cout << endl;
	dsNhanVien.luongThapNhat();
	cout << endl;
	cout << "tong luong can tra: " << dsNhanVien.tongLuong() << endl;
	cout << endl;
	dsNhanVien.DSLuongTangDan();
	cout << endl;
	dsNhanVien.nhanVienCaoTuoi();
	return 0;
}