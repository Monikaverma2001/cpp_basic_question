#include<iostream>
using namespace std;
void rotate_left(int arr[],int size)
{
    int temp=arr[0];
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i+1];
        arr[size-1]=temp;
    }
}

void rotate(int arr[],int size,int d)
{
    for(int i=0;i<d;i++)
    {
        rotate_left(arr,size);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int size;
    int arr[size];
    int d;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element : "<<i+1<<endl;
        cin>>arr[i];
    }
    rotate(arr,size,d);
return 0;
}