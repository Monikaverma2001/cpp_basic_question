/*
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
        p=head;
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }else{
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
{}
void delete_first()
{
    int item;
    struct node* ptr;
    if(head==NULL)
    {
        printf("underflow");
    }
    else{
        ptr=head;
        head=head->next;
        delete head;
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
        head = NULL;  
        free(head);  
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
        ptr->next=NULL;
        free(ptr);
    }
}
void delete_random()
{}
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
        while(ptr->next!=NULL)
        {
            printf("%d",ptr);
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
                    
                    while(ch!=4)
                    {
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
                            case 4:
                            {
                                break;
                            }
                        }
                    }
                    break;
                }
                case 2:
                {
                    
                {
                    int ch;
                    
                    while(ch!=4)
                    {
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
                            case 4:
                            {
                                break;
                            }
                        }
                    }
                    break;
                }
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



//to find the middle element of list



#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
class op
{
    public:
    void pushing(class node** head,int i)
    {
        class node* n= new node();//pointer n addressed to
        cout<<"value of *head is before: "<<(*head)<<endl;
        //cout<<(** head)<<endl;
        //cout<<"the address of i: "<<&i<<endl;
        n->data = i;
       // cout<<"the address of i: "<<&i<<endl;
       // cout<<"the address of val: "<<& (n->data)<<endl;
        n->next=*head;
        *head=n;
      // cout<<"value of *head is after: "<<(*head)<<"\n"<<& (n->next)<<endl;
       //cout<<"\n"<<"\n";
    }
    void p(class node* head)
    {
        struct node* s= head;
        struct node* f=head;
        if(head!=0)
        {
            while(f!=0&&f->next!=NULL)
            {
                f=f->next->next;
                s=s->next;
            }
        }
        cout<<"mid element:  "<<s->data<<endl;
    }
};
int main()
{
    class node* head = NULL;
    class op* temp=new op;
   // cout<<head<<endl;
    //cout<< (*head);
   // cout<<&head<<endl;
    //cout<<temp<<endl;
    for(int i=5;i>0;i--)
    {
        temp->pushing(&head,i);
    }
       temp->p(head);
 return 0;
}
*/

//flaten the element

