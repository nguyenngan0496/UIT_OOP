#include <iostream>

using namespace std;

class CPhanSo
{
private:
    int tu, mau;
public:
    void Nhap();
    void Xuat();
    float tong(CPhanSo x);
    float hieu(CPhanSo x);
    float tich(CPhanSo x);
    float thuong(CPhanSo x);
};


int main()
{
    CPhanSo A, B;
    A.Nhap();
    B.Nhap();
    float kq_tong = A.tong(B);
    cout << "Tong: " << kq_tong << endl;

    float kq_hieu = A.hieu(B);
    cout << "Hieu: " << kq_hieu << endl;

    float kq_tich = A.tich(B);
    cout << "Tich: " << kq_tich << endl;

    float kq_thuong = A.thuong(B);
    cout << "Thuong: " << kq_thuong << endl;
    return 0;
}

void CPhanSo::Nhap()
{
    cout << "Nhap tu: "; cin >> tu;
    cout << "Nhap mau: "; cin >> mau;
}

void CPhanSo::Xuat()
{
    cout << "Phan so:" << tu << "/" << mau;
}

float CPhanSo::tong(CPhanSo x)
{
    CPhanSo tong;
    tong.tu = tu*x.mau + mau*x.tu;
    tong.mau = mau*x.mau;

    return (float)(tong.tu)/(tong.mau);
}

float CPhanSo::hieu(CPhanSo x)
{
    CPhanSo hieu;
    hieu.tu = tu*x.mau - mau*x.tu;
    hieu.mau = mau*x.mau;

    return (float)(hieu.tu)/(hieu.mau);
}

float CPhanSo::tich(CPhanSo x)
{
    CPhanSo tich;
    tich.tu = tu*x.tu;
    tich.mau = mau*x.mau;

    return (float)(tich.tu)/(tich.mau);
}

float CPhanSo::thuong(CPhanSo x)
{
    CPhanSo thuong;
    thuong.tu = tu*x.mau;
    thuong.mau = mau*x.tu;

    return (float)(thuong.tu)/(thuong.mau);
}
