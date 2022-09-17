#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(name[i++],name[j--]);
    }
}

void printReversed(char name[])
{
    string named = name;
    for(int i=named.length()-1; i>=0; i--)
    {
        cout << named[i];
    }
}

int main()
{
    char name[] = "Anderson";
    int n = 8;
    reverseString(name,n);
    cout << "Reversed= " <<  name << endl;
}
