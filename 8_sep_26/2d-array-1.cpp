#include<iostream>
using namespace std;

int main()
{
    int arr[4][5] = { {1, 2, 3, 4, 7},
                      {5, 6, 7, 8, 11},
                      {9, 10, 11, 12, 15},
                      {20, 30, 40, 50, 60}};


    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}