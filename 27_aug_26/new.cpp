#include<iostream>
using namespace std;

class student
{
    public:
    void display()
    {
        cout << "Hello student";
    };
};
int main()
{
    student *s = new student();
    s->display();
    delete s;
    return 0;
}