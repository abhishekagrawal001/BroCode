#include<bits/stdc++.h>
using namespace std;

//get length of string
int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

//convert to lowercase character
char toLower(char ch)
{
    if(ch>='a' && ch<='z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//check palindrome
bool isPalindrome(char name[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(toLower(name[i]) != toLower(name[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char name[] = "abcba";
    int n = getLength(name);
    if(isPalindrome(name,5)){
        cout << "Its a palindrome" << endl;
    }else{
        cout << "It's not a palindrome" << endl;
    }
}
