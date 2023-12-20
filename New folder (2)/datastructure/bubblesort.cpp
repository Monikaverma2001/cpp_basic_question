#include<iostream>
using namespace std;
void buble_sort(int *array,int size);
void display(int *array,int size);
int main()
{
    int size;
    cout<<"enter the number of elements : "<<endl;
    cin>>size;
    cout<<"enter the elements value: "<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    buble_sort(array,size);
    display(array,size);
}
void buble_sort(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int flag=100;
        for(int j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
        if(flag==100)
        {
            break;
        }
    }
}
void display(int *array,int size)
{
    cout<<"elements after sorting : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
}