#include <iostream>
using namespace std;
void getDate(int& ngay, int& thang, int& nam) {
    ngay = 0;
    thang = 0;
    nam = -1;
    while (nam < 0) {
        cout << "nhap nam:";
        cin >> nam;
    }
    while (thang <= 0 || 13 <= thang) {
        cout << "nhap thang:";
        cin >> thang;
    }
    while (ngay <= 0 || 32 <= ngay) {
        cout << "nhap ngay:";
        cin >> ngay;
    }

}
int getNgayCuoiThang(int thang, int nam) {
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (nam % 4 == 0) {
            return 29;
        }
        else {
            return 28;
        }
    }
}
int main() {
    int ngayCuoiThang;
    bool ngayHopLe = false;
    int ngay, thang, nam;
    getDate(ngay, thang, nam);
    ngayCuoiThang = getNgayCuoiThang(thang, nam);
    while (ngayHopLe == false) {
        if (ngay > ngayCuoiThang) {
            cout << "ngay thang khong hop le, vui long nhap lai:" << endl;
            getDate(ngay, thang, nam);
            int ngayCuoiThang = getNgayCuoiThang(thang, nam);
        }
        else {
            ngayHopLe = true;
        }
    }
    if (ngay == ngayCuoiThang) {
        ngay = 1;
        thang = thang + 1;
    }
    else {
        ngay = ngay + 1;
    }
    if (thang == 13) {
        thang = 1;
        nam = nam + 1;
    }
    cout << "ngay thang nam tiep theo:" << ngay << "/" << thang << "/" << nam;
    return 0;
}