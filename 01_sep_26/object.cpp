#include<iostream>
using namespace std;
class student{
    private:
    int marks;

    public:
    void setMarks (int m){
        marks =m;
    }
    void display(){
        cout<<"Marks: "<<marks<<endl;
    };
};
int main (){
student S;
    S.setMarks(85);
    S.display();
    return 0;
}