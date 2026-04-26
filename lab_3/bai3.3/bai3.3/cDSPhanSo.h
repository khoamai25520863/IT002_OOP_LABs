#pragma once

class cDSPhanSo {
private:
	PhanSo* daySo;
	int soPhanTu;
	int quyDongMau;
public:
	cDSPhanSo();
	void nhapDSPhanSo();
	void xuatDSPhanSo();
	void sumDSPhanSo();
	void findPhanSoLonNhat();
	void findPhanSoBeNhat();
	int findTuLonNhat();
	void dayPSTangDan();
	void dayPSGiamDan();
};