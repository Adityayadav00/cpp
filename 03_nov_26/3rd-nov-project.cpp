#include<iostream>
using namespace std;

class vehicle
{
    private:
    double vehicle_no;
    int type , inhour , exhour , hour;

    vehicle()
    {
    }
};
  
class parkinglot : public vehicle
{
    int slots[10] ,totalEarn;

    void park()
    {
        cout<<"vehicle number:";
        cin>>vehicle_no;
        cout<<"tyepe of vehicle (2 for car, 1 for bike):";
        cin>>type;
        cout<<"hour:";
        cin>>hour;
        return 0;
    }
};

int main()
{
    cout<<"\n======Parking Lot Management System=====\n";
    parkinglot p1;
    p1.park();

}
