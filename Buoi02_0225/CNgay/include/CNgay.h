#ifndef CNGAY_H
#define CNGAY_H
#include "CNgay.h"

using namespace std;

class CNgay
{
    private:
        int ng;
        int th;
        int nm;
    public:
        friend istream& operator>>(istream &is, CNgay &x);
        friend ostream& operator<<(ostream &os, CNgay &x);
        int Getng() { return ng; }
        void Setng(int val) { ng = val; }
        int Getth() { return th; }
        void Setth(int val) { th = val; }
        int Getnm() { return nm; }
        void Setnm(int val) { nm = val; }
};

#endif // CNGAY_H
