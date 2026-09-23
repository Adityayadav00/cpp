#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int marks;
    string name;

public:
    void setMarks(int n) {
        marks = n;
    }

    int getMarks() const {
        return marks;
    }

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

int main() {
    student obj;
    obj.setMarks(85);
    obj.setName("BCA");

    cout << obj.getName() << endl;
    cout << obj.getMarks() << endl;

    return 0;
}