#include<iostream>
using namespace std;
float average_complete(float complete_time[],int np);
float waiting_time(float trt[],float burst_time[],int np);
int main()
{
    int np;
    cout<<"enter the number of process : ";
    cin>>np;
    float arival_time[np],burst_time[np];
    for(int i=0;i<np;i++)
    {
        cout<<"enter the arival time of process "<<i+1<<endl;
        cin>>arival_time[i];
        cout<<"enter the burst time of process "<<i+1<<endl;
        cin>>burst_time[i];
    }
    //caluclating turn arround time
    float complete_time[np];
    //complete_time[0]=arival_time[0]+burst_time[0];
    //cout<<"\nthe 1 ccomplte time is : "<<complete_time[1];
    float total=0;
    int j;

    //cout<<"\nthe complte time is :";
    for (int i=0;i<np;i++)
    { 
        j=0;
        if(i==0)
        {
            complete_time[0]=arival_time[0]+burst_time[0];
            total=complete_time[0];
            //j=int(total);
        }
        else{
             int count=0;
        while(j<arival_time[i]-complete_time[i-1])
        {
            j=j+1;
            count++;
        }
        total=burst_time[i]+total+count;
        complete_time[i]=total;
        j=int(total);
        }cout<<complete_time[i]<<endl;
    }
    float trt[np];
    cout<<"the turn arround time is :";
    for(int i=0;i<np;i++)
    {
        trt[i]=complete_time[i]-arival_time[i];
        cout<<trt[i]<<endl;
    }
    
    //cout<<"\nthe average complete time is : "<<average_complete(complete_time,np);
    cout<<"\nthe average waiting time is : "<<waiting_time(trt,burst_time,np);

}
float waiting_time(float trt[],float burst_time[],int np)
{
    float waiting[np];
    float total=0.0;
    cout<<"\naverage waiting time : "<<endl;
    for(int i=0;i<np;i++)
    {
        waiting[i]=trt[i]-burst_time[i];
        total=waiting[i]+total;
        cout<<total<<endl;
    }
    cout<<"\n the average waiting time is : "<<float(float(total)/float(np));
    return total/float(np);
}
float average_complete(float complete_time[],int np)
{
    float total=0.0;
    for(int i=0;i<np;i++)
    {
        total=complete_time[i]+total;
    }

    float c=total/float(np);
    return c;    
}