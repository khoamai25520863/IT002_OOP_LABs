#include "Time.h"
#include <iostream>
using namespace std;

void Time::Nhap() {
	while (iGio < 0) {
		cout << "nhap gio: ";
		cin >> iGio;
	}
	while (iPhut < 0) {
		cout << "nhap phut: ";
		cin >> iPhut;
	}
	while (iGiay < 0) {
		cout << "nhap giay: ";
		cin >> iGiay;
	}
}

void Time::Xuat() {
	cout << "gio: " << iGio << endl;
	cout << "phut: " << iPhut << endl;
	cout << "giay: " << iGiay << endl;
}

Time Time::TinhCongThemMotGiay() {
	Time tt;
	iGiay = iGiay + 1;
	while (iGiay >= 60) {
		this->iGiay = iGiay - 60;
		this->iPhut = iPhut + 1;
	}
	while (iPhut >= 60) {
		this->iPhut = iPhut - 60;
		this->iGio = iGio + 1;
	}
	while (iGio >= 24) {
		this->iGio = iGio - 24;
	}
	tt.iGio = iGio;
	tt.iPhut = iPhut;
	tt.iGiay = iGiay;
	return tt;
}

