#include <iostream>

using namespace std;
struct HocSinh
{
    char hoten[31];
    int toan;
    int van;
    float dtb;
};

typedef struct HocSinh HOCSINH;
void Nhap(HOCSINH &);
void XuLy(HOCSINH &);
void Xuat(HOCSINH);

int main()
{
    char ht[31];
    int t;
    int v;
    float dtb;
    HOCSINH hs;
    Nhap(hs);
    XuLy(hs);
    Xuat(hs);


    return 0;
}

void Nhap(HOCSINH &x)
{
    cout << "Nhap ho ten: ";
    gets(x.hoten);
    cout << "Nhap toan: ";
    cin >> x.toan;
    cout << "Nhap van: ";
    cin >> x.van;
}
void XuLy(HOCSINH &x)
{
    x.dtb = (float)(x.toan + x.van)/2;
}
void Xuat(HOCSINH x)
{
    cout << "\nHo ten: " << x.hoten;
    cout << "\nToan: " << x.toan;
    cout << "\nVan: " << x.van;
    cout << "\nDTB: " << x.dtb;
}
