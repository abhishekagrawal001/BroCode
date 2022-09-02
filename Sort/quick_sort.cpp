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

//pivot as last element
int partitionLast(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j<high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

//pivot as first element
int partitionFirst(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        // int p = partitionLast(arr,low,high); //for pivot as last index
        int p = partitionFirst(arr,low,high);   //for pivot as first index
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int main()
{
    int n = 5;
    // int arr[n] = {64, 25, 12, 22, 11};
    int arr[n] = {83,27,46,72,5};
    cout << "Before : ";
    print(arr,n);
    quicksort(arr,0,n-1);
    cout << "After : ";
    print(arr,n);
}

//Best time complexity = O(NlogN)
//Worst t.c. = O(N*N)
//Despite O(N*N) t.c. it is faster, in-place,cache friendly
//uses Divide & Conquer approach
