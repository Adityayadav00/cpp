#include<iostream>
using namespace std;
int main()
{
    int r,c;

    cout<<endl<<"---CHECK TRANSPOSE OF MATRIX---"<<endl<<endl;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout <<i<< "*" <<j<< "=";
            cin>>arr[i][j];
        }
    }
    //normal matrix
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose matrix
    cout<<endl<<"Transpose of the matrix:"<<endl;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
