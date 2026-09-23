#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;

    public:
student(string n, int m){
    name=n;
    roll=m;
    cout<<name<<endl;
    cout<<roll<<endl;
}
   
};
int main(){
    student o("aditya",108);
    return 0;
} 