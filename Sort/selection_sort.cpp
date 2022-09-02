#include<iostream>
using namespace std;

void print(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sort(int arr[], int n)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        int minIndex=0;
        for(int j=1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        temp[i] = arr[minIndex];
        arr[minIndex] = INT_MAX;
    }
    
    for(int i=0; i<n; i++)
    {
        arr[i] = temp[i];
    }
}

//Optimised Approach
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {65,21,56,24,3};
    
//     sort(arr,n);
    selectionSort(arr,n);
    print(arr,n);
    
    return 0;
}


//Does less memory writes compared to other sorts
//Worst/Best Time complexity = O(N*N)
