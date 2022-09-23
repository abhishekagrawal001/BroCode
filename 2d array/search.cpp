#include<iostream>
using namespace std;
bool search(int arr[][4], int x)    //mention the column size atleast
{
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			if(arr[i][j]==x)
				return true;
	return false;
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout << "Enter element to search: ";
	int target;
	cin >> target;
    if(search(arr,target))
	    cout << "Found";
    else
        cout << "Not Found";
	
	return 0;
}
