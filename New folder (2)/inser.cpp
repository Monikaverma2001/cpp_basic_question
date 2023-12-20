#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int i,j,m,p;
    int array[50]={1,2,3,4,5};
    cout<<"the array:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<"\nenter the element do you want to insert :";
    cin>>m;
    cout<<"enter the choice 1 or 2 :"<<endl;
    cout<<"choice 1 for make insertion at my position "<<endl<<"2 for make insertion at the end of array"<<endl;
    int choice;
    cin>>choice;
    if(choice==1)
    {
    cout<<"enter the position of element do you want to insert :";
    cin>>p;
    for(i=size;i>=p-1;i--)
    {
       array[i+1]=array[i];
    }
    array[p-1]=m;
    size=size+1;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }
    }

    else if(choice==2)
    {
        int l;
        l=size;
        array[l]=m;
        size=l+1;
        for(i=0;i<size;i++)
        {
           cout<<array[i]<<"\t";
        }
    }
    else
    {
        cout<<"out of choice";
    }

}

