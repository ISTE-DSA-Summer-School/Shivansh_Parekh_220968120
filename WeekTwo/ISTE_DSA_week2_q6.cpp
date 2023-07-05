#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,nl=0,n,k=0,n1;
    string s;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            n1=s.substr(k,i-k).length();
            if(n1>nl)
            {
                nl=n1;
            }
            k=i;
        }
    }
    if (s.substr(k+1,n-1).length()>nl)
    {
        nl=s.substr(k+1,n-1).length();
    }
    cout<<"length of longest word: "<<nl<<endl;
    return 0;
}