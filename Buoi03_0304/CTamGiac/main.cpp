#include <iostream>

using namespace std;

class CDiem
{
private:
    int x, y;
public:
    friend istream& operator>>(istream &is, CDiem &p);
    friend ostream& operator<<(ostream &os, CDiem &p);

    CDiem();
};

class CTamGiac
{
private:
    CDiem A, B, C;
public:
    friend istream& operator>>(istream &is, CTamGiac &tg);
    friend ostream& operator<<(ostream &os, CTamGiac &tg);

    CTamGiac();
    CTamGiac(const CTamGiac &tg);
    CTamGiac(CDiem, CDiem, CDiem);

    ~CTamGiac();

    CTamGiac& operator=(const CTamGiac &tg);
};

int main()
{
    CTamGiac t;
    //cin >> t;
    cout << t;

    CTamGiac z = t;
    cout << z;

    CDiem d,f,g;
    CTamGiac o(d,f,g);
    cout << o;

    CTamGiac k;
    k = o;
    cout << k;

    return 0;
}

istream& operator>>(istream &is, CDiem &p)
{
    cout << "Nhap x: ";
    is >> p.x;
    cout << "Nhap y: ";
    is >> p.y;

    return is;
}

ostream& operator<<(ostream &os, CDiem &p)
{
    cout << "(" << p.x << ";" << p.y << ")";

    return os;
}


istream& operator>>(istream &is, CTamGiac &tg)
{
    cout << "Nhap diem A: ";
    is >> tg.A;
    cout << "Nhap diem B: ";
    is >> tg.B;
    cout << "Nhap diem C: ";
    is >> tg.C;

    return is;
}

ostream& operator<<(ostream &os, CTamGiac &tg)
{
    os << "\nToa do tam giac:" << tg.A << "," << tg.B << "," << tg.C;

    return os;
}

CDiem::CDiem()
{
    x = 0;
    y = 0;
}


CTamGiac::CTamGiac()
{

}

CTamGiac::CTamGiac(const CTamGiac &tg)
{
    A = tg.A;
    B = tg.B;
    C = tg.C;

}

CTamGiac::CTamGiac(CDiem a, CDiem b, CDiem c)
{
    A = a;
    B = b;
    C = c;
}

CTamGiac::~CTamGiac()
{

}

CTamGiac& CTamGiac::operator=(const CTamGiac &tg)
{
    if(this != &tg)
    {
        A = tg.A;
        B = tg.B;
        C = tg.C;
    }

    return *this;
}
