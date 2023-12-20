#include<stdio.h>
#include<string.h>

void do_opera(char * string)
{
    int in=0,index=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='<')
        {
            in=0;
            continue;
        }
        else if(string[i]=='>')
        {
            in=1;
            continue;
        }
        if(in==1)
        {
            string[index]=string[i];
            index++;
        }
    }string[index]='\0';
    while(string[0]==' ')
    {
        for(int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }
    while(string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }

}
int main()
{
    char string[]="<h1>  monika verma <h2>";
    do_opera(string);
    printf("%s",string);
}