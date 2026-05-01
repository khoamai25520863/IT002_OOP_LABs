#pragma once

class Time {
private:
	int iGio = -1, iPhut = -1, iGiay = -1;
public:
	void Nhap();
	void Xuat();
	Time TinhCongThemMotGiay();
};