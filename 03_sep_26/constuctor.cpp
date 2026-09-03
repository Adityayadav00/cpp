#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    Teacher(){
        dept="Computer Science";

    }
    string name;
    string subject;
    string dept;
void changeDept(string NewDept){
        dept=NewDept;
    }
void setSalary(double S){
        salary= S;
    }
    double getSalary(){
        return salary;
    }

};
int main(){
    Teacher t1;
    t1.name = "Aditya";
    t1.subject = "C++";
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<end1
    cout<<t1.dept<<endl;

    return 0;
}