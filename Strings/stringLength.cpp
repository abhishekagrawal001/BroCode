#include<iostream>
#include<cstring>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int len(char name[])
{
    int n = sizeof(name)/sizeof(name[0]);
    return n;
}


int main()
{
    char name[20] = "Anderson";
    cout << "Length = " << getLength(name) << endl;
    cout << "Length = " << strlen(name) << endl;
    cout << "Length = " << len(name) << endl;
    string newname = name;
    cout << "Length = " << newname.length() << endl;
}
    
