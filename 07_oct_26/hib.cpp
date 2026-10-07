#include<iostream>
using namespace std;
class vehicle
{
    public:
    void travel()
    {
        cout<<"It is VEHICLE class"<<endl;
    }
};
    class car: public vehicle{
        public:
        void car_travel()
        {
            cout<<"It is CAR class"<<endl;
        }
    };
    class bus: public vehicle, public fare{
        public:
void travel()
    {
        cout<<"It is BUS class"<<endl;
    }
    };
    class fare: public vehicle{
        public:
void travel()
    {
        cout<<"It is FARE class"<<endl;
    }
    };

    int main()
    {
        car c;
        c.car_travel();
        bus b;
        b.travel();
        fare f;
        f.travel();
    }