#include <iostream>

using namespace std;

class CDiem
{
private:
    float x;
    float y;
public:
    friend istream& operator>>(istream &is, CDiem &p);
    friend ostream& operator<<(ostream &os, CDiem &p);

};

class CDuongTron
{
private:
    //Tam duong tron: diem trong mat phan Oxy
    //->Dinh nghia: class CDiem
    CDiem I;
    //Ban kinh: float
    float r;
public:
    friend istream& operator>>(istream &is, CDuongTron &c);
    friend ostream& operator<<(ostream &os, CDuongTron &c);
    float chuVi()
    {
        return 2*r*3.14;
    }
    float dienTich()
    {
        return r*r*3.14;
    }
};

int main()
{
    CDuongTron dt;
    cout << "Duong tron vua nhap: ";
    cin >> dt;
    cout << "Duong tron vua nhap: " << dt << endl;
    cout << "Chu vi: " << dt.chuVi() << endl;
    cout << "Dien tich: " << dt.dienTich();

    return 0;
}

istream& operator>>(istream &is, CDiem &p)
{
    cout << "x = ";
    is >> p.x;
    cout << "y = ";
    is >> p.y;
    return is;
}

ostream& operator<<(ostream &os, CDiem &p)
{
    cout << "(" << p.x << ", " << p.y << ")";
}

istream& operator>>(istream &is, CDuongTron &c)
{
    cout << "Nhap tam: \n";
    is >> c.I;
    cout << "Ban kinh: ";
    is >> c.r;

    return is;
}
ostream& operator<<(ostream &os, CDuongTron &c)
{
    os << "(I" << c.I << "," << c.r << ")";

    return os;
}
