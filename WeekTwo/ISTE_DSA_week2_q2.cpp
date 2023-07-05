#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,n,temp;
    string s;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    n=s.length();
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout<<"reversed string: "<<s<<endl;
    return 0;

}
