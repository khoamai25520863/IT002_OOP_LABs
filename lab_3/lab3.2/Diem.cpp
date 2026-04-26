#include <iostream>
#include"Diem.h"
using namespace std;

void Diem::nhap() {
	cout << "nhap x:";
	cin >> x;
	cout << "nhap y:";
	cin >> y;
}

void Diem::xuat() {
	cout << "toa do x: " << x << endl;
	cout << "toa do y: " << y;
}
