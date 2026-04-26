#include <iostream>
#include "cArray.h"
using namespace std;

int main() {
	int xuatHien, smallestOdd, bigestPrime;
	cArray a;

	a.xuat();

	int x;
	cout << "nhap so muon tim: ";
	cin >> x;
	xuatHien = a.numberOfX(x);
	cout << "so lan xuat hien:" << xuatHien << endl;

	if (a.isIncreasing() == true) {
		cout << "la day tang: " << endl;
	}
	else {
		cout << "khong phai day tang: " << endl;
	}

	smallestOdd = a.findSmallestOdd();
	cout << "so le nho nhat: " << smallestOdd << endl;
	bigestPrime = a.findBiggestPrime();
	cout << "so nguyen to lon nhat:" << bigestPrime << endl;

	cout << "sap xep tang: " << endl;
	a.increasingOrder();
	cout << "sap xep giam: " << endl;
	a.decreasingOrder();

	return 0;
}