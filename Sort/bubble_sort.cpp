#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Brute-force
void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//Optimised
void bubbleSort(int arr[], int n)
{
    bool flag;
    for(int i=0;i<n-1;i++)
    {
        flag = false;
        for(int j=0;j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
}

//Recursive approach
void recursiveSort(int arr[], int n)
{
    if(n==0 || n==1)
        return;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    recursiveBubble(arr,n-1);
}

int main()
{
    int n=5;
    int arr[n] = {5, 1, 4, 2, 8};

    // sort(arr,n);
    // bubbleSort(arr,n);
    // recursiveSort(arr,n);
    print(arr,n);
}

//best time complexity = O(N) when array is already sorted
//worst time complexity = O(N*N) when array is reversed(decending)
