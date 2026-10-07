#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        int c = a + b;
       cout<<a<<"+"<<b<<"="<<c;
    }
    int sub(int a, int b)
    {
        int c = a - b;
       cout<<a<<"-"<<b<<"="<<c;
    }
    int multiply(int a, int b)
    {
        int c = a * b;
        cout<<a<<"*"<<b<<"="<<c;
    }
    int divide(int a, int b)
    {
        int c = a % b;
        cout<<a<<"%"<<b<<"="<<c;
    }
};

int main()
{
calculator obj1;
    int choice, a, b;

    cout << "Choose what you want to do :"<<endl;
    cout << "1) Addition " << endl
         << "2) Substraction" << endl
         << "3) Multiplication" << endl
         << "4) Divide" << endl;
    cin >> choice;
    if (choice < 1 && choice > 4)
    {
        cout << "Run the program again" << endl;
    }
    else
    {
        cout << "First value :";
        cin >> a;

        cout << "Second value :";
        cin >> b;


    }
    switch (choice)
    {
    case 1:
obj1.add(a,b);

        break;
    case 2:
obj1.sub(a,b);
        break;
    case 3:
obj1.multiply(a,b);
        break;
    case 4:
obj1.divide(a,b);
        break;

    default:
    cout<<"Try again";
        break;
    }

    return 0;
}