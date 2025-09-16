// MSSV: 24520063
// Họ tên: Nguyễn Ngọc Thu An
// Ngày sinh: 17/09/2006
// Lớp: IT002.P26.1
#include <iostream>
#include <vector>

using namespace std;

struct PS {
    int x, y;
};

void nhapPhanSo(vector<PS>& arr, int n);
int ucln(int a, int b);
void rutgon(PS& p);
bool sosanh(const PS& p1, const PS& p2);
void sapXep(vector<PS>& arr, int n, bool tang);
void xuatPhanSo(const PS& p);
void xuatMang(const vector<PS>& arr, int n);

int main() {
    int n;
    cout << "Nhap so phan tu cua day phan so: ";
    cin >> n;
    vector<PS> a(n);

    nhapPhanSo(a, n);

    sapXep(a, n, true);
    cout << "Mang sau khi sap xep tang dan: " ;
    xuatMang(a, n);

    sapXep(a, n, false);
    cout << "Mang sau khi sap xep giam dan: ";
    xuatMang(a, n);


    cout << "So lon nhat: ";
    xuatPhanSo(a[0]);
    cout << endl;


    
    return 0;
}


int ucln(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0){
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


bool sosanh(const PS& p1, const PS& p2) {
    return (long long)p1.x * p2.y > (long long)p2.x * p1.y;
}


void nhapPhanSo(vector<PS>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        cin >> arr[i].x >> arr[i].y;
        while (arr[i].y == 0) {
            cout << "Phan so khong hop le, nhap lai: ";
            cin >> arr[i].x >> arr[i].y;
        }
        if (arr[i].y < 0) {
            arr[i].x = -arr[i].x;
            arr[i].y = -arr[i].y;
        }
        rutgon(arr[i]);
    }
}

void sapXep(vector<PS>& arr, int n, bool tang) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((tang && sosanh(arr[j], arr[j + 1])) || (!tang && !sosanh(arr[j], arr[j + 1]))) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    cout << " ";
}


void xuatMang(const vector<PS>& arr, int n) {
    for (int i = 0; i < n; i++) {
        xuatPhanSo(arr[i]);
    }
    cout << endl;
}
