#include<iostream>
using namespace std;
int main()
{
    int size,array[5],choice,element,j,pos;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"choose option"<<endl<<" 1.insert an element at the end position"<<"2. insert an element at specific position"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"enter element"<<endl;
        cin>>element;
        cout<<":";
       // j=size;//not taken variable give garbage value //give j=desired size(last element index)//if use put array[j]=element;
        array[size]=element;//assign last element as insert value
        //size=j+1;//if no need then do value follow loop value ,otherwise use i<size
        for(int i=0;i<=size;i++)
        {
        cout<<array[i]<<endl;
        }
    }
    else if(choice==2)
    {
        cout<<"enter the position u want to insert"<<endl;
        cin>>pos;
        cout<<"enter element"<<endl;
        cin>>element;
        cout<<":";
        j=pos-1;
       for(int i=size;i>=j;i--)
        {
            array[i+1]=array[i];
        }
        array[j]=element;
        size=size+1;
         for(int i=0;i<size;i++)
        {
        cout<<array[i]<<endl;
        }
    }
}
