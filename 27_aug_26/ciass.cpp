#include<iostream>
#include<string>
using namespace std;
class student{
    //properties / attributes
public:
   string name;
   string address;
   int marks;
   int age;
   int roiino;

   //methods of the class/ member functions
void changeName(string fullName)
{
    name=fullName;
}
};

int main (){
    student a1;
    a1.name="bharat";
    cout<<a1.name<<endl;
    return 0;
} 