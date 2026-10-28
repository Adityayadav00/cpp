#include<iostream>
using namespace std;
class A{
    public:
    void show1(){
        cout<<"show - A"<<endl;
    }
};

class B{
    public:
    void show2(){
        cout<<"show - B"<<endl;
    }
};

class C: public A, public B{
    public:
    void show3(){
        cout<<"show - C"<<endl;
    }
};

int main(){
    C c;
    c.show1();
    c.show2();
    c.show3();
    return 0;
}
