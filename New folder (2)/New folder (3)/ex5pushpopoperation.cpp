#include<iostream>
//#define FALSE 0
//#define TRUE 1
#define size 10
using namespace std;
int top=-1,array[size];
void push(int newelement)
{
    if(top>=size)
    {
        cout<<"stack is full <<overflow cindition>> "<<endl;
    }
    else
    {
        cout<<"enter newelement"<<endl;
        cin>>newelement;
        top=top+1;
        array[top]=newelement;
    }
}
void pop()
{
    int x;
    if(top==-1)
    {
        cout<<"stack empty <<underflow condition>> "<<endl;
    }
    else
    {
        x=array[top];
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"empty stack"<<endl;
    }
    else if(top==(size-1))
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        for(int i=top;i>=0;--i)
        {
            cout<<array[i];
        }
    }
}
int main()
{
    int array[10],choice,newelement;
    while(1){
     cout<<"\nenter the choice : "<<endl;
     cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
     cin>>choice;
     switch(choice)
    {
        case 1:
        {
            push(newelement);
            break;
        }
     
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
           break;
        }
        default:
        cout<<"invalid choice \n";
        break;
     } }
}