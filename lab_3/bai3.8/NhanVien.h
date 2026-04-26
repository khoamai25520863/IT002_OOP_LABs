#pragma once
using namespace std;

class NhanVien {
public:
	string MSNV, hoTen;
	double giaSP, soSP;
	int ngay, thang, nam;
	void nhap();
	void xuat();
	void getLucSinh();
	double getLuong();
};