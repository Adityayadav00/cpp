#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter any no. ";
    cin >> i;
    for (int j = 1; j <= i; j++)
    {
        cout << "Table of " << j << ":\n";
        for (int i = 1; i <= 10; i++)
        {

            cout << j << " * " << i << "  = " << j * i << endl;
        }
        cout << "\n";
    }
    return 0;
}