#include <iostream>
using namespace std;

int main()
{
    int n, i, p = 0;
    cout << "Enter any no. ";
    cin >> i;

    for (int j = 1; j <= i; j++)
    {
        for (int k = 1; k <= 1; k++)
        {
            p = j * j;
            cout << j << " * " << j << " = " << p << endl;
            p += p;
        }
        cout << "\n";
        cout << p;
    }
    return 0;
}