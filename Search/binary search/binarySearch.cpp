#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        
        if(arr[mid] == x)
            return mid;
        if(x > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2,3,5,7,9,23,54};
    int n = sizeof(arr)/sizeof(int);
    int x = 7;
    cout << "Element " << x << " is at index = " << binarySearch(arr, n, x);   
    return 0;
}