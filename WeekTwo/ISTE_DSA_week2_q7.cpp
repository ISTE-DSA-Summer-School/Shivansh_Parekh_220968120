#include<iostream>
#include<string>
using namespace std;
string upper(string s)
{
    int i,n;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]<=122 & s[i]>=97)
        {
            s[i]=char(int(s[i])-32);
        }
    }
    return s;
}
int main()
{
    string s;
    cout<<"enter string:"<<endl;
    getline(cin,s);
    s=upper(s);
    cout<<s;
    return 0;
}