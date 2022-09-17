#include<bits/stdc++.h>
using namespace std;

void reverseWord(string &str, int s, int e)
{
    while(s<=e)
    {
        swap(str[s],str[e]);
        s++; 
        e--;
    }
}

string reverseStringByWords(string str, int n)
{
    int begin=0;
    for(int end=0; end<n; end++)
    {
        if(str[end] == ' ')
        {
            reverseWord(str, begin, end-1);
            begin = end+1;
        }
    }
    reverseWord(str, begin, n-1);
    reverseWord(str, 0, n-1);
    
    return str;
}

int main()
{
    string name = "I live in a big house.";
    int n = name.length();
    cout << reverseStringByWords(name,n);
}
