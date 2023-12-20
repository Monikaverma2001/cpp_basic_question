//binary tree 
#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int data)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    int choice;
    printf("\n0 for leaf node or no want to insert more \n");
    scanf(" %d ",&choice);
    if(choice==0)
    {
        return 0;
    }
    else
    {
        printf("enter the data you want in a tree :");
        scanf("%d",&data);
        ptr->data=data;
        printf("enter the left child %d data : ",data);
        ptr->left=create(data);
        printf("enter the right child %d data : ",data);
        ptr->right=create(data);
        return ptr;
    }
}
int inorder(struct node* root)
{
    if(root==0)
    {
        return 0;
    }
    else{
        inorder(root->left);
        printf(" \ndata of %d is :  ",root->data);
        inorder(root->left);
    }
}
int main()
{
    int data;
    struct node* root;
    root= create(data);
    printf("%d",inorder(root));
}
//binary search tree
