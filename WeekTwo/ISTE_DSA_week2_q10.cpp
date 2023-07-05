#include<iostream>
#include<string>
#include<list>
using namespace std;
list<char> most_frequent_char(string s)
{
    int n,i,j,count,l=0,f=0;
    n=s.length();
    list<char> c;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
        if(count>l)
        {
            l=count;
        }
    }
    for(i=0;i<n;i++)
    {
        f=0;
        count=0;
        for(j=0;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        } 
        if(count==l)
        {
            for (char k:c)
            {
                if(k==s[i])
                {
                    f=1;
                    break;
                }
            }
            if (f==0)
            {
                c.push_back(s[i]);
            }
                
        }
    }
    return c;
}
int main()
{
    
    string s;
    list<char> c;
    cout<<"Enter string:"<<endl;
    getline(cin,s);
    c=most_frequent_char(s);
    for(char i:c)
    {
        cout<<i<<' ';
    }
    return 0;
}