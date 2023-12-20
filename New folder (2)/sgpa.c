#include<iostream>
using namespace std;
/*int percentage_sub(float E_I[],float per[])
{
for(int i=0;i<4;i++)
{
    if(per[i]>=90||per[i]<=100)
    {
        cout<<"O";
    }
    if(per[i]>=80||per[i]<90)
    {
        cout<<"A+";
    }if(per[i]>=70||per[i]<80)
    {
        cout<<"A";
    }if(per[i]>=60||per[i]<70)
    {
        cout<<"B+";
    }if(per[i]>=50||per[i]<60)
    {
        cout<<"B";
    }if(per[i]>=45||per[i]<50)
    {
        cout<<"C";
    }if(per[i]>=40||per[i]<45)
    {
        cout<<"D";
    }
    if(per[i]<40)
    {
        cout<<"F";
    }

}
}*/
int main()
{
    int i,gradepoint[10]={10,9,8,7,6,5,4,0},grade_point[10],credit[10]={4,4,4,3},gc[i];
    int sum=0,add=0;
    float ext[10],inte[10],extrn[10],E_I[10],total[10];
    float per[10];
    float sgpa;//tn=total number,on=obtanied number ,c=credit
    //total number of student

    int external_marks;
   // cin>>tn;
   // cin>>on;
   // cin>>c;
   int ts=4;
   cout<<"total number of subject"<<ts<<endl;
        cout<<"external marks obtained"<<endl;
    for(i=0;i<4;i++)
    {
        cin>>ext[i];
    }
    cout<<"internal marks obtained"<<endl;
    for(i=0;i<4;i++)
    {
        cin>>inte[i];

    }cout<<"external final result"<<endl;
    for(i=0;i<4;i++)
    {
        extrn[i]= ((2*ext[i])/3)+(inte[i]/2);
        cout<<extrn[i];
        cout<<"\n";
    }cout<<"total marks external+internal"<<endl;
    for(i=0;i<4;i++)
    {
        E_I[i]=extrn[i]+inte[i];
        cout<<E_I[i]<<endl;
    }
    cout<<"marks obtained from"<<endl;
    for(i=0;i<4;i++)
    {
        cin>>total[i];
    }cout<<"% obtained in each subject:"<<endl;
    for(i=0;i<4;i++)
{
        per[i]=E_I[i]/total[i]*100;
        cout<<per[i]<<endl;
   //  percentage_sub();

}cout<<"gradepoint based on percentage"<<endl;
for(int i=0;i<4;i++)
{
    if(per[i]>=90&&per[i]<=100)
    {
        cout<<gradepoint[0]<<endl;
         grade_point[i]=gradepoint[0];
    }
   else if(per[i]>=80&&per[i]<90)
    {
        cout<<gradepoint[1]<<endl;
        grade_point[i]=gradepoint[1];
    }else if(per[i]>=70&&per[i]<80)
    {
        cout<<gradepoint[2]<<endl;
        grade_point[i]=gradepoint[2];
    }else if(per[i]>=60&&per[i]<70)
    {
        cout<<gradepoint[3]<<endl;
        grade_point[i]=gradepoint[3];
    }else if(per[i]>=50&&per[i]<60)
    {
        cout<<gradepoint[4]<<endl;
        grade_point[i]=gradepoint[4];
    }else if(per[i]>=45&&per[i]<50)
    {
        cout<<gradepoint[5]<<endl;
        grade_point[i]=gradepoint[5];
    }else if(per[i]>=40&&per[i]<45)
    {
        cout<<gradepoint[6]<<endl;
        grade_point[i]=gradepoint[6];
    }
    else if(per[i]<40)
    {
        cout<<gradepoint[7]<<endl;
        grade_point[i]=gradepoint[7];
    }
}
cout<<"output gradepoints"<<endl;
for(int i=0;i<4;i++)
{
    cout<<grade_point[i]<<endl;
}
for(i=0;i<4;i++)
{
    gc[i]=grade_point[i]*credit[i];
    sum=gc[i]+sum;
}
for(i=0;i<4;i++)
{
    add=credit[i]+add;
}
for(i=0;i<4;i++)
{
    sgpa=sum/add;
}
cout<<"SGPA = "<<sgpa<<endl;

}
