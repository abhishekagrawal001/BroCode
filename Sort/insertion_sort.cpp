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

void sort(int arr[], int n)
{
    for(int i=1; i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
      
      //this loop shift elements larger than key to right to create position for key
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {64, 25, 12, 22, 11};

    sort(arr,n);
    print(arr,n);
}

//Good for partially sorted array or small sized array
//Worst time complexity = O(N*N)  when array in descending order
//Best time complexity = O(N) when array is already sorted

