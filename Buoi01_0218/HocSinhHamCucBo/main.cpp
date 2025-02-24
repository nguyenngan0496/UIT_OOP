#include <iostream>
//sau Ham ma co thay doi gia tri -> input la pass by ref
using namespace std;
//Khai bao ham
void Nhap(char [], int &, int&);
void xuLy(int, int, float &); //dtb se co tinh toan lai -> pass by ref
void Xuat(char [], int, int, float);

int main()
{
    char ht[31];
    int t;
    int v;
    float tb;
    Nhap(ht, t, v);
    xuLy(t, v, tb);
    Xuat(ht, t, v, tb);
    return 0;
}

void Nhap(char hoten[], int &toan, int &van)//ham xuat, sau Ham co thay doi gia tri toan, van
{
    cout << "Nhap ho ten: ";
    gets(hoten);
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap van: ";
    cin >> van;

}
void xuLy(int toan, int van, float &dtb) //dtb se co tinh toan lai -> pass by ref
{
    dtb = (float)(toan + van)/2;
}
void Xuat(char hoten[], int toan, int van, float dtb)
{
    cout << "\nHo ten: " << hoten;
    cout << "\nToan: " << toan;
    cout << "\nVan: " << van;
    cout << "\nDTB: " << dtb;
}
