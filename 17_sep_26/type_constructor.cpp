#include <iostream>
using namespace std;
class A
{
public:
    int age;

    A(int a)
    {
        age = a;
    }
    A(const A &a)
    {
        age = a.age;
    }
};
int main()
{
    A p1(20);
    A p2(24);

    cout << "P1 age : " << p1.age << endl;
    cout << "P2 age : " << p2.age << endl;
}