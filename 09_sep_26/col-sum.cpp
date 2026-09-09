 #include<iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
     {1, 2},
     {5, 6},
                       }; 
    for(int j = 0; j < 2; j++)
    {
        int sumc=0;
        for(int i = 0; i < 2; i++)
        {
            sumc+=arr[j][i];
            cout<<"sum of column"<<j+1<<" = "<<sumc<<endl<<endl;
        }
        cout <<endl<<endl;
    }

    return 0;
}