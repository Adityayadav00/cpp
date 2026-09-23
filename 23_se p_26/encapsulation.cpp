#include <iostream>
using namespace std;
class student{
    public:
    int marks;
string name;
};
int main(){
    student obj;
    obj.marks = 85;
    obj.name="BCA";
    cout<<obj.name<<endl;
    cout<<obj.marks<<endl;
}