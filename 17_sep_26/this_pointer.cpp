#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int a, int b)
    {
        // a = a;
        // b = b;

        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout << a << " " << b;
    }
};
int main()
{
    A obj(2, 4);
    obj.show();
}