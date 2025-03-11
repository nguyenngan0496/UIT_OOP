#include <iostream>

using namespace std;

class CSoPhuc
{
private:
    int thuc, ao;
public:
    //nap chong toan tu xuat, nhap
    friend istream& operator>>(istream &is, CSoPhuc &sp);
    friend ostream& operator<<(ostream &os, CSoPhuc &sp);

    //3 phuong thuc mac dinh
    CSoPhuc();//phuong thuc default
    CSoPhuc(const CSoPhuc &sp);//phuong thuc copy
    CSoPhuc(int, int);//phuong thuc tham so

    ~CSoPhuc();//phuong thuc pha huy

    //toan tu gan
    CSoPhuc& operator=(const CSoPhuc &sp);
};

int main()
{
    CSoPhuc a;
    cout << a;

    CSoPhuc b = a;
    cout << b;

    CSoPhuc c(5,2);
    cout << c;

    CSoPhuc d;
    d = b;
    cout << d;

    return 0;
}

istream& operator>>(istream &is, CSoPhuc &sp)
{
    cout << "Nhap phan thuc: ";
    is >> sp.thuc;
    cout << "Nhap phan ao: ";
    is >> sp.ao;

    return is;
}

ostream& operator<<(ostream &os, CSoPhuc &sp)
{
    os << sp.thuc;
    if (sp.ao >= 0)
    {
        os << " + " << sp.ao << "i\n" ;
    }
    else
    {
        os << " - " << sp.ao << "i\n" ;
    }

    return os;
}

CSoPhuc::CSoPhuc()
{
    thuc = 1;
    ao = 1;
}

CSoPhuc::CSoPhuc(const CSoPhuc &sp)
{
    thuc = sp.thuc;
    ao = sp.ao;
}

CSoPhuc::CSoPhuc(int tt, int aa)
{
    thuc = tt;
    ao = aa;
}

CSoPhuc::~CSoPhuc()
{

}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc &sp)
{
    if(this != &sp)
    {
        thuc = sp.thuc;
        ao = sp.ao;
    }

    return *this;
}
