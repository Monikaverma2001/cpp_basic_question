#include "binarysearch.cpp"//inorder to invoke the functions from another file
#include<ctype.h>
#include<iostream>
using namespace std;
struct student
{
    int math;
    int eng;
    int pps;
    int chemistry;
}s[5];
int check(float ave_all,student s[5],float add)
{
    float sum_all=0;
    if(ave_all<=60)
    {
        for(int i=0;i<5;i++)
        {
            if(s[i].math<=80)
            {
                s[i].math=s[i].math+1;
            }
            if(s[i].eng<=80)
            {
                s[i].eng=s[i].eng+1;
            }
            if(s[i].pps<=80)
            {
                s[i].pps=s[i].pps+1;
            }
            if(s[i].chemistry<=80)
            {
                s[i].chemistry=s[i].chemistry+1;
            }
        }
        for(int i=0;i<5;i++){
            cout<<"new marks for student "<<i<<endl;
            cout<<s[i].math<<"\n"<<s[i].eng<<"\n"<<s[i].pps<<"\n"<<s[i].chemistry<<"\n";
        }
            float sum[5],p[5];
    for(int i=0;i<5;i++)
    {
        sum[i]=s[i].math+s[i].eng+s[i].pps+s[i].chemistry;
        p[i]=(sum[i]/add)*100;
        
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\nnew percentage for student "<<i;
    cout<<p[i]<<endl;
    sum_all=p[i]+sum_all;
    }ave_all=sum_all/4;
    cout<<"\nnew average :";
    cout<<"\naverage of all: "<<ave_all;
        

    }if(ave_all<=60)
    check(ave_all,s,add);
    return ave_all;
}
int main()
{
    int total[5]={100,100,100,100};
    float sum[5],p[5],ave_all,sum_all=0;
    float add=0;
    //struct student s[5];
    int i;
    for(int j=0;j<5;j++)
    {
        add=total[i]+add;
    }
    cout<<"marks in \n1. maths       2.eng         3.pps            4.chemistry"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"enter the marks obtained by student rollno. "<<i+1<<"\n";
        cin>>s[i].math;
        cin>>s[i].eng;
        cin>>s[i].pps;
        cin>>s[i].chemistry;
        sum[i]=s[i].math+s[i].eng+s[i].pps+s[i].chemistry;
        p[i]=(sum[i]/add)*100;
    }
    for(i=0;i<5;i++)
    {
    //cout<<p[i]<<endl;
    sum_all=p[i]+sum_all;
    }ave_all=sum_all/5;
    cout<<ave_all;
    ave_all=check(ave_all,s,add);
    cout<<ave_all;
}