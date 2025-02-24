#include <iostream>

using namespace std;

//Bien toan cuc
char hoten[31];
int toan;
int van;
float dtb;

int main()
{
    cout << "Nhap ho ten: ";
    gets(hoten);
    cout << "Toan: ";
    cin >> toan;
    cout << "Van: ";
    cin >> van;

    dtb = (float)(toan+van)/2;

    cout << "\nHo ten: " << hoten;
    cout << "\nToan: " << toan;
    cout << "\nVan: " << van;
    cout << "\nDiem trung binh: " << dtb;

    return 0;
}
