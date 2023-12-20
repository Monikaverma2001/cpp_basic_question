/*//to print the string from backward


#include<iostream>
#include<string.h>
using namespace std;

int main( )
{
    char str[80];
    int i=5;
    char c='A';
    double d=7.5;
    float f=7.5;
    signed int k=20;
    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    int l; //Hold length of string
    
    //Find the length of the string
    for(l = 0; str[l] != '\0'; l++);

    //Display the string backwards
    for(int i = l - 1; i >= 0; i--)
    {
        cout << str[i];
    }		
    cout<<"\n";	
	cout<<sizeof(str)<<endl;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(3)<<endl;
    cout<<sizeof(c)<<endl;cout<<sizeof('A')<<endl;cout<<sizeof(f)<<endl;cout<<sizeof(7.5)<<endl;cout<<sizeof(d)<<endl;
    cout<<sizeof(10.3)<<endl;cout<<sizeof(k)<<endl;
   // cout<<strlen(str)<<str;
    return 0;
}


//to concatenate
#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    cin.getline(str1, 80);
    
    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of first string
    int i;
    //Find length of first string.
    for(l = 0; str1[l] != '\0'; l++);

    //Adding second string content in first
    for(i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }
	
    str1[l] = '\0';

    cout << "\nThe first string after adding second string content:\n\n" << str1;			
	
    return 0;
}

//palindrome


#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l; //Hold length of string
    
    //finding length of string
    for(l = 0; str[l] != '\0'; l++);

    //Comparing first element with last element till middle of string 
    int i;
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++)
    cout<<str[l - i - 1]<<endl;

    if(i == l/2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
	
    return 0;
}

//Write a program to find a substring within a string. If found display its starting position.

//Source Code

#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];
	
    cout<<"Enter first string: ";
    cin.getline(str1, 80);
	
    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of second string
    
    //finding length of second string
    for(l = 0; str2[l] != '\0'; l++);

    int i, j;
    
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
            cout<<j;
        }
        else
        {
            j = 0;
        }
    }
    cout<<l;
    if(j == l)
        cout<<"Substring found at position "<< i - j + 1;
    else
        cout<<"Substring not found";
	
    return 0;
}
//Write a program to reverse a string.

//Source Code

#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
	
    int l; //Hold length of string
    for(l = 0; str[l] != '\0'; l++);    //finding length of string

    int temp;
    for(int i = 0, j = l - 1; i < l/2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;	
        //cout<<str[j];	
    }

    cout << "Reverse string: " << str << endl;
	
    return 0;
}*/
//Write a program to convert a string in lowercase.

//Source Code

#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    for(int i=0;str[i]!='\0';i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }

    cout<<"Lowercase string: " << str << endl;
	
    return 0;
}