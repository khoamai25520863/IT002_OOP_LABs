#pragma once

class PhanSo {
private:
	int iTu, iMau;
public:
	void nhap();
	void xuat();
	void rutGon();
	PhanSo tong(PhanSo a);
	PhanSo hieu(PhanSo a);
	PhanSo tich(PhanSo a);
	PhanSo thuong(PhanSo a);
	int soSanh(PhanSo a);
};