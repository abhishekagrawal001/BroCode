#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// 	int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    
    // take input from user -> row wise input
	for(int row=0; row<3; row++)
		for(int col=0; col<4; col++)
			cin>>arr[row][col];
    
    //take input from user -> col wise input
	for(int col=0; col<4; col++)
		for(int row=0; row<3; row++)
			cin>>arr[row][col];
    
    //print 2d array
	for(int row=0; row<3; row++){
		for(int col=0; col<4; col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<'\n';
	}
    
    return 0;
}
