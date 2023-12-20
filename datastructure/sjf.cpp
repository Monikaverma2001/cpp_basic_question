#include<iostream>
using namespace std;

float check_min_burst(float burst_time[],int np,float burst);
float check_min_arival(float arival_time[],int np,float arival);
float compltetime(float arival_time[],float burst_time[],float np,float complete_time[],float get);

int main()
{
    int np,returnvalue;
    cout<<"enter the number of process : "<<endl;
    cin>>np;
    float arival_time[np],complete_time[np],burst_time[np];
    cout<<"enter the arival and the burst time : "<<endl;
    for(int i=0;i<np;i++)
    {
        cout<<"\nfor process "<<i+1<<endl;
        cin>>arival_time[i]>>burst_time[i];
    }
    float get=0;
    for(int i=0;i<np;i++)
    {
        get=burst_time[i]+get;
    }
    float arival=arival_time[0],burst=burst_time[0];
    int j=0;
    float total=0;
    while(j!=get)
    {
        int a=check_min_arival(arival_time,np,arival);
        int b=check_min_burst(burst_time,np,burst);
        
        returnvalue=compltetime(arival_time,burst_time,np,complete_time,get);
        if(returnvalue==1)
        {
            int count=0;
            while(total!=arival_time[i])
            {
                total=total+1;
                count++;
            }
            complete_time[i]=count+1;
            burst_time[i]=burst_time[i]-1;
        }
        i++;
    }
}
float compltetime(float arival_time[],float burst_time[],float np,float complete_time[],float get)
{

    
    for(int i=0;i<np;i++)
    {
        
        if(a==b)
        {
            return 1;
        }
       // complete_time[i]=count+1;
       // burst_time[i]=burst_time[i]-1;   
    }

}

float check_min_burst(float burst_time[],int np,float burst)
{
    int i;
    for( i=1;i<np;i++)
    {
        if(burst>burst_time[i])
        {
            burst=burst_time[i];
        }
    }
    return i;
}

float check_min_arival(float arival_time[],int np,float arival)
{
    int i;
    for(i=1;i<np;i++)
    {
        if(arival>arival_time[i])
        {
            arival=arival_time[i];
        }
    }
    return i;
}