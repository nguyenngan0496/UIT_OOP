#include <iostream>
#include <cmath>

using namespace std;

class CDiem
{
private:
    int x, y;
public:
    CDiem() {}  // Constructor mặc định
    CDiem(int x, int y) { this->x = x; this->y = y; }  // Constructor có tham số

    void Nhap() {
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
    }
    void Xuat() {
        cout << "(" << x << ", " << y << ")";
    }
    float khoangCach(CDiem p)
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
    int getX() { return x; }
    int getY() { return y; }
};

class CTamGiac
{
private:
    CDiem A, B, C;
public:
    void Nhap()
    {
        cout << "Nhap toa do diem A: \n";
        A.Nhap();
        cout << "Nhap toa do diem B: \n";
        B.Nhap();
        cout << "Nhap toa do diem C: \n";
        C.Nhap();
    }
    void Xuat() {
        cout << "Toa do tam giac: ";
        A.Xuat(); cout << ", ";
        B.Xuat(); cout << ", ";
        C.Xuat();
        cout << endl;
    }
    float chuVi()
    {
        return A.khoangCach(B) + B.khoangCach(C) + C.khoangCach(A);
    }
    float dienTich()
    {
        float a = A.khoangCach(B);
        float b = B.khoangCach(C);
        float c = C.khoangCach(A);
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    CDiem trongTam()
    {
        return CDiem((A.getX() + B.getX() + C.getX()) / 3, (A.getY() + B.getY() + C.getY()) / 3);
    }
};

int main()
{
    CTamGiac tamGiac;

    tamGiac.Nhap();
    tamGiac.Xuat();

    cout << "Chu vi: " << tamGiac.chuVi() << endl;
    cout << "Dien tich: " << tamGiac.dienTich() << endl;

    CDiem G = tamGiac.trongTam();
    cout << "Toa do trong tam: ";
    G.Xuat();
    cout << endl;
    return 0;
}
