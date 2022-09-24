#include<iostream>
using namespace std;

void rowSum(int arr[3][3])
{
	for(int i=0; i<3; i++)
	{
		int sum=0;
		for(int j=0; j<4; j++)
		{
			sum += arr[i][j];
		}
		cout << sum << endl;
	}
}

void colSum(int arr[3][3])
{
	for(int i=0; i<3; i++)
	{
		int sum=0;
		for(int j=0; j<3; j++)
		{
			sum += arr[j][i];
		}
		cout << sum << " ";
	}
}

int main()
{
	int arr[3][3];
	
	// take input -> row wise input
	for(int row=0; row<3; row++)
		for(int col=0; col<3; col++)
			cin>>arr[row][col];
	
	colSum(arr);
	
	return 0;
}
