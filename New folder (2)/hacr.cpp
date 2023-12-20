#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    
    public:
    string name;
    int age;
    int publications;
    virtual void getdata()
    {
        cin>>name;
        cin>>age;
    }
    virtual void putdata()
    {
        cout<<name; 
        cout<<age;
    }
};
class Professor:public Person{
    static int id;
    public:
    Professor()
    {
        id=1;
    }
    void getdata()
    {
        cin>>name;
        cin>>age;
        cin>>publications;
    } 
    void putdata()
    {
        cout<<name;
        cout<<age;
        cout<<publications;
        cout<<id;
        id++;
    }  
};
class Student:public Person{
    static int id;
    int total;
    public:
    Student()
    {
        id=1;
    }
    int marks[6];
    void getdata()
    {
        cin>>name;
        cin>>age;
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
        }
    } 
    void putdata()
    {
        total=0;
        cout<<name;
        cout<<age;
        for(int i=0;i<6;i++)
        {
            total=marks[i]+total;
        }
        cout<<total;
        cout<<id;
        id++;
    }
    
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
