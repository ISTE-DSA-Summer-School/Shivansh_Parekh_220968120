#include<iostream>
#include<string>
using namespace std;
char non_repeated(string s)
{
    int n,i,j,count;
    n=s.length();
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
        if (count==1)
        {
            return s[i];
        }
    }
}
int main()
{
    string s;
    char ch;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    ch=non_repeated(s);
    cout<<ch;
    return 0;
}
