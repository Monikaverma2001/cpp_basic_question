#include<iostream>
#include<malloc.h>
using namespace std;
/*int main()
{
    int i;
    struct Listentry
    {
        int number;
        struct Listentry* next;//list
    }start,*node;
    start.next='\0';//point list is empty
    node=&start;//point to start of list

    for(i=0;i<10;i++)
    {
        node->next=(struct Listentry*)malloc(sizeof(struct Listentry));//memory allocation
        node=node->next;//51 after 52 and so on
        node->number=50+i;//51 to 59
        node->next='\0';//after 59 nothing
    }
    //display list
    node=start.next;//if not give 59 only
    while(node)
    {
        cout<<"  "<<node->number;//give numbers
        node=node->next;//move to next node
    }
}
*/
/*
int main()
{
    int i;
    struct linklist
    {
        int number;
        struct linklist* next;
    }start,*node;
    start.next='\0';
    node=&start;
    for(i=0;i<10;i++)
    {
        node->next=(struct linklist*)malloc(sizeof(struct linklist));//allocate memory of next
        node=node->next;//next in node
        node->number=30+i;//give node number
        node->next='\0';//give node next to null
    }
    node=start.next;
    while(node)
    {
        cout<<node->number<<endl;
        cout<<node->next<<endl;
        node=node->next;
    }
}//->____To access members of a structure through a pointer, use the arrow operator.*/

struct linklist
{
    int number;
    struct linklist*next;
};
int create(int number)
{
    linklist
    start.next='\0';
    node=&start;
    cout<<"enter the character 'n' for exit";
    char ch getchar()
    if(ch=='n')
    {
        exit();
    }
    else
    for(int i=0;i<'n';i++)
    {
    node->next=(struct linklist*)malloc(sizeof(struct linklist));
    node=node->next;
    cout<<"enter the info"<<node->number;
    cin>>node->number;
    node->next='\0';
    }
}
int main()
{
    int i,number,start,ptr,next;
    create(number);
}
