#pragma once
class cArray {
private:
	int* array;
	int soPhanTu;

	bool isPrime(int arrayItem);
public:
	cArray();
	void xuat();
	int numberOfX(int x);
	bool isIncreasing();
	int findSmallestOdd();
	int findBiggestPrime();
	void increasingOrder();
	void decreasingOrder();
};