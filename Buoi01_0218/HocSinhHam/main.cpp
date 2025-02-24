#include <iostream>

using namespace std;
char hoten[31];
int toan;
int van;
float dtb;
void Nhap();
void XuLy();
void Xuat();

int main()
{
    Nhap();
    XuLy();
    Xuat();
    return 0;
}

void Nhap()
{
    cout << "Nhap ho ten: ";
    gets(hoten);
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap van: ";
    cin >> van;
}

void XuLy()
{
    dtb = (float)(toan + van)/2;
}

void Xuat()
{
    cout << "\nHo ten: " << hoten << endl;
    cout << "\nToan: " << toan << endl;
    cout << "\nVan: " << van << endl;
    cout << "\nDiem trung binh: " << dtb << endl;
}
