#include<iostream>
using namespace std;

class a
{
    public:
    void d1()
    {
        cout<<"this is class - A !";
    }
};
class b: public a
{
    public:
    void d2()
    {
        cout<<"this is class - B !";
    }
};
class c: public a
{
    public:
    void d3()
    {
        cout<<"this is class - C !";
    }
};
int main()
{
    b obj1;
    c obj2;
    obj1.d1();
    obj1.d2();
    obj2.d3();
}