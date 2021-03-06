#include <iostream>
#include <cmath>

using namespace std;

struct rat
{

    int num;
    int den;

    void makerat(rat& r, int a, int b);
    int numer(const rat& r);
    int denom(const rat& r);
    void sumrat(rat& r, const rat& r1, const rat& r2);
    void subrat(rat& r, const rat& r1, const rat& r2);
    void multrat(rat& r, const rat& r1, const rat& r2);
    void quotrat(rat& r, const rat& r1, const rat& r2);
    void printrat(const rat& r);
};

int gcd(int a, int b)
{
    while(a != b)

    if(a > b) a = a - b;
    else b = b - a;
    return a;
}

void makerat(rat& r, int a, int b)
{
    if(b==0)
        cout << "Incorrect input." << endl;
    else if(a==0)
    {
        r.num = 0;
        r.den = 1;
    }
    else
    {
        int g = gcd(abs(a), abs(b));
        if(a > 0 && b > 0 || a < 0 && b < 0)
        {
            r.num = abs(a)/g;
            r.den = abs(b)/g;
        }
        else
        {
            r.num = -abs(a)/g;
            r.den = -abs(b)/g;
        }
    }
}
int numer(const rat& r)
{
    return r.num;
}
int denom(const rat& r)
{
    return r.den;
}
void sumrat(rat& r, const rat& r1, const rat& r2)
{
    makerat (r, numer(r1)*denom(r2) + denom(r1)*numer(r2), denom(r1)*denom(r2));
}
void subrat(rat& r, const rat& r1, const rat& r2)
{
    makerat(r, numer(r1)*denom(r2) - denom(r1)*numer(r2), denom(r1)*denom(r2));
}
void multrat(rat& r, const rat& r1, const rat& r2)
{
    makerat(r, numer(r1)*numer(r2), denom(r1)*denom(r2));
}
void quotrat(rat& r, const rat& r1, const rat& r2)
{
    makerat(r, numer(r1)*denom(r2), denom(r2)*numer(r1));
}

void printrat(const rat& r)
{
    cout << numer(r) << "/" << denom(r) << endl;
}

int main()
{
    rat r, r1, r2;
    makerat(r1,1,2);
    makerat(r2,3,4);
    sumrat(r,r1,r2); printrat(r);
    subrat(r,r1,r2); printrat(r);
    multrat(r,r1,r2); printrat(r);
    quotrat(r,r1,r2); printrat(r);

    /*r1.makerat(1,3);
    r2.makerat(3,5);
    r1.numer();
    r1.denom();
    r1.printrat();
    r.sumrat(r1,r2);
    r.subrat(r1,r2);
    r.multrat(r1,r2);
    r.quotrat(r1,r2);*/


    return 0;
}
