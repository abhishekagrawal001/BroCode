#include<bits/stdc++.h>
using namespace std;

void toLowerCase(char name[])
{
    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
            name[i] += 32;
    }
}

int main()
{
    char name[] = "ANDERSON";
    toLowerCase(name);
    cout << "lowered string: " <<  name << endl;
}
