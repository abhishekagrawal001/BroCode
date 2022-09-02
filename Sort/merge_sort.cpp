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

void mergeSort(int arr[], int low, int high)
{
  if(low<high)
  {
    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low, mid, high);
  }
}

void merge(int arr[], int low, int mid, int high)
{
  int n = mid-low+1;
  int m = high-mid;
  int left[n];
  int right[m];
  
  //populate left and right array
  for(int i=0; i<n; i++)
  {
    left[i] = arr[i+low];
  }
  for(int j=0; j<m; j++)
  {
    right[j] = arr[mid+1+j];
  }
  
  int i=0,j=0,k=low;
  while(i<n && j<m)
  {
    if(left[i]<=right[j])
    {
        arr[k] = left[i];
        k++;i++;
    }
    else{
        arr[k] = right[j];
        k++;j++;
    }
  }
  while(i<n1)
  {
        arr[k] = left[i];
        i++;k++;
  }
  while(j<n2)
  {
      arr[k] = right[j];
      j++;k++;
  }
  delete[] left;
  delete[] right;
}

int main()
{
  int n = 6;
  int arr[] = {7,2,63,62,14,8};
  
  mergeSort(arr,0,n-1);
  print(arr,n);
}


//Best/Worst Time complexity = O(NlogN)
//When order of input is not known, merge sort is preferred as it has worst case time complexity of nlogn and it is stable as well.
  
