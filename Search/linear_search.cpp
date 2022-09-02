#include<iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n=5;
    int arr[] = {9,3,6,1,4};
    int x = 3;
    int res = search(arr,n,x);
    cout << x << " is at index " << res << endl;
}