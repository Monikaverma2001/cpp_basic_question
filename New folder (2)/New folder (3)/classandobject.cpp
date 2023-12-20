#include <iostream>

using namespace std;

int main()
{
    char ch, peekCh;
    cout << "Enter a string: ";
    
    cin.get(ch);
    cout << "After first cin.get(ch): ";
    cout << "ch = " << ch << endl;//m
    
    cin.get(ch);
    cout << "After second cin.get(ch): ";
    cout << "ch = " << ch << endl;//o
    
    //put the character back in the stream
    //cin.putback(ch);


    cin.get(ch);
    cout << "After peek, the 3rd cin.get(ch): ";
    cout << "ch = " << ch << endl;//n
    //cout << "After putback, the third cin.get(ch): ";
    //cout << "ch = " << ch << endl;
    
    //get next character in stream
    //without removing it
    //cout<<"the fourth "<<(ch)<<endl;


    peekCh = cin.peek();//i//ignore
    cout<<peekCh<<endl;


    cin.get(ch);//i
    cout << "After peek, the fourth cin.get(ch): ";//i
    cout << "ch = " << ch << endl;

    peekCh = cin.peek();//k
    cout<<peekCh<<endl;

    cout<<ch<<endl;
    return 0;
}

/*#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setid()
    {
        cout << "enter the id of employee number" << count << endl;
        cin >> id;
        count++;
    }
    void getid()
    {
        cout << "the id of employee "
             << " is " << id << endl;
    }
    static void getcount()// static data function
    {
        cout << "the number of employee is : " << count << endl;
    }
};
int employee::count = 1; // static data member variable
int main()
{
    employee monika, navdeep, hanish, vaibhav, udhay;
    monika.getcount();
    monika.setid();
    //employee.getcount();

    navdeep.getcount();
    navdeep.setid();
    //employee.getcount();

    hanish.getcount();
    hanish.setid();
    //employee.getcount();

    vaibhav.getcount();
    vaibhav.setid();
    //employee.getcount();

    udhay.getcount();
    udhay.setid();
    //employee.getcount();

    monika.getid();
    navdeep.getid();
    hanish.getid();
    vaibhav.getid();
    udhay.getid();
    return 0;
}

// acess and define member function out of class

// compile time/early/static binding: when source code is converted to the execution time
// The compile-time errors can be:
// Syntax errors :due to syntax  //Semantic errors : due to a+b=c likewise

// run time/late/dynamic: when execution of code is started run//The runtime errors are the errors that
// occur during the execution and after compilation. The examples of
//  runtime errors are division by zero, etc.


#include <iostream>
using namespace std;
class calci
{
    //encapsulation
private:
    int a, b;

public:
    // int n1,n2;
    void getvalue()
    {
        cout << "enter the value of a ";
        cin >> a;
        cout << "enter the value of b ";
        cin >> b;
    }
    void add();
    void sub();
    void mult();
    void div();
};
void calci::add()
{
    cout << "\n"
         << "Addition of " << a << " and " << b << " is : ";
    cout << a + b;
}
void calci::sub()
{
    cout << "\n"
         << "Subtraction of " << a << " and " << b << " is : ";
    cout << a - b;
}
void calci::mult()
{
    cout << "\n"
         << "Multiplication of " << a << " and " << b << " is : ";
    cout << a * b;
}
void calci::div()
{
    cout << "\n"
         << "Dvision of " << a << " and " << b << " is : ";
    cout << float(float(a) / float(b));
}
int main()
{
    calci x;
    int i;
    while (1)
    {
        cout << "\n\n\ndo you want to perform any calculations.IF YES enter 1";
        cin >> i;
        if (i == 1)
        {
            x.getvalue();
            x.add();//data abstraction we do not know what is hapeening behind add()
            x.sub(); //..................."""""""""............................"
            x.mult();//..................."""""""""............................"
            x.div();//..................."""""""""............................"
        }
        else
        break;
    }
    return 0;
}

// diffrent types of classes are there:

#include<iostream>
using namespace std;
class A
{
    public:
    //virtual void show()=0;//abstaction
    virtual void show()//virtual function
    //void show()//polymorphism
    {
        cout<<"\nI AM THE MEMBER FUNCTION OF CLASS A ";
    }
    A()//constructor tell from which base class they ar/e derived when an object is created
    {
        cout<<"\nA ";
    }
};
class B
{
    public:
    void display()
    {
        cout<<"\nI AM THE MEMBER FUNCTION OF CLASS B ";
    }
    B()//constructor tell from which base class they ar/e derived when an object is created
    {
        cout<<"\nB ";
    }
};
class C: public A,public B
{
    public:
    void give()
    {
        cout<<"\nI MAKE FROM CLASS A AND CLASS B ";
    }
    C()//constructor tell from which base class they ar/e derived when an object is created
    {
        cout<<"\nC ";
    }
};
class D:public A
{
    public:
    void show()
    {
        cout<<"\nI MAKE FROM CLASS D";
    }
    D()//constructor tell from which base class they ar/e derived when an object is created
    {
        cout<<"\nD ";
    }
};
class E:public D
{
    public:
    void tell()
    {
        cout<<"\nI M FROM CLASS D";
    }
    E()//constructor tell from which base class they ar/e derived when an object is created
    {
        cout<<"\nE ";
    }
};
class F:public E
{
    public:
    void gave()
    {
        cout<<"\nI M FROM E(D) AND A";
    }
    F()//constructor tell from which base class they ar/e derived when an object is created in main
    {
        cout<<"\nF ";
    }
};
int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    a.show();
    b.display();
    c.give();
    d.show();
    e.tell();
    f.gave();


     working of virtual function


    D l;
    A* k;
    k= &l;
    k->show();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Complex
{
  private:
  int real,imaginary;
  public:
  Complex() : real(0), imaginary(0) {}
  void input()
  {
      cin>>real>>imaginary;
  }
  Complex operator +(const Complex& obj)
  {
      Complex temp;
      cout<<obj.real<<endl;
      temp.real=real+obj.real;
      temp.imaginary=imaginary+obj.imaginary;
      cout<<temp.real<<endl;
      cout<<temp.imaginary<<endl;
      return temp;
  }
};
int main()
{
  Complex complex1,complex2,result;
  complex1.input();
  complex2.input();
  result=complex1+complex2;
  return 0;
}

//operator overloading for Overload ++ when used as prefix and postfix

#include <iostream>
using namespace std;

class Count {
 private:
  int value;

 public  :
  // Constructor to initialize count to 5
  Count() : value(5) {}

  // Overload ++ when used as prefix
  Count operator ++ () {
      Count temp;

      // Here, value is the value attribute of the calling object
      temp.value = ++value;

      return temp;
  }

  // Overload ++ when used as postfix
  Count operator ++ (int) {
      Count temp;

      // Here, value is the value attribute of the calling object
      temp.value = value++;

      return temp;
  }

  void display() {
      cout << "Count: " << value << endl;
  }
};

int main() {
  Count count1, result;

  // Call the "Count operator ++ ()" function
  result = ++count1;
  result.display();

  // Call the "Count operator ++ (int)" function
  result = count1++;
  result.display();

  return 0;
}
*/