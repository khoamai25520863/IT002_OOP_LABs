#include "cArray.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

cArray::cArray() {
	srand(time(0));
	cout << "nhap so phan tu muon khai bao: ";
	cin >> soPhanTu;
	array = new int[soPhanTu];
	double* tempArray = new double[soPhanTu];
	for (int i = 0; i < soPhanTu; i++) {
		cout << "nhap phan tu thu " << i + 1 << " : ";
		cin >> tempArray[i];
	}
	for (int i = 0; i < soPhanTu; i++) {
		int order;
		bool repeat = true;
		while (repeat == true) {
			order = rand() % soPhanTu;
			if (tempArray[order] != 0.5) {
				repeat = false;
			}
		}
		array[i] = tempArray[order];
		tempArray[order] = 0.5;
	}
}

void cArray::xuat() {
	for (int i = 0; i < soPhanTu; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int cArray::numberOfX(int x) {
	int SoLanXuatHien = 0;
	for (int i = 0; i < soPhanTu; i++) {
		if (array[i] == x) {
			SoLanXuatHien = SoLanXuatHien + 1;
		}
	}
	return SoLanXuatHien;
}

bool cArray::isIncreasing() {
	for (int i = 1; i < soPhanTu; i++) {
		if (array[i - 1] >= array[i]) {
			return false;
		}
	}
	return true;
}

int cArray::findSmallestOdd() {
	int smallestOdd = 0;
	for (int i = 0; i < soPhanTu; i++) {
		if (array[i] % 2 == 1) {
			smallestOdd = array[i];
			break;
		}
	}
	for (int i = 0; i < soPhanTu; i++) {
		if (array[i] % 2 == 1 && array[i] < smallestOdd) {
			smallestOdd = array[i];
		}
	}
	return smallestOdd;
}

bool cArray::isPrime(int arrayItem) {
	if (arrayItem <= 0) {
		return false;
	}
	for (int k = 2; k < (arrayItem / 2); k++) {
		if (arrayItem % k == 0) {
			return false;
		}
	}
	return true;
}

int cArray::findBiggestPrime() {
	int biggestPrime = 0;
	for (int i = 0; i < soPhanTu; i++) {
		if (isPrime(array[i]) == true && biggestPrime < array[i]) {
			biggestPrime = array[i];
		}
	}
	return biggestPrime;
}

void cArray::increasingOrder() {
	for (int i = 0; i < soPhanTu - 1; i++) {
		for (int k = 0; k < soPhanTu - i - 1; k++) {
			if (array[k] > array[k + 1]) {
				swap(array[k], array[k + 1]);
			}
		}
	}
	xuat();
}

void cArray::decreasingOrder() {
	for (int i = 0; i < soPhanTu - 1; i++) {
		for (int k = 0; k < soPhanTu - i - 1; k++) {
			if (array[k] < array[k + 1]) {
				swap(array[k], array[k + 1]);
			}
		}
	}
	xuat();
}