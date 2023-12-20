#include<iostream>
using namespace std;

int main()
{
    int i,gradepoint[10]={10,9,8,7,6,5,4,0},grade_point[10],gc[i];
    int sum=0,add=0;
    float ext[10],inte[10],extrn[10],total[10];
    float per[10];
    float sgpa;
    int credit[10]={4,4,4,3,1,1,2,1,1};

    int external_marks;
    cout<<"enter the total marks of that subject :"<<'\n'<<"enter the external marks obtained "<<'\n'<<"enter the internal marks obtained "<<endl;

   for( i=0;i<9;i++)
   {
       switch(i+1)
       {
           case 1:
           cout<<"enter the marks of mathematics2 ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 2:
           cout<<"enter the marks of chemistry ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 3:
           cout<<"enter the marks of PPS ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 4:
           cout<<"enter the marks of english ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 5:
           cout<<"enter the marks of chemistry Lab ";
           cin>>total[i]>>ext[i]>>inte[i];;
           break;
           case 6:
           cout<<"enter the marks of PPS Lab";
          cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 7:
           cout<<"enter the marks of manufacturing practices ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 8:
           cout<<"enter the marks of english lab ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
           case 9:
           cout<<"enter the marks of mentoring ";
           cin>>total[i]>>ext[i]>>inte[i];
           break;
       }
   }
   for(i=0;i<4;i++)
   {
        extrn[i]=((ext[i]*2)/3+(inte[i]/2));
        }
    for(i=4;i<9;i++)
    {
        extrn[i]=ext[i];
        }
  
   cout<<"% obtained in each subject:"<<endl;
    for(i=0;i<9;i++)
{
        per[i]=(extrn[i]+inte[i])/total[i]*100;//  percentage_sub();

}cout<<"gradepoint based on percentage"<<endl;
for(int i=0;i<9;i++)
{
    if(per[i]>=90&&per[i]<=100)
    {
        //cout<<gradepoint[0]<<endl;
         grade_point[i]=gradepoint[0];
    }
   else if(per[i]>=80&&per[i]<90)
    {
       // cout<<gradepoint[1]<<endl;
        grade_point[i]=gradepoint[1];
    }else if(per[i]>=70&&per[i]<80)
    {
        //cout<<gradepoint[2]<<endl;
        grade_point[i]=gradepoint[2];
    }else if(per[i]>=60&&per[i]<70)
    {
       // cout<<gradepoint[3]<<endl;
        grade_point[i]=gradepoint[3];
    }else if(per[i]>=50&&per[i]<60)
    {
        //cout<<gradepoint[4]<<endl;
        grade_point[i]=gradepoint[4];
    }else if(per[i]>=45&&per[i]<50)
    {
       // cout<<gradepoint[5]<<endl;
        grade_point[i]=gradepoint[5];
    }else if(per[i]>=40&&per[i]<45)
    {
       // cout<<gradepoint[6]<<endl;
        grade_point[i]=gradepoint[6];
    }
    else if(per[i]<40)
    {
       // cout<<gradepoint[7]<<endl;
        grade_point[i]=gradepoint[7];
    }
}
//cout<<"output gradepoints"<<endl;
/*for(int i=0;i<4;i++)
{
    cout<<grade_point[i]<<endl;
}*/
for(i=0;i<9;i++)
{
    gc[i]=grade_point[i]*credit[i];
    sum=gc[i]+sum;
}
for(i=0;i<10;i++)
{
    add=credit[i]+add;
}

    sgpa=sum/add;

cout<<"SGPA = "<<sgpa<<endl;
return 0;

}

