#include <iostream>

using namespace std;

int main()
{
    //bien cuc bo
    char hoten[31];
    int toan;
    int van;
    float dtb;
    cout << "Nhap ho ten: ";
    gets(hoten);
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap van: ";
    cin >> van;
    dtb = (float)(toan + van)/2;

    cout << "\nHo ten: " << hoten;
    cout << "\nToan: " << toan;
    cout << "\nVan: " << van;
    cout << "\nDiem trung binh: " << dtb;

    return 0;
}
