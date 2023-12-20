#include<iostream>
using namespace std;
int binary_search(int array[],int number,int low,int high)
{
    int mid=(high+low)/2;
    if(number==array[mid])
    {
        number=array[mid];
        cout<<"\nseached element at position:"<<mid+1<<endl;
    }
    else if(number<array[mid])
    {
        high=mid-1;
        binary_search(array,number,low,mid-1);
    }
    else if(number>array[mid])
    {
        low=mid+1;
        binary_search(array,number,mid+1,high);
    }
    
  return array[mid];
}
/*int main()
{
    int size=9,number,i,mid;
    int array[10]={5,8,10,14,17,20,38,40,45};
    int high;
    int low;
    high=size;
    low=0;
    for(i=0;i<size;i++)
    {
        cout<<i<<"="<<array[i]<<endl;
    }
    cout<<"enetr the number you want to search : ";
    cin>>number;
    binary_search(array,number,low,high);
    
    return 0;
}*/