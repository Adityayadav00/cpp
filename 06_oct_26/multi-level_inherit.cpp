#include<iostream>
#include<string>
using namespace std;

class vehicle{
    public:
    string brand ="BMW";
    void hunk(){
        cout<<"hello BMW !";
    }
};
class car: public vehicle //inheritance class
 {
    public:
    string model="M5";
};

class cycle: public car{
    public:
    void display(){
        cout<<"this is cycle class !";
    }
};
class privatejet: public cycle{
    public:
    void p(){
        cout<<"my jet !";
    }
};

int main(){
    cycle obj1;
    string m = obj1.model;
    cout<<m;
}