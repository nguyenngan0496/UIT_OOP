#include <iostream>

using namespace std;

class CSoPhuc
{
private:
    float thuc, ao;
public:
    void nhapSP();
    void xuatSP();
    CSoPhuc Tong(CSoPhuc);
    CSoPhuc Hieu(CSoPhuc);
    CSoPhuc Tich(CSoPhuc);
};

int main()
{
    CSoPhuc sp1, sp2, tong, hieu, tich;
    cout << "Nhap so phuc 1:\n"; sp1.nhapSP();
    cout << "Nhap so phuc 2:\n";sp2.nhapSP();
    cout << "So phuc 1 la: "; sp1.xuatSP();
    cout << "So phuc 2 la: "; sp2.xuatSP();

    tong = sp1.Tong(sp2);
    hieu = sp1.Hieu(sp2);
    tich = sp1.Tich(sp2);

    cout << "Tong: "; tong.xuatSP(); cout << endl;
    cout << "Hieu: "; hieu.xuatSP(); cout << endl;
    cout << "Tich: "; tich.xuatSP(); cout << endl;

    return 0;
}

void CSoPhuc::nhapSP()
{
    cout << "Nhap phan thuc: "; cin >> thuc;
    cout << "Nhap phan ao: "; cin >> ao;
}

void CSoPhuc::xuatSP()
{
    cout << thuc;
    if (ao >= 0)
        cout << " + " << ao << "i\n";
    else
        cout << " - " << -ao << "i\n";
}

CSoPhuc CSoPhuc::Tong(CSoPhuc sp)
{
    CSoPhuc tong;
    tong.thuc = thuc + sp.thuc;
    tong.ao = ao + sp.ao;

    return tong;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc sp)
{
    CSoPhuc hieu;
    hieu.thuc = thuc - sp.thuc;
    hieu.ao = ao - sp.ao;

    return hieu;
}

CSoPhuc CSoPhuc::Tich(CSoPhuc sp)
{
    CSoPhuc tich;
    tich.thuc = thuc*sp.thuc - ao*sp.ao;
    tich.ao = thuc*sp.ao + ao*sp.thuc;
    return tich;
}
