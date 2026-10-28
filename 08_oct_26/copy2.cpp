#shallow copy: of object copies all of the member values from one object to another .
#deep copy: copies all member values and allocates separate memory for pointer members. 

class student{ #declarinng a class student
    public:
    string name;
    double cgpa;
    student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    student(student &obj){
        name = obj.name;
        cgpa = obj.cgpa;    
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
 
int main(){
    student s1("Aditya", 3.5);
    student s2(s1);
    s1.getInfo();

    return 0;
}