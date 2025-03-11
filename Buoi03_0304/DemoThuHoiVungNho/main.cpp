#include <iostream>

using namespace std;
class CDemo
{
private:
    int *a;
    float *b;
public:
    CDemo();
    CDemo(const CDemo &x);
    CDemo(int *, float *);
    ~CDemo();
    int geta()
    {
        return *a;
    }
    float getb()
    {
        return *b;
    }

};

int main()
{
    CDemo x;
    int *a = new int(6);
    float *b = new float(8.5);
    CDemo y(a,b);
    CDemo z(y);

    return 0;
}

CDemo::CDemo()
{
    a = new int(0);
    b = new float(0);

}
CDemo::CDemo(int *aa, float *bb)
{
    a = aa;
    b = bb;
}
CDemo::CDemo(const CDemo &x)
{
    a = new int;
    *a = *x.a;
    b = new float;
    *b = *x.b;
}
CDemo::~CDemo()
{
    if(a != NULL)
        delete a;
    if(b != NULL)
        delete b;
    a = NULL;
    b = NULL;
}
