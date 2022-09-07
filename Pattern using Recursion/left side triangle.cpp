#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0){
      return;
    }
  
    print(n-1);
  
    for(int i=1; i<=n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    print(7);
    return 0;
}
