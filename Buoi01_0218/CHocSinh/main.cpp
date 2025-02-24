#include <iostream>

using namespace std;
class CHocSinh
{
private:
    char hoten[31];
    int toan;
    int van;
    float dtb;
public:
    void Nhap();
    void XuLy();
    void Xuat();
};

int main()
{
    CHocSinh hs; //hs la 1 object thuoc class CHocSinh
    hs.Nhap();
    hs.XuLy();
    hs.Xuat();

    return 0;

}

void CHocSinh::Nhap()
{
    cout << "Nhap ho ten: ";
    //gets(hoten);
    cin.ignore();
    cin.getline(hoten, 31);
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap van: ";
    cin >> van;
}
void CHocSinh::XuLy()
{
    dtb = (float)(toan + van)/2;
}
void CHocSinh::Xuat()
{
    cout << "\nHo ten: " << hoten;
    cout << "\nToan: " << toan;
    cout << "\nVan: " << van;
    cout << "\nDTB: " << dtb;
}
