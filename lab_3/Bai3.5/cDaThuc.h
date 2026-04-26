#pragma once
class cDaThuc {
private:
	int bac;
	double* heSo;
public:
	cDaThuc();
	cDaThuc(int bacLonNhat);
	void nhap();
	void xuat();
	double giaTri();
	static void tongHaiDaThuc(cDaThuc thuNhat, cDaThuc thuHai);
	static void hieuHaiDaThuc(cDaThuc thuNhat, cDaThuc thuHai);
};