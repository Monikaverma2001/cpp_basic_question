#include <iostream>
#include <cmath>
using namespace std;
class scalculation
{
private:
    int a, b, choice;

public:
    void setvalue_scalculation()
    {
        cout << "Enter the first number : " << endl;
        cin >> a;
        cout << "Enter the second number : " << endl;
        cin >> b;
    }
    void do_cal();
};
void scalculation::do_cal()
{
    cout << "enter the choice :" << endl;
    cout << "press 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "the value of a + b : " << a + b << endl;
        break;
    }
    case 2:
    {
        cout << "the value of a - b : " << a - b << endl;
        break;
    }
    case 3:
    {
        cout << "the value of a * b : " << a * b << endl;
        break;
    }
    case 4:
    {
        cout << "the value of a / b : " << float(a / b) << endl;
        break;
    }
    default:
        break;
    }
}
class scicalculation
{
    int a, b, choice;

public:
    void setvalue_scicalculation()
    {
        cout << "Enter a number : " << endl;
        cin >> a;
        /* cout << "Enter the second number : " << endl;
         cin >> b;*/
    }
    void do_scical();
};
void scicalculation::do_scical()
{
    int choice;
    cout << "enter your choice 1.sin(a) , 2.cos(a), 3.tan(a) , 4.squrt(a) , 5.square(a)";
    cin >> choice;
    if (choice == 4)
    {
        cout << "The value of sqrt("<<a<<") : " << sqrt(a) << endl;
    }
    else if (choice == 3)
    {
        cout << "The value of tan("<<a<<") : " << tan(a) << endl;
    }
    else if (choice == 2)
    {
        cout << "The value of cos("<<a<<") : " << cos(b) << endl;
    }
    else if (choice == 1)
    {
        cout << "The value of sin("<<a<<") : " << sin(a) << endl;
    }
    else if (choice == 5)
    {
        cout << "the square of " << a << " is " << a * a << endl;
    }

    /*
    cout << "The value of sin() : " << sin(b) << endl;
    cout << "The value of tan() : " << tan(b) << endl;
    cout << "The value of cos() : " << cos(a) << endl;
    cout << "The value of sqrt() : " << sqrt(b) << endl;
    */
}
class calculations : public scalculation, public scicalculation
{
public:
    void s_result()
    {
        setvalue_scalculation();
        do_cal();
    }
    void sci_result()
    {
        setvalue_scicalculation();
        do_scical();
    }
};
int main()
{
    int choice;
    calculations cal;
    cout << "Enter the choice : "
         << "\n"
         << "1.simple calculations "
         << "\n"
         << "2.scientific calculations " << endl;
    cout << "press any key to exit" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cal.s_result();
    }
    else if (choice == 2)
    {
        cal.sci_result();
    }
    else
    {
        exit(0);
    }
    return 0;
}