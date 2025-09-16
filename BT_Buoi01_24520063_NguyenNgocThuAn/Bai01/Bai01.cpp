// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>

using namespace std;

struct PS {
    int x, y;
};

void nhapPhanSo(PS& p);
void xuatPhanSo(const PS& p);
int ucln(int a, int b);
void rutgon(PS& p);

int main() {
    PS a;
    cout << "Nhap vao mot phan so: ";
    nhapPhanSo(a);
    rutgon(a);
    cout << "Phan so sau khi rut gon: ";
    xuatPhanSo(a);

    return 0;
}

void nhapPhanSo(PS& p) {
    cin >> p.x >> p.y;
    while (p.y == 0) {
        cout << "Phan so khong hop le, nhap lai phan so: ";
        cin >> p.x >> p.y;
    }
    if (p.y < 0) {
        p.x = -p.x;
        p.y = -p.y;
    }
}

int ucln(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rutgon(PS& p) {
    int gcd = ucln(p.x, p.y);
    p.x /= gcd;
    p.y /= gcd;
}

void xuatPhanSo(const PS& p) {
    if (p.x == 0) {
        cout << 0;
    }
    else if (p.y == 1) {
        cout << p.x;
    }
    else {
        cout << p.x << "/" << p.y;
    }
    cout << endl;
}


