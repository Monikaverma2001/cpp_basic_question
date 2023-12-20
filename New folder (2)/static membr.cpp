/*#include<iostream>
using namespace std;
class A
{
   private:
      int a;

   public:
      void inita() {a = 10;}
      void showa() {cout << a; }
};

class B: public A
{
    private:
       int b;

    public:
      void initb() { b = 20; }
       void showb() { cout << b; }
};

int main()
{
     B ob;
     ob.inita();     //ob.a is initialized to 10
     ob.initb();      //ob.b is initialized to 20

     ob.showa();   //10
    ob.showb();   //20
}*/
/*#include<iostream>
using namespace std;
//Base class 1

class A
{
    private:
       int a;
    public:
      void inita() { a = 10; }
      void showa() { cout << a; }
};

//Base class 2
class B
{
    private:
       int b;
    public:
     void  initb() { b=20; }
      void showb() { cout << b; }
};

class C: public A, public B   //Derived class
{
        private:
               int c;
        public:
           void    initc() { c = 30; }
            void   showc() { cout << c; }
};

int main()
{
     C ob;
     ob.inita();
     ob.showa();
     ob.initb();
     ob.showb();
     ob.initc();
     ob.showc();
}
*/
// Base class
/*#include<iostream>
using namespace std;
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}*/
//single inheritance
/*#include <iostream>
using namespace std;
 class Account {
   public:
   float salary;
 };
   class Programmer: public Account {
   public:
   float bonus;
   };
int main(void) {
     Programmer p1;
     p1.salary=10;
     p1.bonus=20;
     cout<<"Salary: "<<p1.salary<<endl;
     cout<<"Bonus: "<<p1.bonus<<endl;
    return 0;
}*/
//it is right program run on another compilier
/*#include <iostream>

using namespace std;
class A
{
    int a = 4;
    int b = 5;
    public:
    int mul()
    {
        int c = a*b;
        return c;
    }
};

class B : private A
{
    public:
    void display()
    {
        int result = mul();
        cout <<"Multiplication of a and b is : "<<result<< std::endl;
    }
};
int main()
{
   B c;
   c.display();

    return 0;
}
#include <iostream>
using namespace std;
class A
{
    protected:
     int a;
    public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
        b = n;
    }
};
class C : public A,public B
{
   public:
    void display()
    {
        std::cout << "The value of a is : " <<a<< std::endl;
        std::cout << "The value of b is : " <<b<< std::endl;
        cout<<"Addition of a and b is : "<<a+b;
    }
};
int main()
{
   C c;
   c.get_a(10);
   c.get_b(20);
   c.display();

    return 0;
}
*/
//AMBLIQUITY
/*
#include <iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
    public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public A, public B
{
    public: //error on private
    void view()
    {
        A::display(); //it become error on display() bcz of ambliquity
        B::display();
    }
};
int main()
{
    C c;
    c.view()  ;//error on c.display()
    return 0;
}*/
