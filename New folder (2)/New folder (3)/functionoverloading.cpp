#include<iostream>
using namespace std;
class  maths
{
private:
    int x,y;
public:

    int op(int x);
    int op(int x,int y);
    int op();
};
int maths:: op(int x)
{
    int y=5;
    int z;
    z=x+y;
   // cout<<z;
    return z;
}
int maths:: op(int x,int y)
{
    int k;
    k=x-y;
    //cout<<k;
    return k;
}
int maths::op()
{
    int x=2;
    int y=3;
    int l;
    l=x*y;
    //cout<<l;
    return l;
}
int main()
{
    maths m;
    cout<<m.op(5)<<endl;
    cout<<m.op(5,4)<<endl;
    cout<<m.op()<<endl;
    return 0;
}
