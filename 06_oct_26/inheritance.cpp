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

int main(){
    car mycar;
    mycar.hunk();
    return 0;
}