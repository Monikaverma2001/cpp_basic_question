#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> /* for exit() */
#include<ctype.h> /* for isdigit(char ) */
using namespace std;
int top=-1;
#define size 10
char stack[size];
void push(char element)
{
    
    if(top>=size-1)
    {
        cout<<"no space here";
    }
    else{
        top=top+1;
        stack[top]=element;
    }
    
}
char pop()
{
    
    char element;
    
        if(top<0)
        {
            cout<<"empty";
            getchar();
            exit(1);
        }
        else{
            element=stack[top];
            top=top-1;
            return(element);
        }
    
}
int isoperator(char symbol)

{
    
        if(symbol=='+'|| symbol=='-'|| symbol=='*'|| symbol=='/'||symbol=='^')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
}
int precedance(char symbol)
{
    if(symbol=='^')
    {
        return (3);
    }
    
    else if(symbol=='/'|| symbol=='*')
    {
        return (2);
    }
    else if(symbol=='-'|| symbol=='+')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
void infixtopostfix(char infix[],char postfix[])
{
    int i,j;
    char element;
    int x;
    push('(');
    strcat(infix,")");
    i=0;
    j=0;
    element=infix[i];
    while(element != '\0')
    {
        if(element=='(')
        {
            push(element);
        }
        else if(isdigit(element) && isalpha(element))
        {
            postfix[j]=element;
            j++;
        }
        else if(isoperator(element)==1)
        {
            x=pop();
            while(isoperator(element)==1 && precedance(x)>=precedance(element))
            {
                postfix[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(element);
        }
        else if(element==')')
        {
            x=pop();
            while(x!='(')
            {
                postfix[j]=x;
                j++;
                x=pop();
            }
        }
        else
        {
           // if current symbol is neither operand not '(' nor ')' and nor operator 
            cout<<"invalid";
            getchar();
            exit(1);
        }
        
        i++;
        element=infix[i];
    }
    if(top>0){

printf("\nInvalid infix Expression.\n");
getchar();
exit(1);
}
    
}

int main()
{
    char ifix[size],pfix[size];
    cout<<"enter your infix expression"<<endl;
    gets(ifix);
    infixtopostfix(ifix,pfix);
    cout<<"your postfix expression is"<<endl;
    puts(pfix);
    return 0;
}