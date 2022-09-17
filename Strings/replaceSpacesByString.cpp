#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str)
{
    string res = "";
    for(int i=0; i<str.length() ; i++)
    {
        if(str[i]==' '){
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
        else
            res.push_back(str[i]);
    }
    return res;
}

int main()
{
    string s = "This is a sample";
    cout << replaceSpaces(s) << endl;
}
