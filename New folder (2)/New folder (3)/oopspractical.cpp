#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c=10;
    int* d=&c;
    int** e ;
    cout<<"1  "<<c<<setw(4)<<endl;
    cout<<"2  "<<d<<endl;
    cout<<"3  "<<*d<<endl;
    cout<<"4  "<<&c<<endl;
    cout<<"5  "<<&d<<endl;
    cout<<"6  "<<e;
}