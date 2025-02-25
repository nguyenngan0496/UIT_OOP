#include <iostream>

using namespace std;


class CTam
{
private:
    float x, y;
public:
    void Nhap();
    void Xuat();
};
class CDuongTron
{
private:
    CTam I;
    float r;
public:
    void Nhap();
    void Xuat();
    float chuVi();
    float dienTich();


};

int main()
{
    CDuongTron c;
    c.Nhap();
    c.Xuat();
    cout << "\n Chu vi: "; c.chuVi();
    cout << "\n Dien tich: "; c.dienTich();

    return 0;
}

void CTam::Nhap()
{
    cout << "\n Nhap x: ";
    cin >> x;
    cout << "\n Nhap y: ";
    cin >> y;

}

void CTam::Xuat()
{
    cout << "\nTam duong tron: (" << x << ", " << y << ")";
}

void CDuongTron::Nhap()
{
    cout << "Nhap tam: "; I.Nhap();
    cout << "\nNhap ban kinh: "; cin >> r;
}

void CDuongTron::Xuat()
{
    cout << "\n Tam duong tron: "; I.Xuat();
    cout << "\n Ban kinh: " << r;
}

float CDuongTron::chuVi()
{
    return 2*3.14*r;
}

float CDuongTron::dienTich()
{
    return 3.14*r*r;
}
