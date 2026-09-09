#include<iostream>
using namespace std;

int main()
{
    int p,q,sum=0;
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
    cout << endl<< endl;
    for(int i=0;i<p;i++){
for(int j=0;j<q;j++){
    sum+=arr[i][j];
}
    }
    cout<<sum;

    return 0;
}