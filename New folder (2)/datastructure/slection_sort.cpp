#include<iostream>
using namespace std;
void display(int *array,int size);
void selection_sort(int *array,int size);

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
    selection_sort(array,size);
    display(array,size);
}


void display(int *array,int size)
{
    cout<<"elements after sorting : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
}


void selection_sort(int *array,int size)
{
    int min;
    for(int i=0;i<size;i++)
    {
        min=i; 
        for(int j=i+1;j<size;j++)
        {
            if(array[min]>array[j])
            {
                min=j;
            }
        }
        if(min!=i)
            {
                int temp=array[min];
                array[min]=array[i];
                array[i]=temp;
            }
    }
}