#include<iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
     {1, 2},
     {5, 6},
                       }; 
    for(int i = 0; i < 2; i++)
    {
        int sum=0;
        for(int j = 0; j < 2; j++)
        {
            sum=sum+arr[i][j];
            cout<<"sum of row"<<i+1<<" = "<<sum<<endl<<endl;
        }
        cout <<endl<<endl;
    }

    return 0;
}