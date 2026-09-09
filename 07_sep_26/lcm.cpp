#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a=6;
    int b=3;
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<"LCM = "<<i;
            break;
        }
    }

    return 0;
}