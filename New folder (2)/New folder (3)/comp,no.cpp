#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    void setdata(int val1, int val2)
    {
        r = val1;
        i = val2;
    }
    void cal(Complex o1, Complex o2)
    {
        r=o1.r+o2.r;
        i=o1.i+o2.i;
    }
    void getoutput()
    {
        cout<<r<<" + "<<i<<"i";
    }
};
int main()
{
    Complex o1, o2,o3;
    o1.setdata(10, 20);
    o2.setdata(30, 40);
    o3.cal(o1, o2);
    o3.getoutput();
    return 0;
}