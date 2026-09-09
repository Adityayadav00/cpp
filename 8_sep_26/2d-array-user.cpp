#include<iostream>
using namespace std;

int main()
{
    int p,q;
    cout << "Row : ";
    cin >> p;
    cout << "Column : ";
    cin >> q;
    int arr[p][q];
    for (int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cout  << i << "*"  << j << " = ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}