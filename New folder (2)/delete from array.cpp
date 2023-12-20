#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int dlt,j,choice,pos,x;
    int array[10]={1,2,3,4,5,6};
    cout<<"OUR ARRAY IS:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"   ";
    }
    cout<<"___________enter your choice__________"<<endl;
    cout<<"_choose 1 for delete an element at the last position of an array___"<<endl;
    cout<<"_choose 2 for delete an element for particular position___"<<endl;
    cin>>choice;
    if(choice==1)
    {
        j=size;
        dlt=array[size];
        size=size-1;
        for(int i=0;i<size;i++)
        {
           cout<<array[i]<<"    ";
        }
    }
    else if(choice==2)
    {
        cout<<"____________choose 3 or 4___________"<<endl;
        cout<<"___3.delete element by input the position___________"<<endl;
        cout<<"___4.delete element by input its value______________"<<endl;
        cin>>choice;
        if(choice==3)
        {
            cout<<"enter position"<<endl;
            cin>>pos;
            j=size;
            size=j-1;
            dlt=array[j];

            for(int i=pos-1;i<size;i++)
            {
                array[i]=array[i+1];
            }
            // dlt=array[pos-1];

            for(int i=0;i<size;i++)
        {
           cout<<array[i]<<"   ";
        }
        }
        else if(choice==4)
        {
            cout<<"enter number you want to delete"<<endl;
            cin>>dlt;
            for(int i=0;i<size;i++)
            {
                if(array[i]==dlt)
                {
                   for(int j=i;j<size;j++)
                   {
                       array[j]=array[j+1];
                   }
                   break;
                }
           }
            for(int i=0;i<size-1;i++)
        {
           cout<<array[i]<<"   ";
        }
        }
    }

}
