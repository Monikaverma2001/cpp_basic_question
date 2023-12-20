
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of elements : ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element : "<<i+1<<"   ";
        cin>>array[i];
    }
    
    int key;
    key=array[0];
    for(int i=1;i<size;i++)
    {
        if(array[i] > key)
        {
            key=array[i];
        }

    }
    //cout<<key;
    int count[key];
    for(int i=0;i<=key;i++)
    {
        count[i]=0;
    }
    cout<<key;
    for(int i=0;i<size;i++)
    {
        ++count[array[i]];
        //cout<<count[array[i]]<<endl;
    }
    cout<<"\n";
    for(int i=1;i<=key;i++)
    {
        count[i]=count[i]+count[i-1];
        //cout<<count[i]<<endl;
    }cout<<"\n";
    int tem_array[size];
    for(int i=size-1;i>=0;i--)
    {
       tem_array[--count[array[i]]] =array[i];
    }
    for(int i=0;i<size;i++)
    array[i]=tem_array[i];
    cout<<"our sorted array is \n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"  ";
    }
}