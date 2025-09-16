// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <cmath>

using namespace std;

struct PS {
    int x, y;
};

void input(PS& a);
int ucln(int a, int b);
void rutgon(PS& p);
void output(const PS& p);
void sosanh_xuatketqua(const PS& a, const PS& b);

int main() {
    PS a, b;
    cout << "Nhap phan so thu nhat: ";
    input(a);
    cout << "Nhap phan so thu hai: ";
    input(b);

    sosanh_xuatketqua(a, b);
    return 0;
}


void input(PS& a) {
    cin >> a.x >> a.y;
    while (a.y == 0) {
        cout << "Phan so khong hop le, nhap lai: ";
        cin >> a.x >> a.y;
    }
    if (a.y < 0) {
        a.x = -a.x;
        a.y = -a.y;
    }
    rutgon(a);
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


void output(const PS& p) {
    cout << "Phan so lon nhat la: ";
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

void sosanh_xuatketqua(const PS& a, const PS& b) {
    long long p1 = 1LL * a.x * b.y;
    long long p2 = 1LL * b.x * a.y;

    if ( p1 > p2 ) {
        output(a);
    }
    else if ( p1 < p2 ) {
        output(b);
    }
    else {
        cout << "Hai phan so bang nhau\n";
    }
}

