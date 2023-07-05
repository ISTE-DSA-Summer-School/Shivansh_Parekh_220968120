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
    for(i=0;i<n/4;i++)
    {
        temp=s[i];
        s[i]=s[n/2-1-i];
        s[n/2-1-i]=temp;
    }
    
    for(i=n/2;i<3*n/4;i++)
    {
        temp=s[i];
        s[i]=s[n-1-i+n/2];
        s[n-1-i+n/2]=temp;
    }
    
    
    cout<<s<<endl;
    return 0;
}
