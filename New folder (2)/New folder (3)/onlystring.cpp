#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s[3] = {"monika is my name", "jasdeep is my name", "beenu is my name"};
    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << endl; // or use below also
        // cout << "enter string " << i + 1 << endl;
        // cin >> s[i];
    }
    for (int i = 0; i < 3; i++)
        cout << s[i].length() << endl;
    // string lenth
    // s[i].size()
    int c = s[1].compare(s[2]);
    if (c == 0)
        cout << c << "\nboth string " << s[1] << " and " << s[2] << " are equal\n";
    else
        cout << " strings are not equal "
             << " for " << s[1] << " " << s[2] << endl;
    // cout << "\n\n";

    int d = s[2].compare(s[0]);
    if (d == 0)
        cout << d << "\nboth string " << s[2] << " and " << s[0] << " are equal\n";
    else
        cout << " \nstrings are not equal "
             << " for " << s[2] << " " << s[0] << endl;

    // cout << "\n\n";
    int e = s[1].compare(s[0]);
    if (e == 0)
        cout << e << "\nboth string " << s[1] << " and " << s[0] << " are equal\n";
    else
        cout << "\n strings are not equal "
             << " for " << s[1] << " " << s[0] << endl;

    // for swaping use-----
    cout << "rollno at 1 we have " << s[0] << endl;
    cout << "rollno at 2 we have " << s[1] << endl;
    cout << "rollno at 3 we have " << s[2] << endl;
    s[1].swap(s[0]);
    cout << "now rollno at 1 we have " << s[0] << endl;
    cout << "now rollno at 2 we have " << s[1] << endl;
    cout << "now rollno at 3 we have " << s[2] << endl;
    // resize the string lenth
    // 1.reduce size
    s[0].resize(7); s[1].resize(6); s[2].resize(6);
    cout << "after size reduce we have" << s[0] << endl;
    cout << "after size reduce we have" << s[1] << endl;
    cout << "after size reduce we have" << s[2] << endl;
    // to print single single character of each string serial wise
    cout << "the name of 3 students are :";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            cout << s[i].at(j);
        }
        cout<<"\n";
    }
    //to find 
    cout<<s[0].find("deep")<<endl;
}