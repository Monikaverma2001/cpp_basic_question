//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node
{
    int val;
    struct node* next;
};struct node* head;
void inset_first(int val)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter the element");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
    }
}
void inset_last(int val)
{
    struct node* p;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter the element");
        scanf("%d",&val);
        
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }else{
            p=head;
        while(p->next!=0)
        {
            p=p->next;
        }
        ptr->val=val;
        p->next=ptr;
        ptr->next=NULL;
    }}
}
void inset_random(int val)
{
    struct node* p;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    int loc;
    //ptr->val=val;
    p=head;
    printf("enter the location :");
    scanf("%d",&loc);
    printf("enter the value you want to insert:");
    scanf("%d",&val);
    ptr->val=val;
    for(int i=0;i<loc;i++)
    {
        
        if(p==NULL)
        {
            printf("\nnot working next\n");
        }
        else
        {
            p=p->next;
        }  
    }
    
    ptr->next=p->next;
    p->next=ptr;
}
void delete_first()
{
    int item;
    struct node* ptr;
    if(head==NULL)
    {
        printf("underflow");
    }
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else{
        ptr=head;
        head=ptr->next;
        free(ptr);
    }
}
void delete_last()
{
    //int item;
    struct node* ptr;
    struct node* ptr1;
    if(head==NULL)
    {
        printf("underflow");
    }
    else if(head -> next == NULL)  
    {  
        ptr=head;
        head = NULL;  
        free(ptr);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
    }
}
void delete_random()
{
    struct node* p;
    struct node* ptr;
    int loc;
    printf("enter the location you want to delete :");
    scanf("%d",&loc);
    p=head;
    for(int i=0;i<loc;i++)
    {
        if(p==NULL)
        {
            printf("\nnot working next\n");
        }
        else{
        ptr=p;
        p=p->next;}
    }
    ptr->next=p->next;
    p=NULL;
    free(p);
    
}
void display()
{
    struct node* ptr;
    struct node* ptr1;
    if(head==NULL)
    {
        printf("emoty list ");
    }
    else
    {
        ptr=head;
        while(ptr!=0)
        {
            printf("     %d    ",ptr->val);
            ptr=ptr->next;
        }
    }
}

int main()
{
    int choice;
    int val;
    while(1)
    {
        printf("enter the choice:");
        printf("1.insertion 2.delection 3.display 4.exit");
        scanf("%d",&choice);
        {
            switch(choice)
            {
                case 1:
                {
                    int ch;
                    
                    
                    
                        printf("insertion at 1.first 2.last 3.random  4.exit");
                    scanf("%d",&ch);
                        switch(ch)
                        {
                            case 1:
                            {
                                inset_first(val);
                                break;
                            }
                            case 2:
                            {
                                inset_last(val);
                                break;
                            }
                            case 3:
                            {
                                inset_random(val);
                                break;
                            }
                            default :
                            {
                                break;
                            }
                        }break;
                    
                    
                }
                case 2:
                {
                    
                
                    int ch;
                    
                    
                        printf("delete at 1.first 2.last 3.random  4.exit");
                    scanf("%d",&ch);
                        switch(ch)
                        {
                            case 1:
                            {
                                delete_first();
                                break;
                            }
                            case 2:
                            {
                                delete_last();
                                break;
                            }
                            case 3:
                            {
                                delete_random();
                                break;
                            }
                            default :
                            {
                                break;
                            }
                        }break;
                    
                    
                
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
            }
        }
    }
    return 0;
}