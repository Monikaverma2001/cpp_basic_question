#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node* next;
};struct node* head;
void display()
{
    int val;
    struct node* ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("empty");
    }
    else if(ptr==NULL)
    {
        printf("empty");
    }
    else
    {
        printf("the list is :");
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->val);
            ptr=ptr->next;
        }
    }
}
void push(int val)
{
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     if(ptr==NULL)
     {
         printf("no element allowed to enter");
     }
     else
     {
         printf("enter the element you want you push :");
         scanf("%d",&val);
         if(head==NULL)
         {
             ptr->val=val;
             ptr->next=NULL;
             head=ptr;
         }
         else
         {
             ptr->val=val;
             ptr->next=head;
             head=ptr;
         }
     }
}
void pop()
{
    int item;
    struct node* ptr;
    if(ptr==NULL)
    {
        printf("empty");
    }
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
    }
}
int main()
{
    int val;
    int choice;
    while(choice!=4)
    {
        printf("enter the desired choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                 push(val);
                 break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                pop();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            
        }
    }
}
