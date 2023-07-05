#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,temp;
    string s,a;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    n=s.length();
    a=s;
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    if(a==s)
    {
        cout<<"The string is a palindrome."<<endl;
    }
    else
    {
        cout<<"The string is not a palindrome"<<endl;
    }
}