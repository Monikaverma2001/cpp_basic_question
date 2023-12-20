#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    Complex()
    {
        /* cout<<"enter the value of real part : ";
         cin>>r;
         cout<<"enter the value of imaginary part : ";
         cin>>i;*/
    }
    Complex(int val1, int val2)
    {
        r = val1;
        i = val2;
    }
    friend Complex cal(Complex o1, Complex o2);
};
Complex cal(Complex o1, Complex o2)
{
    Complex o3;
    // int a,b;
    o3.r = o1.r + o2.r;
    // a=o1.r+o2.r;
    o3.i = o1.i + o2.i;
    // b=o1.i+o2.i;
    cout << o3.r << " + " << o3.i << "i";
    return o3;
}
int main()
{
    Complex o1(10, 20);
    Complex o2(30, 40);
    cal(o1, o2);

    return 0;
}
