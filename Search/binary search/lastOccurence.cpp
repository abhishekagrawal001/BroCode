#include <iostream>
using namespace std;

int last(int arr[], int n, int key)
{
    int l = 0;
    int h = n-1;
    while (l <= h)
    {
        int mid = l + (h-l)/2;

        if(arr[mid] > key)
            h = mid - 1;
        else if(arr[mid] < key)
            l = mid + 1;
        else{
            if(mid == n-1 || arr[mid]!=arr[mid+1])
                return mid;
            else
                l = mid + 1;
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {2,2,2,3,3,3,4,4,5};
    int n = sizeof(arr)/sizeof(int);
    int x = 2;
    cout << "Last occurence of " << x << " is at index = " << last(arr, n, x);   
    return 0;
}