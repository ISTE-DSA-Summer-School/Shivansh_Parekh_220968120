#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string is_anagram(string s1, string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        return "True";
    }
    else
    {
        return "False";
    }
}
int main()
{
    string s1,s2;
    string r;
    cout<<"Enter string 1: "<<endl;
    getline(cin,s1);
    cout<<"Enter string 2: "<<endl;
    getline(cin,s2);
    r=is_anagram(s1,s2);
    cout<<r;
    return 0;
}