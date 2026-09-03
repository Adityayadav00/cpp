#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    private:
       double salary;

public:
  string name;
  int id, lec_no, sud;

  void newName(string name)
  {
    name = name;
  }
  void setsalary(double s){

  }
};

int main (){
    Teacher t1;
    t1.name="Aditya";
    cout<<t1.name<<endl;
    return 0;
}
