//program for distribute only one question among the 10 student of class

/*
#include<iostream>
#include<ctime>
using namespace std;

struct student
{
    int q_n;
}s[10];

int main()
{
    int arr[10];

    srand(time(0));
    for(int i=1;i<=10;i++)
    {
        s[i].q_n=rand()%10;
        switch(s[i].q_n)
        {
            case 1:
            {
                cout<<"\n...........question number 1.........\n";
                break;
            }
            case 2:
            {
                cout<<"\n...........question number 2.........\n";
                break;
            }
            
            case 3:
            {
                cout<<"\n...........question number 3.........\n";
                break;
            
            }
            case 4:
            {
                cout<<"\n...........question number 4.........\n";
                break;
            }
            case 5:
            {
                cout<<"\n...........question number 5.........\n";
                break;
            }case 6:
            {
                cout<<"\n...........question number 6.........\n";
                break;
            }case 7:
            {
                cout<<"\n...........question number 7.........\n";
                break;
            }
            case 8:
            {
                cout<<"\n...........question number 8.........\n";
                break;
            }case 9:
            {
                cout<<"\n...........question number 9.........\n";
                break;
            }case 10:
            {
                cout<<"\n...........question number 10.........\n";
                break;
            }
        }
        
    }
    return 0;
}


//program for distribute all question random order among the 1 students of class
#include<iostream>
#include<ctime>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct student
{
    int q_n;
}s[10];
int rando(int i,int arr[])
{
    for(i=10;i>0;i--)
    {
        switch(s[i].q_n)
        {
            case 1:
            {
                cout<<"\n...........question number 1.........\n";
                break;
            }
            case 2:
            {
                cout<<"\n...........question number 2.........\n";
                break;
            }
            
            case 3:
            {
                cout<<"\n...........question number 3.........\n";
                break;
            
            }
            case 4:
            {
                cout<<"\n...........question number 4.........\n";
                break;
            }
            case 5:
            {
                cout<<"\n...........question number 5.........\n";
                break;
            }case 6:
            {
                cout<<"\n...........question number 6.........\n";
                break;
            }case 7:
            {
                cout<<"\n...........question number 7.........\n";
                break;
            }
            case 8:
            {
                cout<<"\n...........question number 8.........\n";
                break;
            }case 9:
            {
                cout<<"\n...........question number 9.........\n";
                break;
            }case 10:
            {
                cout<<"\n...........question number 10.........\n";
                break;
            }
            default:
            i--;
        }
    }return i;
}
int main()
{
    int arr[10]={'\0',1,2,3,4,5,6,7,8,9,10},i,y;
    srand(time(0));
    cout<<"............";
    //swaping and all
    y=rando(i,arr);
    cout<<".......................................................";
    return 0;
}

#include <iostream>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#define N1 1
#define N2 10
using namespace std;

main(){
    int numb=5,len = N2-N1+1 , i , r , temp,student[numb];//
    int num[len];//arr[10]
    
    for( temp=0,i=N1; temp<len; i++,temp++ )//for(i=0;)
    
        num[temp] = i;
  //cout<<"\n1."<<i<<endl;
    srand( time(NULL) );  //seed rand()

    //Fisher–Yates shuffle algorithm
    for( i=len-1; i>0; i-- ){
       // cout<<"i"<<i<<endl;
        r = rand()%i;
       // cout<<"2."<<r<<endl;
        temp = num[i];
       // cout<<"3."<<temp<<endl;
        num[i] = num[r];
       // cout<<"4."<<num[i]<<endl;
        num[r] = temp;
       // cout<<"5,"<<num[r]<<endl;
    
    }
    
    
    for(i=0;i<len;i++)
    switch(num[i])
        {
            case 1:
            {
                cout<<"\n...........question number 1.........\n";
                break;
            }
            case 2:
            {
                cout<<"\n...........question number 2.........\n";
                break;
            }
            
            case 3:
            {
                cout<<"\n...........question number 3.........\n";
                break;
            
            }
            case 4:
            {
                cout<<"\n...........question number 4.........\n";
                break;
            }
            case 5:
            {
                cout<<"\n...........question number 5.........\n";
                break;
            }case 6:
            {
                cout<<"\n...........question number 6.........\n";
                break;
            }case 7:
            {
                cout<<"\n...........question number 7.........\n";
                break;
            }
            case 8:
            {
                cout<<"\n...........question number 8.........\n";
                break;
            }case 9:
            {
                cout<<"\n...........question number 9.........\n";
                break;
            }case 10:
            {
                cout<<"\n...........question number 10.........\n";
                break;
            }
            default:
            i--;
        }
    
        //cout <<"\nfinal numbers are:"<< num[i] << endl;
}



//program for 10 student having 10 question in random order accept randomly their question paper random value is unique for every stident


#include <iostream>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#define N1 1
#define N2 10
using namespace std;

main(){
    int len = N2-N1+1 , i , r , temp;//
    int num[len];//arr[10]
    
    for( temp=0,i=N1; temp<len; i++,temp++ )//for(i=0;)
    
        num[temp] = i;
  //cout<<"\n1."<<i<<endl;
    srand( time(NULL) );  //seed rand()

    //Fisher–Yates shuffle algorithm
    for( i=len-1; i>0; i-- ){
       // cout<<"i"<<i<<endl;
        r = rand()%i;
       // cout<<"2."<<r<<endl;
        temp = num[i];
       // cout<<"3."<<temp<<endl;
        num[i] = num[r];
       // cout<<"4."<<num[i]<<endl;
        num[r] = temp;
       // cout<<"5,"<<num[r]<<endl;
    
    }
    
    
    //for(int j=0; j<10; j++ )
    //{
    //cout<<"for atudent having rollno :"<<j+1;
    for(i=0;i<len;i++)
    {
    cout<<"for atudent having rollno :"<<i+1;
    switch(num[i])
        {
            case 1:
            {
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 10.........\n";
                break;
            }
            case 2:
            {
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 1.........\n";
                 cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 9.........\n";
                break;
            }
            
            case 3:
            {
                
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 5.........\n";
                 cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 3.........\n";
                break;
            
            }
            case 4:
            {
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 4.........\n";
                 cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 1.........\n";
                break;
            }
            case 5:
            {
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 3.........\n";
                break;
            }case 6:
            {
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 1.........\n";
                break;
            }case 7:
            {
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 7.........\n";
                break;
            }
            case 8:
            {
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 4.........\n";

                break;
            }case 9:
            {
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 8.........\n";
                 cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 1.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 6.........\n";
                break;
            }case 10:
            {
                cout<<"\n...........question number 8.........\n";
                cout<<"\n...........question number 7.........\n";
                cout<<"\n...........question number 6.........\n";
                cout<<"\n...........question number 3.........\n";
                cout<<"\n...........question number 10.........\n";
                cout<<"\n...........question number 2.........\n";
                cout<<"\n...........question number 9.........\n";
                cout<<"\n...........question number 5.........\n";
                cout<<"\n...........question number 4.........\n";
                cout<<"\n...........question number 1.........\n";   
                break;
            }
            default:
            i--;
        }
    
    }    //cout <<"\nfinal numbers are:"<< num[i] << endl;
}
*/
#include <iostream>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#define N1 1
#define N2 10
using namespace std;
int rando(int num[],int i,int r)
{
    int count =0;
    int len= N2-N1+1;
    int temp;
    for( temp=0,i=N1; temp<len; i++,temp++ )//for(i=0;)
    
        num[temp] = i;
  //cout<<"\n1."<<i<<endl;
   // srand( time(NULL) );  //seed rand()

srand( time(NULL) );
    //Fishfer–Yates shuffle algorithm
    for( i=len-1; i>0; i-- ){
         count++;
       // cout<<"i"<<i<<endl;
        r = rand()%i;
       // cout<<"2."<<r<<endl;
        temp = num[i];
       // cout<<"3."<<temp<<endl;
        num[i] = num[r];
       // cout<<"4."<<num[i]<<endl;
        num[r] = temp;
       // cout<<"5,"<<num[r]<<endl;
     for(i=0;i<len;i++)
     {
    switch(num[i])
        {
            case 1:
            {
                cout<<"\n...........question number 1.........\n";
                break;
            }
            case 2:
            {
                cout<<"\n...........question number 2.........\n";
                break;
            }
            
            case 3:
            {
                cout<<"\n...........question number 3.........\n";
                break;
            
            }
            case 4:
            {
                cout<<"\n...........question number 4.........\n";
                break;
            }
            case 5:
            {
                cout<<"\n...........question number 5.........\n";
                break;
            }case 6:
            {
                cout<<"\n...........question number 6.........\n";
                break;
            }case 7:
            {
                cout<<"\n...........question number 7.........\n";
                break;
            }
            case 8:
            {
                cout<<"\n...........question number 8.........\n";
                break;
            }case 9:
            {
                cout<<"\n...........question number 9.........\n";
                break;
            }case 10:
            {
                cout<<"\n...........question number 10.........\n";
                break;
            }
            default:
            i--;
        }
     }
        while(count<3)
        rando( num , i , r);
    }
     return num[i];
}
main(){ 
    int j,i,r;
    int num[10];
    int len= N2-N1+1;
     rando( num , i , r);
    cout<<"out of loop:";
        //cout <<"\nfinal numbers are:"<< num[i] << endl;
}
