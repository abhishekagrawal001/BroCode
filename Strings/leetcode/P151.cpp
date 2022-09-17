//reverse words of string and remove whitespaces
#include<bits/stdc++.h>
using namespace std;

void solve(string &s) {
        
    int i=0, j=0;
    int l=0;
    int len=s.length();
    int wordcount=0;
    
    while(true){
        while(i<len && s[i] == ' ') i++;  // skip spaces in front of the word
        if(i==len) break;
        if(wordcount) s[j++]=' ';
        l=j;
        while(i<len && s[i] != ' ') 
        {
            s[j]=s[i]; 
            j++; 
            i++;
        } 
        reverseWord(s,l,j-1);                // reverse word in place
        wordcount++;
    }
    s.resize(j);                           // resize result string
    reverseWord(s,0,j-1);                  // reverse whole string
}
