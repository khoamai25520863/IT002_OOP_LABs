#include <iostream>
#include "PhanSo.h"
#include "cDSPhanSo.h"
using namespace std;

int main() {
	int tuLonNhat;
	cDSPhanSo dayPS;
	dayPS.nhapDSPhanSo();
	dayPS.xuatDSPhanSo();
	dayPS.sumDSPhanSo();
	dayPS.findPhanSoLonNhat();
	dayPS.findPhanSoBeNhat();
	tuLonNhat = dayPS.findTuLonNhat();
	cout << "tu lon nhat la: " << tuLonNhat << endl;
	dayPS.dayPSTangDan();
	dayPS.dayPSGiamDan();
	return 0;
}