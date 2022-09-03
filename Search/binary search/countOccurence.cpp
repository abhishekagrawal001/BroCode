#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
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
        else {
            if(mid == 0 || arr[mid-1] != arr[mid])
                return mid;
            else
                h = mid -1;
        }
    }
    return -1;
    
}
int lastOccurence(int arr[], int n, int key)
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
int count(int arr[], int n, int key)
{
    int first = firstOccurence(arr,n,key);
    if(first==-1)
        return 0;
    else
        return (lastOccurence(arr,n,key) - first + 1);
}

int main()
{
    int n = 5;
    int arr[] = {3,10,10,44,65};
    int x = 10;
    int res = count(arr,n,x);
    cout << "Element " << x << " occured " << res << " times" << endl;
}