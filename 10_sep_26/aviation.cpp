#include <iostream>
#include <string>

using namespace std; 

class aviation
{
private:
	string name;
	string mob;

public:
	aviation()
	{
		Mode_of_travel = "default";
	}

	string Mode_of_travel;

	void changeMode(string newTravel)
	{
		Mode_of_travel = newTravel;
	}

	void setPassenger(string N)
	{
		name = N;
	}

	string getPassenger()
	{
		return name;
	}

	void setPassMob(string Mobile)
	{
		mob = Mobile;
	}

	string getPassMob()
	{
		return mob;
	}
};

int main()
{
	aviation t1;
	t1.setPassenger("Aditya");
	t1.setPassMob("9369175147");
	t1.changeMode("Helicopter");

	cout << "Passenger  Name :" << t1.getPassenger() << endl;
	cout << "Passenger  Mob. :" << t1.getPassMob() << endl;
	cout << "Mode of Travel  : " << t1.Mode_of_travel << endl << endl;

	aviation t2;
	t2.setPassenger("Aditya");
	t2.setPassMob("9369175147");
	t2.changeMode("Helicopter");

	cout << "Passenger  Name :" << t2.getPassenger() << endl;
	cout << "Passenger  Mob. :" << t2.getPassMob() << endl;
	cout << "Mode of Travel  : " << t2.Mode_of_travel << endl;

	return 0;
}