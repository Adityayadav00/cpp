#include <iostream>
using namespace std;

int main()
{
    int n =7,key=0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout<<"Enter element to find: ";
    cin>>key;

    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}