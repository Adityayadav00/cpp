#include<iostream>
#include<string>
using namespace std;
//multiple constructor with same name but type different parameters is

class Banking{
    private:
    double deposit;

    public:
    Banking(){
        mode_of_payment="cash";
        cout << "This is constructor called" << endl;
}

Banking(string u, string c, string mop,double AC, double dep){
    username = u;
    city = c;
    AC_Number = AC;
    deposit = dep;
}

    string username;
    string city;
    string mode_of_payment;
    double AC_Number;

    void changeMode(string newMode_of_payment){
        mode_of_payment = newMode_of_payment;
    }

    void getInfo(){
        cout << "Username : " << username << endl;
        cout << "City : " << city << endl;
    }
};
int main(){
    Banking b1("Aditya","Pune","Cash",123456789,10000);
    b1.getInfo();
    Banking b4("Aditya","Pune","Cash",123456789,10000);
    b4.getInfo();
   
    return 0;
}