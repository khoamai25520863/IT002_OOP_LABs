	#include <iostream>
	#include <cmath>
	#include "cDaThuc.h"
	using namespace std;

	cDaThuc::cDaThuc() {
		cout << "nhap bac da thuc: ";
		cin >> bac;
		heSo = new double[bac];
	}

	cDaThuc::cDaThuc(int bacLonNhat) {
		this->bac = bacLonNhat;
		heSo = new double[bac];
	}

	void cDaThuc::nhap() {
		for (int i = 0; i <= bac; i++) {
			cout << "nhap he so bac " << bac - i << ": ";
			cin >> heSo[i];
		}
	}

	void cDaThuc::xuat() {
		for (int i = 0; i <= bac; i++) {
			if (i < bac) {
				cout << heSo[i] << "*x^" << bac - i << "+";
			}
			else {
				cout << heSo[i] << endl;
			}
		}
	}

	double cDaThuc::giaTri() {
		double Tong = 0;
		double x;
		cout << "nhap x: ";
		cin >> x;
		for (int i = 0; i <= bac; i++) {
			Tong = Tong + heSo[i] * (pow(x,bac-i));
		}
		return Tong;
	}

	void cDaThuc::tongHaiDaThuc(cDaThuc thuNhat, cDaThuc thuHai) {
		int bacLonNhat;
		int khoangCachBac = abs(thuNhat.bac - thuHai.bac);
		if (thuNhat.bac < thuHai.bac) {
			bacLonNhat = thuHai.bac;
		}
		else {
			bacLonNhat = thuNhat.bac;
		}
		cDaThuc daThucTong(bacLonNhat);
		for (int i = 0; i <= bacLonNhat; i++) {
			if (thuNhat.bac > thuHai.bac) {
				if (thuHai.bac > i) {
					daThucTong.heSo[i] = thuNhat.heSo[i];
				}
				else {
					daThucTong.heSo[i] = thuNhat.heSo[i] + thuHai.heSo[i - khoangCachBac];
				}
			}
			if (thuNhat.bac < thuHai.bac) {
				if (thuNhat.bac > i) {
					daThucTong.heSo[i] = thuHai.heSo[i];
				}
				else {
					daThucTong.heSo[i] = thuHai.heSo[i] + thuNhat.heSo[i - khoangCachBac];
				}
			}
		}
		cout << "tong hai da thuc la: ";
		daThucTong.xuat();
	}

	void cDaThuc::hieuHaiDaThuc(cDaThuc thuNhat, cDaThuc thuHai) {
		int bacLonNhat;
		int khoangCachBac = abs(thuNhat.bac - thuHai.bac);
		if (thuNhat.bac < thuHai.bac) {
			bacLonNhat = thuHai.bac;
		}
		else {
			bacLonNhat = thuNhat.bac;
		}
		cDaThuc daThucHieu(bacLonNhat);
		for (int i = 0; i <= bacLonNhat; i++) {
			if (thuNhat.bac > thuHai.bac) {
				if (thuHai.bac > i) {
					daThucHieu.heSo[i] = thuNhat.heSo[i];
				}
				else {
					daThucHieu.heSo[i] = thuNhat.heSo[i] - thuHai.heSo[i - khoangCachBac];
				}
			}
			if (thuNhat.bac < thuHai.bac) {
				if (thuNhat.bac > i) {
					daThucHieu.heSo[i] = -thuHai.heSo[i];
				}
				else {
					daThucHieu.heSo[i] = -thuHai.heSo[i] + thuNhat.heSo[i - khoangCachBac];
				}
			}
		}
		cout << "hieu hai da thuc la: ";
		daThucHieu.xuat();
	}