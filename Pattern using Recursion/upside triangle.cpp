#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
        return;
  
    for(int i=1; i<=n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
  
    print(n-1);
}

int main()
{
    print(8);
    
    return 0;
}
