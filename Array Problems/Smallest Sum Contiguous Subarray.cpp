#include<iostream>
using namespace std;
int smallestSumSubarray(vector<int>& a){
      int min_ending_here = INT_MAX; //to store the min value i.e. ending up to the current index
      int min_so_far = INT_MAX;//to store the min value encountered so far
      
      for(int i=0; i<a.size() ;i++)//traverse the vector elements
      {
          //if min_ending_here > 0, then it could not possibly contribute to the minimum sum further
          if(min_ending_here>0)      
            min_ending_here = a[i];
          
          //add the value a[i] to min_ending_here 
          else
            min_ending_here += a[i];
        
          // update minimum value till now
          min_so_far = min(min_so_far, min_ending_here);
      }
      // required smallest sum contiguous subarray value
      return min_so_far;
  }
int main()
{
  int n=5;
  vector<int> vec{ 3,-4,2,-3,-1,7,-5};
  cout << smallestSumSubarray(vec) << endl; //output = -6 (-4,2,-3,-1)
}
