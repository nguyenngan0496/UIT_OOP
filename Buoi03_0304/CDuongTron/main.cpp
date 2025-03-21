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

class CDuongTron
{
private:
    CDiem I;
    float r;
public:
    friend istream& operator>>(istream &is, CDuongTron &c);
    friend ostream& operator<<(ostream &os, CDuongTron &c);

    CDuongTron();
    CDuongTron(const CDuongTron &c);
    CDuongTron(CDiem, float);

    ~CDuongTron();

    CDuongTron& operator=(const CDuongTron &c);

};

int main()
{
    cout << "=====Duong tron c mac dinh: " << endl;
    CDuongTron c;
    cout << c;

    cout << "=====Duong tron a input: " << endl;
    CDuongTron a;
    cin >> a;
    cout << a;

    cout << "=====Duong tron b copy tu a: " << endl;
    CDuongTron b = a;
    cout << b;

    cout << "=====Duong tron t tham so: " << endl;
    CDiem I;
    CDuongTron t(I, 5.2);
    cout << t;

    cout << "=====Duong tron p gan tu t: " << endl;
    CDuongTron p;
    p = t;
    cout << p;

    return 0;
}

istream& operator>>(istream &is, CDiem &p)
{
    cout << "Nhap x: "; is >> p.x;
    cout << "Nhap y: "; is >> p.y;

    return is;
}

ostream& operator<<(ostream &os, CDiem &p)
{
    os << "I(" << p.x << ";" << p.y << ")";

    return os;
}

istream& operator>>(istream &is, CDuongTron &c)
{
    cout << "Nhap I: "; is >> c.I;
    cout << "Nhap r: "; is >> c.r;

    return is;
}

ostream& operator<<(ostream &os, CDuongTron &c)
{
    os << "Duong tron tam " << c.I << " ban kinh r = " << c.r << endl;

    return os;
}

CDiem::CDiem()
{
    x = 0;
    y = 0;
}

CDuongTron::CDuongTron()
{

}

CDuongTron::CDuongTron(const CDuongTron &c)
{
    I = c.I;
    r = c.r;
}

CDuongTron::CDuongTron(CDiem II, float rr)
{
    I = II;
    r = rr;
}

CDuongTron::~CDuongTron()
{

}

CDuongTron& CDuongTron::operator=(const CDuongTron &c)
{
    if(this != &c)
    {
        I = c.I;
        r = c.r;
    }
    return *this;
}
