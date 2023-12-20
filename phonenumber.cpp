
#include <iostream>
using namespace std;
int main()
{
    int flag;
    string num;
    cout << "enter your phone number : ";
    cin >> num;
    if (num.size() != 10)
    {
        cout << "enter 10 digit number " << endl;
        return 0;
    }
    for (int i = 0; i < num.size(); i++)
    {
        
        if (isdigit(num[i]))
        {
            if (num[i] >= 0 || num[i] <= 9)
            {
               flag=1;
            }
        }
        else
        {
            cout << "\ndon't use special charcter or any space between numbers : ";
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<num;
    }
    else
    return 0;
    
}