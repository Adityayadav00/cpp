#include<iostream.h>
#include<conio.h>
class Student{
    public:
    void display(){
       cout<<"Hello Student"; 
    }
};

void main(){
    clrscr();
    student *s=new Student;
    s-> display();
    delete &;
    getch ();
}