#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1){
        cout << 1<<"\n";
        return;
    }
  
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout <<"\n";
  
    print(n-1);
  
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout <<"\n";
}

int main()
{
  print(5);
  
  return 0;
}
