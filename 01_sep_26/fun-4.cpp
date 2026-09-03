#include<iostream>
using namespace std;

int fun4(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int sum= fun4(20,90);
    cout << sum;
    return 0;
}