#include <iostream>

using namespace std;

class CDiem
{
private:
    int x, y;
public:
    friend istream& operator>>(istream& is, CDiem& p);
    friend ostream& operator<<(ostream& os, CDiem& p);
};

class CTamGiac
{
private:
    CDiem A, B, C;
public:
    friend istream& operator>>(istream& is, CTamGiac& t);
    friend ostream& operator<<(ostream& os, CTamGiac& t);
};

int main()
{
    CTamGiac tg;
    cout << "Hay nhap tam giac ABC";
    cin >> tg;
    cout << tg;
    return 0;
}

istream& operator>>(istream& is, CDiem& p)
{
    cout << "\n Hay nhap x: ";
    is >> p.x;
    cout << " Hay nhap y: ";
    is >> p.y;


    return is;
}

ostream& operator<<(ostream& os, CDiem& p)
{
    os << "(" << p.x << ", " << p.y << ")";

    return os;
}

istream& operator>>(istream& is, CTamGiac& t)
{
    cout << "\n Hay nhap diem A: "; is >> t.A;
    cout << "\n Hay nhap diem B: "; is >> t.B;
    cout << "\n Hay nhap diem C: "; is >> t.C;

    return is;

}

ostream& operator<<(ostream& os, CTamGiac& t)
{
    os << "Toa do tam giac: ";
    os << t.A << ", " << t.B << ", " << t.C;

    return os;
}
