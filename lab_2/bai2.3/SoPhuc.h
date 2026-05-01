#pragma once

class SoPhuc {
private:
	double iThuc, iAo;
public:
	void nhap();
	void xuat();
	SoPhuc tong(SoPhuc a);
	SoPhuc hieu(SoPhuc a);
	SoPhuc tich(SoPhuc a);
	SoPhuc thuong(SoPhuc a);
};