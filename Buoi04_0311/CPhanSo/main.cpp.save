#include <iostream>

using namespace std;
class CPhanSo
{
private:
    int tu, mau;
public:
    CPhanSo();
    CPhanSo(int,int);
    CPhanSo(const CPhanSo &);
    ~CPhanSo();

    friend istream& operator>>(istream &is, CPhanSo &x);
    friend ostream& operator<<(ostream &os, CPhanSo &x);

    CPhanSo operator+(CPhanSo);
    CPhanSo operator-(CPhanSo);
    CPhanSo operator*(CPhanSo);
    CPhanSo operator/(CPhanSo);
    void operator++(int);

    CPhanSo operator=(CPhanSo &x);
};

int main()
{
    CPhanSo a, b, kq;
    cout << "Nhap phan so a: \n";
    cin >> a;
    cout << "Nhap phan so b: \n";
    cin >> b;

    kq = a + b;
    cout << a << " + " << b << " = " << kq << endl;

    kq = a - b;
    cout << a << " - " << b << " = " << kq << endl;

    kq = a * b;
    cout << a << " * " << b << " = " << kq << endl;

    kq = a / b;
    cout << a << " : " << b << " = " << kq << endl;

    cout << a;
    a++;
    cout << "++ = " << a;

    return 0;
}

CPhanSo::CPhanSo()
{
    tu = 0;
    mau = 1;
}

CPhanSo::CPhanSo(int t,int m)
{
    tu = t;
    mau = m;
}

CPhanSo::CPhanSo(const CPhanSo &x)
{
    tu = x.tu;
    mau = x.mau;
}

CPhanSo::~CPhanSo()
{
   return;
}

istream& operator>>(istream &is, CPhanSo &x)
{
    cout << "Nhap tu: "; is >> x.tu;
    cout << "Nhap mau: "; is >> x.mau;

    return is;
}

ostream& operator<<(ostream &os, CPhanSo &x)
{
    os << x.tu << "/" << x.mau;

    return os;
}

CPhanSo CPhanSo::operator+(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.mau + mau * x.tu;
    temp.mau = mau * x.mau;

    return temp;
}

CPhanSo CPhanSo::operator-(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.mau - mau * x.tu;
    temp.mau = mau * x.mau;

    return temp;
}

CPhanSo CPhanSo::operator*(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.tu;
    temp.mau = mau * x.mau;

    return temp;
}

CPhanSo CPhanSo::operator/(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.mau;
    temp.mau = mau * x.tu;

    return temp;
}

void CPhanSo::operator++(int)
{
    //tu/mau + 1 ~ tu + mau/mau
    tu = tu + mau;
}

